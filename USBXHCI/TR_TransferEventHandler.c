/*
 * XREFs of TR_TransferEventHandler @ 0x1C0041CD4
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008BE0 (Interrupter_DeferredWorkProcessor.c)
 *     Endpoint_TransferEventHandler @ 0x1C0009BA0 (Endpoint_TransferEventHandler.c)
 * Callees:
 *     Control_ProcessTransferEventWithED1 @ 0x1C0006840 (Control_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C000DAC4 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C0011324 (Bulk_ProcessTransferEventWithED1.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C0042974 (Control_ProcessTransferEventWithED0.c)
 */

char __fastcall TR_TransferEventHandler(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( a2 )
    return (*(__int64 (**)(void))(*(_QWORD *)(a2 + 32) + 88LL))();
  if ( (*(_DWORD *)a1 & 3) != 0 )
  {
    if ( (*(_DWORD *)a1 & 3) == 1 || (*(_DWORD *)a1 & 3u) - 2 > 1 )
    {
      return 0;
    }
    else if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    {
      return Bulk_ProcessTransferEventWithED1((__int64 *)a1, 0LL, a3, a4);
    }
    else
    {
      return Bulk_ProcessTransferEventWithED0(a1, 0LL);
    }
  }
  else if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
  {
    return Control_ProcessTransferEventWithED1((__int64 *)a1, 0LL);
  }
  else
  {
    return Control_ProcessTransferEventWithED0(a1, 0LL);
  }
}
