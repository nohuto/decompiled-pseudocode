/*
 * XREFs of ObpReferenceDeviceMapFastRef @ 0x14075D834
 * Callers:
 *     ObpSetCurrentProcessDeviceMap @ 0x14075D6E0 (ObpSetCurrentProcessDeviceMap.c)
 * Callees:
 *     ObpSlowReferenceDeviceMap @ 0x14075DAD8 (ObpSlowReferenceDeviceMap.c)
 */

unsigned __int64 __fastcall ObpReferenceDeviceMapFastRef(signed __int64 *a1)
{
  signed __int64 v1; // r8
  signed __int64 v2; // rax

  _m_prefetchw(a1);
  v1 = *a1;
  if ( (*a1 & 0xF) == 0 )
    return ObpSlowReferenceDeviceMap(a1);
  do
  {
    v2 = _InterlockedCompareExchange64(a1, v1 - 1, v1);
    if ( v1 == v2 )
      break;
    v1 = v2;
  }
  while ( (v2 & 0xF) != 0 );
  if ( (v1 & 0xF) != 0 )
    return v1 & 0xFFFFFFFFFFFFFFF0uLL;
  else
    return ObpSlowReferenceDeviceMap(a1);
}
