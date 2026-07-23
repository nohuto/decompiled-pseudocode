/*
 * XREFs of VerifierPortExAllocatePoolWithTagPriority @ 0x1409E5D30
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140346E30 (ExAllocatePoolWithTagPriority.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

PVOID __fastcall VerifierPortExAllocatePoolWithTagPriority(POOL_TYPE a1, SIZE_T a2, ULONG a3, EX_POOL_PRIORITY a4)
{
  if ( (MmVerifierData & 0x400000) == 0 || (MmVerifierData & 1) != 0 )
    return (PVOID)((__int64 (__fastcall *)(_QWORD))pXdvExAllocatePoolWithTagPriority)(a1 | 0x80u);
  else
    return ExAllocatePoolWithTagPriority(a1, a2, a3, a4);
}
