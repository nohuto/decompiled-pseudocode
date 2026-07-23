/*
 * XREFs of MiFaultGetFileExtents @ 0x140548330
 * Callers:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x14027CF5C (MiFreeInPageSupportBlock.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140295410 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     MiReleaseFaultCharges @ 0x14032243C (MiReleaseFaultCharges.c)
 *     MiRetainSubsection @ 0x140322A84 (MiRetainSubsection.c)
 *     MiDereferenceControlArea @ 0x14032CAF8 (MiDereferenceControlArea.c)
 *     MiGetSharedProtos @ 0x1403A5B08 (MiGetSharedProtos.c)
 *     MiReleaseFaultSynchronization @ 0x140548E04 (MiReleaseFaultSynchronization.c)
 *     MiAllocateFileExtents @ 0x1408CF560 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiFaultGetFileExtents(__int64 a1, _SLIST_ENTRY *a2)
{
  ULONG_PTR Next; // rdi
  __int64 v5; // r14
  unsigned int SessionId; // eax
  unsigned int FileExtents; // ebx

  Next = (ULONG_PTR)a2[13].Next;
  v5 = *(_QWORD *)Next;
  if ( (*(_BYTE *)(Next + 34) & 2) != 0 )
  {
    SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    MiGetSharedProtos(v5, SessionId, Next);
  }
  MiRetainSubsection((_QWORD *)Next);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
  ++*(_QWORD *)(v5 + 40);
  ++*(_QWORD *)(v5 + 48);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
  MiReleaseFaultSynchronization(a1);
  FileExtents = MiAllocateFileExtents(Next, 2);
  MiFreeInPageSupportBlock(a2);
  MiDereferenceControlArea(v5);
  MiReleaseFaultCharges((__int64 *)Next);
  return FileExtents;
}
