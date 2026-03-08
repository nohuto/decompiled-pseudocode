/*
 * XREFs of MiUnmapVad @ 0x1406A2850
 * Callers:
 *     MiDeletePartialVad @ 0x1402D5768 (MiDeletePartialVad.c)
 *     MiUnmapViewOfSection @ 0x1406A2570 (MiUnmapViewOfSection.c)
 *     MiCleanVad @ 0x1407D36F8 (MiCleanVad.c)
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x1407D57C0 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140344094 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x1403441A0 (MiDereferenceControlAreaFile.c)
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 *     PfCheckDeprioritizeFile @ 0x1407E6FF0 (PfCheckDeprioritizeFile.c)
 *     MiLogMapFileEvent @ 0x1408A76B2 (MiLogMapFileEvent.c)
 */

__int64 __fastcall MiUnmapVad(unsigned int *P, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r14
  _KPROCESS *Process; // rcx

  if ( (P[16] & 0x2000000) != 0 )
  {
    v5 = **((_QWORD **)P + 9);
    v6 = MiReferenceControlAreaFile(v5);
    v7 = *(_QWORD *)(v6 + 24);
    MiDereferenceControlAreaFile(v5, v6);
    Process = KeGetCurrentThread()->ApcState.Process;
    a3 = (P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32))
       - (P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32))
       + 1;
    if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0 )
      PfCheckDeprioritizeFile(HIDWORD(Process[1].ActiveProcessors.StaticBitmap[8]), v7, a3);
  }
  if ( (PerfGlobalGroupMask & 0x8000) != 0 && *((_QWORD *)P + 9) )
    MiLogMapFileEvent(P, 1062LL, a3);
  return MiDeleteVad(P);
}
