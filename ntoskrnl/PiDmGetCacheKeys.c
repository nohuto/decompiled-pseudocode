/*
 * XREFs of PiDmGetCacheKeys @ 0x1406D071C
 * Callers:
 *     PiDmObjectProcessPropertyChange @ 0x1406CC044 (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectRelease @ 0x1406D0328 (PiDmObjectRelease.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1406D060C (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1406D0A64 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectGetCachedObjectReference @ 0x14077D554 (PiDmObjectGetCachedObjectReference.c)
 *     PiDmObjectCreate @ 0x140868FFC (PiDmObjectCreate.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x140869528 (PiDmListUpdateAggregationCountWorker.c)
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
