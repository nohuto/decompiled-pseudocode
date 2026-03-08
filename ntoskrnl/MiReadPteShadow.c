/*
 * XREFs of MiReadPteShadow @ 0x140224390
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x1406EBE40 (MiPfPrepareSequentialReadList.c)
 *     MiIsRangeFullyCommitted @ 0x1407C4160 (MiIsRangeFullyCommitted.c)
 *     MiPfPrepareReadList @ 0x1407C42F0 (MiPfPrepareReadList.c)
 *     MiPrefetchDriverPages @ 0x1407C81C0 (MiPrefetchDriverPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReadPteShadow(unsigned __int64 a1, __int64 a2)
{
  struct _LIST_ENTRY *Flink; // rax
  __int64 v4; // rax

  if ( (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (a2 & 1) != 0
    && ((a2 & 0x20) == 0 || (a2 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v4 = *((_QWORD *)&Flink->Flink + ((a1 >> 3) & 0x1FF));
      if ( (v4 & 0x20) != 0 )
        a2 |= 0x20uLL;
      if ( (v4 & 0x42) != 0 )
        return a2 | 0x42;
    }
  }
  return a2;
}
