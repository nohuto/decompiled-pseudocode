/*
 * XREFs of _CmGetDeviceStatus @ 0x14078A470
 * Callers:
 *     PiCMDeviceAction @ 0x14065F3BC (PiCMDeviceAction.c)
 *     PiCMSetProblem @ 0x14065F700 (PiCMSetProblem.c)
 *     PiCMQueryRemove @ 0x14065F7D4 (PiCMQueryRemove.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14078600C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140789210 (_CmIsDeviceSafeRemovalRequired.c)
 *     PiCMValidateDeviceInstance @ 0x140789AEC (PiCMValidateDeviceInstance.c)
 *     PiCMGetDeviceStatus @ 0x140789CFC (PiCMGetDeviceStatus.c)
 *     PpDevCfgProcessDevices @ 0x140827F54 (PpDevCfgProcessDevices.c)
 *     PiCMDeleteDevice @ 0x140954E2C (PiCMDeleteDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140955848 (PiCMGenerateDeviceInstance.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     _CmGetDeviceRegProp @ 0x14077CD90 (_CmGetDeviceRegProp.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x140784C2C (_NtPlugPlayGetDeviceStatus.c)
 */

__int64 __fastcall CmGetDeviceStatus(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        int *a4,
        _DWORD *a5,
        _DWORD *a6,
        unsigned int a7)
{
  _DWORD *v7; // r14
  char v8; // bl
  _DWORD *v9; // r15
  int inited; // esi
  int v14; // edx
  int v16; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  int v19; // [rsp+B8h] [rbp+58h] BYREF

  v7 = a5;
  v8 = 0;
  v9 = a6;
  *a4 = 0;
  v19 = 0;
  *v7 = 0;
  *v9 = 0;
  DestinationString = 0LL;
  v16 = 0;
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited >= 0 )
  {
    inited = NtPlugPlayGetDeviceStatus(a1, (__int64)&DestinationString, (__int64)a4, (__int64)v7, (__int64)v9);
    if ( inited >= 0 )
    {
      a7 = 4;
      if ( !(unsigned int)CmGetDeviceRegProp(a1, (__int64)a2, a3, 11, (__int64)&v19, (__int64)&v16, (__int64)&a7, 0)
        && a7 >= 4
        && v19 == 4 )
      {
        v8 = v16;
      }
      v14 = *a4;
      if ( (v8 & 4) != 0 )
      {
        v14 |= 0x10u;
        *a4 = v14;
      }
      if ( (v14 & 0x400) == 0 && (v8 & 0x40) != 0 )
      {
        *a4 = v14 | 0x400;
        *v7 = 28;
      }
    }
  }
  return (unsigned int)inited;
}
