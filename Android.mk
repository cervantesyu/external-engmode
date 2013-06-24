
LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_SRC_FILES:= \
        engmode.c \

LOCAL_SHARED_LIBRARIES := \
        libcutils

LOCAL_MODULE := libengmode
LOCAL_MODULE_PATH := $(TARGET_OUT_SHARED_LIBRARIES)/hw
LOCAL_MODULE_TAGS := eng
include $(BUILD_SHARED_LIBRARY)

