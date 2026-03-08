/*
 * XREFs of WPP_RECORDER_SF_Sd @ 0x1C005109C
 * Callers:
 *     UsbhBuildClassCompatibleID @ 0x1C004EE18 (UsbhBuildClassCompatibleID.c)
 *     UsbhBuildDeviceID @ 0x1C004F9EC (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x1C004FCFC (UsbhBuildHardwareID.c)
 *     CheckUSBFnConfiguration @ 0x1C005C27C (CheckUSBFnConfiguration.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C005CACC (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 *     UpdateUcmIsPresentBit @ 0x1C005CC80 (UpdateUcmIsPresentBit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Sd(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6,
        ...)
{
  __int64 v6; // rdi
  const wchar_t *v7; // rbx
  unsigned int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // rdx
  const wchar_t *v13; // rcx
  bool v14; // zf
  int v16; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = -1LL;
  v7 = a6;
  v10 = a2;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
  {
    if ( a6 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a6[v11] );
      v12 = 2 * v11 + 2;
    }
    else
    {
      v12 = 10LL;
    }
    v13 = a6;
    if ( !a6 )
      v13 = L"NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      v13,
      v12,
      va,
      4LL,
      0LL);
  }
  v14 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v6;
    while ( a6[v6] );
    v14 = a6 == 0LL;
  }
  if ( v14 )
    v7 = L"NULL";
  LOWORD(v16) = a4;
  return WppAutoLogTrace(a1, v10, 1LL, a5, v16, v7);
}
