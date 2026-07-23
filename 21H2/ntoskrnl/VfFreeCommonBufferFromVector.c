/*
 * XREFs of VfFreeCommonBufferFromVector @ 0x1409CCC60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ViGetRealDmaOperation @ 0x1409CFA50 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfFreeCommonBufferFromVector(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, _QWORD); // rax

  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, _QWORD))ViGetRealDmaOperation(a1);
  return RealDmaOperation(a1, a2, a3);
}
