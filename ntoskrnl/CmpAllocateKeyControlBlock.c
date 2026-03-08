/*
 * XREFs of CmpAllocateKeyControlBlock @ 0x140A14CE8
 * Callers:
 *     CmpCloneToUnbackedKcb @ 0x140A14164 (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     ExAllocateFromLookasideListEx @ 0x14030DE20 (ExAllocateFromLookasideListEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

PVOID CmpAllocateKeyControlBlock()
{
  PVOID v0; // rax
  PVOID v1; // rbx

  _InterlockedIncrement64(&CmPerfCounters);
  v0 = ExAllocateFromLookasideListEx(&CmpKcbLookaside);
  v1 = v0;
  if ( v0 )
  {
    _InterlockedIncrement64(qword_140D55300);
    memset(v0, 0, 0x138uLL);
  }
  return v1;
}
