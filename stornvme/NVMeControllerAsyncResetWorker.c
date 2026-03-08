/*
 * XREFs of NVMeControllerAsyncResetWorker @ 0x1C000CBD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004200 (_guard_dispatch_icall_nop.c)
 *     NVMeControllerReset @ 0x1C000E4D8 (NVMeControllerReset.c)
 */

__int64 __fastcall NVMeControllerAsyncResetWorker(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r9
  void (__fastcall *v8)(__int64, __int64, _QWORD); // rax
  __int64 result; // rax
  __int64 v10; // r9

  LOBYTE(v6) = NVMeControllerReset(a1);
  v8 = *(void (__fastcall **)(__int64, __int64, _QWORD))(a2 + 8);
  if ( v8 )
    v8(a1, v6, *(_QWORD *)(a2 + 16));
  result = StorPortExtendedFunction(1LL, a1, a2, v7);
  if ( a3 )
    return StorPortExtendedFunction(31LL, a1, a3, v10);
  return result;
}
