/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x140245A20
 * Callers:
 *     PiDmLookupObject @ 0x140680C78 (PiDmLookupObject.c)
 *     PiSwFindBusRelations @ 0x140688540 (PiSwFindBusRelations.c)
 *     PiDqQueryIsObjectInResultSet @ 0x140688D38 (PiDqQueryIsObjectInResultSet.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406CC6A0 (PiPnpRtlObjectEventWorker.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CDF08 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiDmGetObject @ 0x1406D0370 (PiDmGetObject.c)
 *     PopPowerRequestTableLookupEntry @ 0x14073B640 (PopPowerRequestTableLookupEntry.c)
 *     PopPowerRequestStatsCreate @ 0x14073C194 (PopPowerRequestStatsCreate.c)
 *     PiUpdateDriverDBCache @ 0x14079D924 (PiUpdateDriverDBCache.c)
 *     PiLookupInDDBCache @ 0x14079DD70 (PiLookupInDDBCache.c)
 *     PiDcHandleDeviceEvent @ 0x1407F8294 (PiDcHandleDeviceEvent.c)
 *     PiSwFindSwDevice @ 0x14086740C (PiSwFindSwDevice.c)
 *     IopCleanupFileObjectIosbRange @ 0x140941770 (IopCleanupFileObjectIosbRange.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x14099C874 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
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
