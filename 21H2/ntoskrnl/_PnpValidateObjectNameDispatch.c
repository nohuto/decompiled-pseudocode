/*
 * XREFs of _PnpValidateObjectNameDispatch @ 0x140607DC8
 * Callers:
 *     _PnpValidateObjectName @ 0x140607D08 (_PnpValidateObjectName.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     _PnpCtxGetObjectDispatchCallback @ 0x14062CD78 (_PnpCtxGetObjectDispatchCallback.c)
 */

__int64 __fastcall PnpValidateObjectNameDispatch(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 result; // rax
  __int64 (__fastcall *v9[2])(_QWORD, _QWORD, _QWORD, __int64, _DWORD *); // [rsp+30h] [rbp-58h] BYREF
  _DWORD v10[16]; // [rsp+40h] [rbp-48h] BYREF

  v9[0] = 0LL;
  memset(v10, 0, sizeof(v10));
  if ( (_WORD)a4 )
    return 3221225485LL;
  result = PnpCtxGetObjectDispatchCallback(a1, a3, v9);
  if ( (int)result >= 0 )
  {
    if ( v9[0] )
    {
      v10[0] = a4;
      return v9[0](a1, a2, a3, 1LL, v10);
    }
    else
    {
      return 3221225474LL;
    }
  }
  return result;
}
