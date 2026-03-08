/*
 * XREFs of MiFaultGetFileExtents @ 0x1406438D0
 * Callers:
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x140287B5C (MiFreeInPageSupportBlock.c)
 *     MiReleaseFaultState @ 0x1402A2FD4 (MiReleaseFaultState.c)
 *     MiGetSharedProtos @ 0x1402CCDF8 (MiGetSharedProtos.c)
 *     MiReleaseFaultCharges @ 0x1402F8018 (MiReleaseFaultCharges.c)
 *     MiRetainSubsection @ 0x1402F9278 (MiRetainSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetSessionIdForVa @ 0x140343520 (MiGetSessionIdForVa.c)
 *     MiDereferenceControlArea @ 0x14036CC30 (MiDereferenceControlArea.c)
 *     MiAllocateFileExtents @ 0x140A303A8 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiFaultGetFileExtents(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  __int64 v5; // r14
  unsigned int SessionIdForVa; // r15d
  unsigned int FileExtents; // ebx

  v2 = *(_QWORD *)(a2 + 208);
  v5 = *(_QWORD *)v2;
  if ( (*(_BYTE *)(v2 + 34) & 2) != 0 )
  {
    SessionIdForVa = MiGetSessionIdForVa(a1, *(_QWORD *)(a2 + 224));
    MiGetSharedProtos(v5, SessionIdForVa, v2);
  }
  else
  {
    SessionIdForVa = 0;
  }
  MiRetainSubsection((__int64 *)v2);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
  ++*(_QWORD *)(v5 + 40);
  ++*(_QWORD *)(v5 + 48);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
  MiReleaseFaultState(a1 + 56, 0x11u, 0LL);
  FileExtents = MiAllocateFileExtents(v2, 2, SessionIdForVa);
  MiFreeInPageSupportBlock((PSLIST_ENTRY)a2);
  MiDereferenceControlArea(v5);
  MiReleaseFaultCharges((__int64 *)v2);
  return FileExtents;
}
