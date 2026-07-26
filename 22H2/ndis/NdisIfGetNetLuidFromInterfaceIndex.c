/*
 * XREFs of NdisIfGetNetLuidFromInterfaceIndex @ 0x1C00B25B0
 * Callers:
 *     ?ndisIfEnumerateNsiObjects@@YAJPEAU_NDIS_ENUM_NSI_OBJECTS@@IPEAI@Z @ 0x1C012841C (-ndisIfEnumerateNsiObjects@@YAJPEAU_NDIS_ENUM_NSI_OBJECTS@@IPEAI@Z.c)
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisIfGetNetLuidFromInterfaceIndex(NET_IFINDEX ifIndex, PNET_LUID pNetLuid)
{
  NDIS_STATUS v4; // ebx
  KIRQL v5; // al
  _LIST_ENTRY *i; // rdx

  pNetLuid->Value = 0LL;
  v4 = -1071448021;
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  for ( i = ndisIfList.Flink; i != &ndisIfList; i = i->Flink )
  {
    if ( HIDWORD(i[-77].Flink) == ifIndex )
    {
      v4 = 0;
      pNetLuid->Value = (ULONG64)i[5].Flink;
      break;
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v5);
  return v4;
}
