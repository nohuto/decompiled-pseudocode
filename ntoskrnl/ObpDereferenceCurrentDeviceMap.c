/*
 * XREFs of ObpDereferenceCurrentDeviceMap @ 0x140720E28
 * Callers:
 *     ObpLookupObjectName @ 0x1406E86B0 (ObpLookupObjectName.c)
 *     ObQueryDeviceMapInformation @ 0x140720E70 (ObQueryDeviceMapInformation.c)
 * Callees:
 *     ObDereferenceDeviceMap @ 0x14071E5A4 (ObDereferenceDeviceMap.c)
 */

char __fastcall ObpDereferenceCurrentDeviceMap(volatile signed __int64 *a1, volatile signed __int64 *a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  if ( a2 && (_m_prefetchw((const void *)a2), v2 = *a2, ((unsigned __int64)a1 ^ *a2) < 0xF) )
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64(a2, v2 + 1, v2);
      if ( v3 == v2 )
        break;
      if ( ((unsigned __int64)a1 ^ v2) >= 0xF )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    LOBYTE(v2) = ObDereferenceDeviceMap(a1, 1u);
  }
  return v2;
}
