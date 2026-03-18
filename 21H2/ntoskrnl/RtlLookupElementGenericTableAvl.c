/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x1402DF3F0
 * Callers:
 *     PiUpdateDriverDBCache @ 0x14075E74C (PiUpdateDriverDBCache.c)
 *     PiLookupInDDBCache @ 0x14075EB84 (PiLookupInDDBCache.c)
 *     PiSwFindSwDevice @ 0x140767130 (PiSwFindSwDevice.c)
 *     PiDcHandleDeviceEvent @ 0x14076D824 (PiDcHandleDeviceEvent.c)
 *     PiSwFindBusRelations @ 0x14076E854 (PiSwFindBusRelations.c)
 *     PiDqQueryApplyObjectEvent @ 0x140775D50 (PiDqQueryApplyObjectEvent.c)
 *     PiPnpRtlObjectEventWorker @ 0x140778830 (PiPnpRtlObjectEventWorker.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140779C10 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiDmLookupObject @ 0x14077B12C (PiDmLookupObject.c)
 *     PopPowerRequestTableLookupEntry @ 0x1407EFF80 (PopPowerRequestTableLookupEntry.c)
 *     PopPowerRequestStatsCreate @ 0x1407F0070 (PopPowerRequestStatsCreate.c)
 *     IopCleanupFileObjectIosbRange @ 0x140933FE8 (IopCleanupFileObjectIosbRange.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x14099F0A0 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

PVOID __stdcall RtlLookupElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  void *v2; // rsi
  _RTL_BALANCED_LINKS *i; // rbx
  _RTL_GENERIC_COMPARE_RESULTS v6; // eax
  int v7; // eax
  _RTL_BALANCED_LINKS *v8; // rbx

  v2 = 0LL;
  i = 0LL;
  if ( Table->NumberGenericTableElements )
  {
    for ( i = Table->BalancedRoot.RightChild; ; i = i->LeftChild )
    {
      while ( 1 )
      {
        v6 = Table->CompareRoutine(Table, Buffer, &i[1]);
        if ( v6 == GenericLessThan )
          break;
        if ( v6 != GenericGreaterThan )
        {
          v7 = 1;
          goto LABEL_10;
        }
        if ( !i->RightChild )
        {
          v7 = 3;
          goto LABEL_10;
        }
        i = i->RightChild;
      }
      if ( !i->LeftChild )
        break;
    }
    v7 = 2;
  }
  else
  {
    v7 = 0;
  }
LABEL_10:
  v8 = i + 1;
  if ( v7 == 1 )
    return v8;
  return v2;
}
