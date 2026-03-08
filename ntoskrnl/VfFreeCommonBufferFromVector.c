/*
 * XREFs of VfFreeCommonBufferFromVector @ 0x140AC3350
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ViGetRealDmaAdapter @ 0x140AC6158 (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfFreeCommonBufferFromVector(int a1, __int64 a2, unsigned int a3)
{
  __int64 RealDmaAdapter; // rax

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(RealDmaAdapter + 8) + 296LL))(
           RealDmaAdapter,
           a2,
           a3);
}
