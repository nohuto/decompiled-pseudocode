/*
 * XREFs of SdbReadGUIDTag @ 0x140966430
 * Callers:
 *     KsepDbGetDriverShimsInternal @ 0x14075904C (KsepDbGetDriverShimsInternal.c)
 *     KsepDbGetShimInfo @ 0x1408BF97C (KsepDbGetShimInfo.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     SdbReadBinaryTag @ 0x140756588 (SdbReadBinaryTag.c)
 */

_OWORD *__fastcall SdbReadGUIDTag(_OWORD *a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  *a1 = 0LL;
  if ( !(unsigned int)SdbReadBinaryTag(a2, a3, (__int64)a1, 16LL) )
  {
    AslLogCallPrintf(1LL);
    *a1 = *a4;
  }
  return a1;
}
