/*
 * XREFs of CreateBitmapStrip @ 0x1C00B729C
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C0075F20 (xxxResetDisplayDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 (*CreateBitmapStrip())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0257B60;
  if ( qword_1C0257B60 )
    return (__int64 (*)(void))qword_1C0257B60();
  return result;
}
