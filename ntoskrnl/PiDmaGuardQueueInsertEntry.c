/*
 * XREFs of PiDmaGuardQueueInsertEntry @ 0x14096F04C
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x140867254 (PiDmaGuardProcessPostRemove.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x140968304 (PipDmgEnforceEnumerationPolicy.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     PipDgqInsertEntry @ 0x14096F100 (PipDgqInsertEntry.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDmaGuardQueueInsertEntry(PVOID Object, int a2)
{
  unsigned int v4; // ebx
  __int64 Pool2; // rdi

  v4 = 0;
  Pool2 = ExAllocatePool2(256LL, 32LL, 1685089872LL);
  if ( Pool2 )
  {
    ObfReferenceObjectWithTag(Object, 0x64706E50u);
    *(_QWORD *)(Pool2 + 16) = Object;
    *(_DWORD *)(Pool2 + 24) = a2;
    PipDgqInsertEntry(Pool2);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
