/*
 * XREFs of SdbReadGUIDTag @ 0x140A1329C
 * Callers:
 *     KsepDbGetDriverShimsInternal @ 0x14075C380 (KsepDbGetDriverShimsInternal.c)
 *     KsepDbGetShimInfo @ 0x1409638AC (KsepDbGetShimInfo.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     SdbReadBinaryTag @ 0x1407ED29C (SdbReadBinaryTag.c)
 */

_OWORD *__fastcall SdbReadGUIDTag(_OWORD *a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  *a1 = 0LL;
  if ( !(unsigned int)SdbReadBinaryTag(a2, a3, (__int64)a1, 0x10u) )
  {
    AslLogCallPrintf(1LL);
    *a1 = *a4;
  }
  return a1;
}
