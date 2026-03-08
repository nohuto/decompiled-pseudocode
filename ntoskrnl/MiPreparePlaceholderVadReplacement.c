/*
 * XREFs of MiPreparePlaceholderVadReplacement @ 0x140A451C8
 * Callers:
 *     MiReserveUserMemory @ 0x1407D4340 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1407D57C0 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiReferenceVad @ 0x14031F794 (MiReferenceVad.c)
 *     MiRemoveVad @ 0x140333090 (MiRemoveVad.c)
 *     PerfInfoLogVirtualFree @ 0x1409E42D4 (PerfInfoLogVirtualFree.c)
 */

void __fastcall MiPreparePlaceholderVadReplacement(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rax

  _InterlockedIncrement((volatile signed __int32 *)(a3 + 232));
  MiReferenceVad(a1);
  MiRemoveVad(a1, 0, 0LL);
  *(_QWORD *)(a2 + 1176) += (((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
                            - (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))) << 12)
                          - 4096;
  if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 )
  {
    v5 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
    PerfInfoLogVirtualFree(
      v5 << 12,
      ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) - v5 + 1) << 12,
      a2,
      0x8000);
  }
}
