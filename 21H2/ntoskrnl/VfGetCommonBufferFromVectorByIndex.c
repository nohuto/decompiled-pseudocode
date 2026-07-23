/*
 * XREFs of VfGetCommonBufferFromVectorByIndex @ 0x1409CCDF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ViGetRealDmaOperation @ 0x1409CFA50 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfGetCommonBufferFromVectorByIndex(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, _QWORD, __int64, __int64); // rax

  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64))ViGetRealDmaOperation(a1);
  return RealDmaOperation(a1, a2, a3, a4, a5);
}
