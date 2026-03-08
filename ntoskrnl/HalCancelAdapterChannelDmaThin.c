/*
 * XREFs of HalCancelAdapterChannelDmaThin @ 0x140510AC0
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

char __fastcall HalCancelAdapterChannelDmaThin(__int64 a1, __int64 a2, volatile signed __int32 *a3)
{
  char v4; // al
  __int64 v5; // rcx

  _m_prefetchw((const void *)(a3 + 2));
  v4 = _InterlockedOr(a3 + 2, 2u);
  if ( (v4 & 1) == 0 && (v4 & 4) != 0 )
  {
    v5 = *((_QWORD *)a3 + 11);
    if ( v5 )
    {
      if ( *(_BYTE *)(v5 + 97) )
      {
        ExFreePoolWithTag(*(PVOID *)(v5 + 80), 0);
        return 1;
      }
    }
    else
    {
      if ( HalpDmaRemoveWcb(a1, (_QWORD *)a3 + 2) )
        return 1;
      if ( HalpDmaRemoveFromEmergencyLogicalAddressQueue(a1, (_QWORD *)(a1 + 600))
        || HalpDmaRemoveAdapterFromMasterQueue(a1)
        || !*(_BYTE *)(a1 + 441) && (unsigned __int8)HalpDmaRemoveAdapterFromChannelQueue(a1) )
      {
        *(_DWORD *)(a1 + 248) = 0;
        IoFreeAdapterChannelV3(a1);
        return 1;
      }
    }
  }
  return 0;
}
