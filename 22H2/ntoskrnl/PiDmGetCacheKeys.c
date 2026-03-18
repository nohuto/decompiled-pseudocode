/*
 * XREFs of PiDmGetCacheKeys @ 0x1406D63F4
 * Callers:
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1406D6444 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectRelease @ 0x1406D6C18 (PiDmObjectRelease.c)
 *     PiDmObjectProcessPropertyChange @ 0x140789C4C (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14078D7DC (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1407CC6C4 (PiDmObjectGetCachedObjectReference.c)
 *     PiDmObjectCreate @ 0x14086BC2C (PiDmObjectCreate.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x14086C158 (PiDmListUpdateAggregationCountWorker.c)
 * Callees:
 *     <none>
 */

DEVPROPKEY **__fastcall PiDmGetCacheKeys(int a1, DEVPROPKEY ***a2, _DWORD *a3)
{
  int v3; // ecx
  DEVPROPKEY **result; // rax
  int v5; // ecx

  v3 = a1 - 1;
  if ( v3 )
  {
    v5 = v3 - 2;
    if ( v5 )
    {
      if ( v5 == 2 )
      {
        *a3 = 3;
        result = &PiDmCachedDeviceContainerKeys;
      }
      else
      {
        result = 0LL;
        *a3 = 0;
      }
    }
    else
    {
      *a3 = 1;
      result = &PiDmCachedDeviceInterfaceKeys;
    }
  }
  else
  {
    *a3 = 10;
    result = &PiDmCachedDeviceKeys;
  }
  *a2 = result;
  return result;
}
