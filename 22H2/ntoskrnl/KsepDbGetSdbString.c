/*
 * XREFs of KsepDbGetSdbString @ 0x140856690
 * Callers:
 *     KsepDbGetDriverShimsInternal @ 0x140694B7C (KsepDbGetDriverShimsInternal.c)
 *     KsepDbGetShimInfo @ 0x140856450 (KsepDbGetShimInfo.c)
 * Callees:
 *     KsepStringDuplicate @ 0x1406942D4 (KsepStringDuplicate.c)
 *     SdbGetStringTagPtr @ 0x140757878 (SdbGetStringTagPtr.c)
 */

__int64 __fastcall KsepDbGetSdbString(__int64 a1, __int64 a2, __int64 a3)
{
  _WORD *StringTagPtr; // rax

  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, a2, a3);
  if ( StringTagPtr )
    return KsepStringDuplicate(a3, StringTagPtr);
  else
    return 3221225485LL;
}
