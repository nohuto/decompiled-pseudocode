/*
 * XREFs of _SetTouchWindowFlags @ 0x1C01DCD44
 * Callers:
 *     NtUserModifyWindowTouchCapability @ 0x1C01FFD00 (NtUserModifyWindowTouchCapability.c)
 * Callees:
 *     InternalSetProp @ 0x1C00384A8 (InternalSetProp.c)
 */

__int64 __fastcall SetTouchWindowFlags(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 v3; // r9

  if ( a2 )
    return InternalSetProp(a1, (unsigned __int16)gatomTouchFlags, a2, 5u);
  v2 = (unsigned __int16)gatomTouchFlags;
  v3 = *(_QWORD *)(a1 + 144);
  if ( gatomTouchFlags == word_1C033AF44 )
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 312LL) = 0LL;
  RealInternalRemoveProp(v3, v2, 1LL);
  return 1LL;
}
