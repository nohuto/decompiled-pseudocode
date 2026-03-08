/*
 * XREFs of MiContractWsSwapPageFile @ 0x14067E2A0
 * Callers:
 *     MmInSwapWorkingSet @ 0x1402000BC (MmInSwapWorkingSet.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1406392E0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmCleanProcessAddressSpace @ 0x1407D4924 (MmCleanProcessAddressSpace.c)
 *     MmInSwapVirtualAddresses @ 0x140A407F0 (MmInSwapVirtualAddresses.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x140295BC8 (PsReferencePartitionSafe.c)
 *     MiWsSwapPageFileNumber @ 0x1402DBEE4 (MiWsSwapPageFileNumber.c)
 *     ExQueueWorkItemToPartition @ 0x1403439E0 (ExQueueWorkItemToPartition.c)
 *     MiNumberWsSwapPagefiles @ 0x140361990 (MiNumberWsSwapPagefiles.c)
 */

char __fastcall MiContractWsSwapPageFile(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // r11
  __int64 v3; // r11
  _QWORD *v4; // rcx
  __int64 v5; // r11

  LODWORD(v1) = MiNumberWsSwapPagefiles(a1);
  if ( (_DWORD)v1 )
  {
    LODWORD(v1) = MiWsSwapPageFileNumber(v2);
    v4 = *(_QWORD **)(v3 + 8LL * (unsigned int)v1 + 17056);
    if ( v4[3] >= 0x10000uLL && v4[6] >= 0x10000uLL )
    {
      v1 = *v4 - 0x10000LL;
      if ( v1 >= v4[2] )
      {
        LODWORD(v1) = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 1160), 1, 0);
        if ( !(_DWORD)v1 )
        {
          LOBYTE(v1) = PsReferencePartitionSafe(*(_QWORD *)(v3 + 200));
          if ( (_BYTE)v1 )
            LOBYTE(v1) = ExQueueWorkItemToPartition((_QWORD *)(v5 + 1128), 3, 0xFFFFFFFF, *(_QWORD *)(v5 + 200));
          else
            _InterlockedExchange((volatile __int32 *)(v5 + 1160), 0);
        }
      }
    }
  }
  return v1;
}
