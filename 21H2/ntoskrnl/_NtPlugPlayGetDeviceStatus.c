/*
 * XREFs of _NtPlugPlayGetDeviceStatus @ 0x140784C2C
 * Callers:
 *     _CmIsDevicePresent @ 0x1406C5724 (_CmIsDevicePresent.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14078600C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceStatus @ 0x14078A470 (_CmGetDeviceStatus.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     _PnpCtxGetNtPlugPlayRoutine @ 0x1407817E8 (_PnpCtxGetNtPlugPlayRoutine.c)
 */

__int64 __fastcall NtPlugPlayGetDeviceStatus(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v8; // r10
  __int64 v9; // r11
  _QWORD v10[3]; // [rsp+40h] [rbp-18h] BYREF

  v10[0] = 0LL;
  result = PnpCtxGetNtPlugPlayRoutine(a1, 2, v10);
  if ( (int)result >= 0 )
  {
    if ( v10[0] )
    {
      result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, _DWORD))v10[0])(
                 v8,
                 a2,
                 a3,
                 v9,
                 a5,
                 0);
      if ( (_DWORD)result == -2147483643 )
        return 3221225507LL;
    }
    else
    {
      return 3221225474LL;
    }
  }
  return result;
}
