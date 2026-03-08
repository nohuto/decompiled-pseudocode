/*
 * XREFs of _CmGetDeviceStatus @ 0x1406C8624
 * Callers:
 *     PiCMGetDeviceStatus @ 0x1406C3FD8 (PiCMGetDeviceStatus.c)
 *     PiCMValidateDeviceInstance @ 0x1406C78A0 (PiCMValidateDeviceInstance.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA2A4 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x14078A594 (_CmIsDeviceSafeRemovalRequired.c)
 *     PpDevCfgProcessDevices @ 0x14081B964 (PpDevCfgProcessDevices.c)
 *     PiCMDeleteDevice @ 0x140965ED8 (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x14096671C (PiCMDeviceAction.c)
 *     PiCMGenerateDeviceInstance @ 0x140966C4C (PiCMGenerateDeviceInstance.c)
 *     PiCMQueryRemove @ 0x140967304 (PiCMQueryRemove.c)
 *     PiCMSetProblem @ 0x140967AB4 (PiCMSetProblem.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x1406C8898 (_NtPlugPlayGetDeviceStatus.c)
 *     _CmGetDeviceRegProp @ 0x1406C9884 (_CmGetDeviceRegProp.c)
 */

__int64 __fastcall CmGetDeviceStatus(
        int a1,
        const WCHAR *a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        unsigned int a7)
{
  _DWORD *v7; // r14
  char v8; // bl
  _DWORD *v9; // r15
  int v12; // r13d
  NTSTATUS inited; // esi
  int v15; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  int v18; // [rsp+B8h] [rbp+58h] BYREF

  v7 = a5;
  v8 = 0;
  v9 = a6;
  *a4 = 0;
  v18 = 0;
  *v7 = 0;
  *v9 = 0;
  v12 = (int)a2;
  DestinationString = 0LL;
  v15 = 0;
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited >= 0 )
  {
    inited = NtPlugPlayGetDeviceStatus(a1, (unsigned int)&DestinationString, (_DWORD)a4, (_DWORD)v7, (__int64)v9);
    if ( inited >= 0 )
    {
      a7 = 4;
      if ( !(unsigned int)CmGetDeviceRegProp(a1, v12, a3, 11, (__int64)&v18, (__int64)&v15, (__int64)&a7, 0)
        && a7 >= 4
        && v18 == 4 )
      {
        v8 = v15;
      }
      if ( (v8 & 4) != 0 )
        *a4 |= 0x10u;
      if ( (*a4 & 0x400) == 0 && (v8 & 0x40) != 0 )
      {
        *a4 |= 0x400u;
        *v7 = 28;
      }
    }
  }
  return (unsigned int)inited;
}
