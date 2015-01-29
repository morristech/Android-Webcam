/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_jwoolston_usb_webcam_libusb_UsbDeviceIsoConnection */

#ifndef _Included_com_jwoolston_usb_webcam_libusb_UsbDeviceIsoConnection
#define _Included_com_jwoolston_usb_webcam_libusb_UsbDeviceIsoConnection
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_jwoolston_usb_webcam_libusb_UsbDeviceIsoConnection
 * Method:    initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_jwoolston_usb_webcam_libusb_UsbDeviceIsoConnection_initialize(JNIEnv *env, jobject thisObj);

/*
 * Class:     com_jwoolston_usb_webcam_libusb_UsbDeviceIsoConnection
 * Method:    deinitialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_jwoolston_usb_webcam_libusb_UsbDeviceIsoConnection_deinitialize(JNIEnv *env, jobject thisObj);

/*
 * Class:     com_jwoolston_usb_webcam_libusb_UsbDeviceIsoConnection
 * Method:    isochronousTransfer
 * Signature: (Landroid/hardware/usb/UsbDeviceConnection;Ljava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_jwoolston_usb_webcam_libusb_UsbDeviceIsoConnection_isochronousTransfer(JNIEnv *env, jobject thisObj, jobject connection, jobject buffer);

#ifdef __cplusplus
}
#endif
#endif