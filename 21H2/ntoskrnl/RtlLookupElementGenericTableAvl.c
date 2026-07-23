/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x1402528A0
 * Callers:
 *     PiDmLookupObject @ 0x14062B90C (PiDmLookupObject.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14062D4E0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x14066D454 (PopHandleConvergedPowerRequestUpdate.c)
 *     PopPowerRequestDeleteEntryById @ 0x14066FFE4 (PopPowerRequestDeleteEntryById.c)
 *     PopPowerRequestFindEntryById @ 0x140670048 (PopPowerRequestFindEntryById.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1406705BC (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopNotifySessionUserPowerRequestCreated @ 0x140670F5C (PopNotifySessionUserPowerRequestCreated.c)
 *     PiSwFindSwDevice @ 0x1407390A4 (PiSwFindSwDevice.c)
 *     PiLookupInDDBCache @ 0x14073DD80 (PiLookupInDDBCache.c)
 *     PiSwFindBusRelations @ 0x140747244 (PiSwFindBusRelations.c)
 *     PiPnpRtlObjectEventWorker @ 0x14074A1D0 (PiPnpRtlObjectEventWorker.c)
 *     PiDcHandleDeviceEvent @ 0x1407588E4 (PiDcHandleDeviceEvent.c)
 *     PiDqQueryApplyObjectEvent @ 0x140763684 (PiDqQueryApplyObjectEvent.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x1407726E0 (PopAvlFindOrMakeStatsForScenarioType.c)
 *     PiUpdateDriverDBCache @ 0x14077E64C (PiUpdateDriverDBCache.c)
 *     IopCleanupFileObjectIosbRange @ 0x1408914F8 (IopCleanupFileObjectIosbRange.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1408F8918 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
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
