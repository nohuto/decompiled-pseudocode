/*
 * XREFs of SdbReadGUIDTag @ 0x1408006BC
 * Callers:
 *     KsepDbGetDriverShimsInternal @ 0x14079EF10 (KsepDbGetDriverShimsInternal.c)
 *     KsepDbGetShimInfo @ 0x140800448 (KsepDbGetShimInfo.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbReadBinaryTag @ 0x14079D160 (SdbReadBinaryTag.c)
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
