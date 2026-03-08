/*
 * XREFs of _NtPlugPlayGetDeviceProperty @ 0x140786A08
 * Callers:
 *     _CmGetDeviceRegPropWorker @ 0x1406C9A04 (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA2A4 (_CmGetDeviceMappedPropertyFromComposite.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     _PnpCtxGetNtPlugPlayRoutine @ 0x1406C891C (_PnpCtxGetNtPlugPlayRoutine.c)
 */

__int64 __fastcall NtPlugPlayGetDeviceProperty(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v9; // r10
  __int64 v10; // r11
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF

  v11[0] = 0LL;
  result = PnpCtxGetNtPlugPlayRoutine(a1, 1, v11);
  if ( (int)result >= 0 )
  {
    if ( v11[0] )
    {
      result = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, int, __int64, _DWORD))v11[0])(
                 v9,
                 a2,
                 a3,
                 v10,
                 a5,
                 a6,
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
