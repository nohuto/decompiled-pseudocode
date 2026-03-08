/*
 * XREFs of VfFlushDmaBuffer @ 0x1405CC450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ViGetRealDmaAdapter @ 0x140AC6158 (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfFlushDmaBuffer(int a1, __int64 a2, char a3)
{
  __int64 RealDmaAdapter; // rax
  __int64 v6; // r8

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  LOBYTE(v6) = a3;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(RealDmaAdapter + 8) + 240LL))(
           RealDmaAdapter,
           a2,
           v6);
}
