/*
 * XREFs of VfAllocateCommonBufferVector @ 0x1409CBC00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ViGetRealDmaOperation @ 0x1409CFA50 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfAllocateCommonBufferVector(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, __int64, _QWORD, int, int, int, __int64, __int64); // rax

  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int, int, int, __int64, __int64))ViGetRealDmaOperation(a1);
  return RealDmaOperation(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}
