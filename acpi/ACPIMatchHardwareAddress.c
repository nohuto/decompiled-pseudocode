/*
 * XREFs of ACPIMatchHardwareAddress @ 0x1C0088CE8
 * Callers:
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C00824A0 (ACPIDetectCouldExtensionBeInRelation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     ACPIInternalQueryExtendedAddress @ 0x1C002ECC0 (ACPIInternalQueryExtendedAddress.c)
 *     WPP_RECORDER_SF_IqL @ 0x1C0032118 (WPP_RECORDER_SF_IqL.c)
 *     WPP_RECORDER_SF_IqLL @ 0x1C0032210 (WPP_RECORDER_SF_IqLL.c)
 *     ACPIInternalGetDeviceCapabilities @ 0x1C0087F60 (ACPIInternalGetDeviceCapabilities.c)
 */

__int64 __fastcall ACPIMatchHardwareAddress(PDEVICE_OBJECT DeviceObject, __int64 a2, _BYTE *a3)
{
  __int64 v6; // rdx
  int DeviceCapabilities; // ebp
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // [rsp+20h] [rbp-A8h]
  __int64 v12; // [rsp+50h] [rbp-78h] BYREF
  _DWORD v13[16]; // [rsp+60h] [rbp-68h] BYREF

  v12 = 0LL;
  memset(v13, 0, sizeof(v13));
  *a3 = 0;
  DeviceCapabilities = ACPIInternalGetDeviceCapabilities(DeviceObject, v13);
  if ( DeviceCapabilities >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_IqL(WPP_GLOBAL_Control->DeviceExtension, v6, v8, v9);
    v12 = v13[2];
    if ( (_DWORD)a2 == v13[2] )
    {
      *a3 = 1;
      if ( (int)ACPIInternalQueryExtendedAddress(DeviceObject, (__int64)&v12) >= 0 && a2 != v12 )
        *a3 = 0;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_IqLL((__int64)WPP_GLOBAL_Control->DeviceExtension, v6, v8, v9, v11);
  return (unsigned int)DeviceCapabilities;
}
