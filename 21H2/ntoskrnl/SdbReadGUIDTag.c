/*
 * XREFs of SdbReadGUIDTag @ 0x140966250
 * Callers:
 *     KsepDbGetDriverShimsInternal @ 0x140758E8C (KsepDbGetDriverShimsInternal.c)
 *     KsepDbGetShimInfo @ 0x1408BF81C (KsepDbGetShimInfo.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140755F64 (AslLogCallPrintf.c)
 *     SdbReadBinaryTag @ 0x1407563C8 (SdbReadBinaryTag.c)
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
