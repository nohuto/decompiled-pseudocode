/*
 * XREFs of _SetTouchWindowFlags @ 0x1C00168D0
 * Callers:
 *     NtUserModifyWindowTouchCapability @ 0x1C0016830 (NtUserModifyWindowTouchCapability.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C002484C (InternalRemoveProp.c)
 *     InternalSetProp @ 0x1C01011E0 (InternalSetProp.c)
 */

__int64 __fastcall SetTouchWindowFlags(__int64 a1, int a2)
{
  if ( a2 )
    return InternalSetProp(a1, (unsigned __int16)gatomTouchFlags, a2, 5LL);
  InternalRemoveProp(a1, (unsigned __int16)gatomTouchFlags, 1LL);
  return 1LL;
}
