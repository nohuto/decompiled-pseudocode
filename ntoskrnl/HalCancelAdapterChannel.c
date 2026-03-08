/*
 * XREFs of HalCancelAdapterChannel @ 0x14050CA30
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaRemoveAdapterFromMasterQueue @ 0x1404FE580 (HalpDmaRemoveAdapterFromMasterQueue.c)
 *     HalpDmaRemoveFromEmergencyLogicalAddressQueue @ 0x1404FE6A4 (HalpDmaRemoveFromEmergencyLogicalAddressQueue.c)
 *     HalpDmaRemoveWcb @ 0x1404FE7A8 (HalpDmaRemoveWcb.c)
 *     IoFreeAdapterChannelV3 @ 0x14050DD90 (IoFreeAdapterChannelV3.c)
 *     HalpDmaRemoveAdapterFromChannelQueue @ 0x140514AD4 (HalpDmaRemoveAdapterFromChannelQueue.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char __fastcall HalCancelAdapterChannel(__int64 a1, __int64 a2, volatile signed __int32 *a3)
{
  char v5; // al
  __int64 v6; // rcx

  _m_prefetchw((const void *)(a3 + 2));
  v5 = _InterlockedOr(a3 + 2, 2u);
  if ( (v5 & 1) == 0 && (v5 & 4) != 0 )
  {
    if ( HalpDmaRemoveWcb(a1, (_QWORD *)a3 + 2) )
      return 1;
    if ( HalpDmaRemoveFromEmergencyLogicalAddressQueue(a1, (_QWORD *)(a1 + 600))
      || HalpDmaRemoveAdapterFromMasterQueue(a1)
      || !*(_BYTE *)(a1 + 441) && (unsigned __int8)HalpDmaRemoveAdapterFromChannelQueue(a1) )
    {
      *(_DWORD *)(a1 + 248) = 0;
      IoFreeAdapterChannelV3(a1);
      v6 = *((_QWORD *)a3 + 11);
      if ( v6 )
      {
        if ( (*(_DWORD *)v6 & 1) == 0 )
        {
          ExFreePoolWithTag(*(PVOID *)(v6 + 160), 0);
          *((_QWORD *)a3 + 11) = 0LL;
        }
      }
      return 1;
    }
  }
  return 0;
}
