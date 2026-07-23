/*
 * XREFs of _NtPlugPlayGetDeviceInterfaceEnabled @ 0x1406361F8
 * Callers:
 *     _CmIsDeviceInterfaceEnabled @ 0x1406361B0 (_CmIsDeviceInterfaceEnabled.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     _PnpCtxGetNtPlugPlayRoutine @ 0x140636250 (_PnpCtxGetNtPlugPlayRoutine.c)
 */

__int64 __fastcall NtPlugPlayGetDeviceInterfaceEnabled(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r10
  __int64 v5; // r11
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF

  v6[0] = 0LL;
  result = PnpCtxGetNtPlugPlayRoutine(a1, 5LL, v6);
  if ( (int)result >= 0 )
  {
    if ( v6[0] )
      return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))v6[0])(v4, a2, v5, 0LL);
    else
      return 3221225474LL;
  }
  return result;
}
