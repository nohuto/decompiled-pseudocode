/*
 * XREFs of MiGetVaAge @ 0x140349610
 * Callers:
 *     MiProcessWsInSwapFault @ 0x140200008 (MiProcessWsInSwapFault.c)
 *     MiActOnPte @ 0x1402CF06C (MiActOnPte.c)
 *     MiUpdateWsleAge @ 0x1402CF54C (MiUpdateWsleAge.c)
 *     MiTrimPte @ 0x140349060 (MiTrimPte.c)
 *     MiTrimThisWsle @ 0x1403493EC (MiTrimThisWsle.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140349598 (MI_WSLE_LOG_ACCESS.c)
 *     MiResetAccessBitPteWorker @ 0x140463BAC (MiResetAccessBitPteWorker.c)
 *     MiUpdateOldPte @ 0x140463D20 (MiUpdateOldPte.c)
 *     MiSimpleAgePte @ 0x140632C70 (MiSimpleAgePte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MiGetVaAge(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rcx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v6; // rax
  char v7; // r8^7

  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
    return (*(_BYTE *)(48
                     * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                     - 0x220000000000LL) >> 1) & 7;
  v2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = *(_QWORD *)v2;
  if ( v2 >= 0xFFFFF6FB7DBED000uLL
    && v2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v6 = *((_QWORD *)&Flink->Flink + ((v2 >> 3) & 0x1FF));
      v7 = HIBYTE(*(_QWORD *)v2);
      if ( (v6 & 0x20) == 0 )
        v7 = HIBYTE(v3);
      HIBYTE(v3) = v7;
      if ( (v6 & 0x42) != 0 )
        HIBYTE(v3) = v7;
    }
  }
  return HIBYTE(v3) & 0xF;
}
