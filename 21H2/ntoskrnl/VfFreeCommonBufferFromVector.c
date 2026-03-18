/*
 * XREFs of VfFreeCommonBufferFromVector @ 0x140A85910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ViGetRealDmaOperation @ 0x140A88738 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfFreeCommonBufferFromVector(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, _QWORD); // rax

  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, _QWORD))ViGetRealDmaOperation(a1);
  return RealDmaOperation(a1, a2, a3);
}
