/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x140264810
 * Callers:
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14062B9E4 (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PiDmLookupObject @ 0x140636AFC (PiDmLookupObject.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406386D0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x140679D14 (PopHandleConvergedPowerRequestUpdate.c)
 *     PopPowerRequestDeleteEntryById @ 0x14067C4A0 (PopPowerRequestDeleteEntryById.c)
 *     PopPowerRequestFindEntryById @ 0x14067C508 (PopPowerRequestFindEntryById.c)
 *     PopNotifySessionUserPowerRequestCreated @ 0x14067CF30 (PopNotifySessionUserPowerRequestCreated.c)
 *     PiSwFindSwDevice @ 0x140738EE4 (PiSwFindSwDevice.c)
 *     PiLookupInDDBCache @ 0x14073DBC0 (PiLookupInDDBCache.c)
 *     PiSwFindBusRelations @ 0x140747084 (PiSwFindBusRelations.c)
 *     PiPnpRtlObjectEventWorker @ 0x14074A010 (PiPnpRtlObjectEventWorker.c)
 *     PiDcHandleDeviceEvent @ 0x140758724 (PiDcHandleDeviceEvent.c)
 *     PiDqQueryApplyObjectEvent @ 0x1407634C4 (PiDqQueryApplyObjectEvent.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x140772520 (PopAvlFindOrMakeStatsForScenarioType.c)
 *     PiUpdateDriverDBCache @ 0x14077E48C (PiUpdateDriverDBCache.c)
 *     IopCleanupFileObjectIosbRange @ 0x140891398 (IopCleanupFileObjectIosbRange.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1408F87B8 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
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
