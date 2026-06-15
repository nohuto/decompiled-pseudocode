/*
 * XREFs of sub_180052284 @ 0x180052284
 * Callers:
 *     sub_180045060 @ 0x180045060 (sub_180045060.c)
 *     sub_180108708 @ 0x180108708 (sub_180108708.c)
 * Callees:
 *     sub_1800B5EF4 @ 0x1800B5EF4 (sub_1800B5EF4.c)
 */

BOOL __fastcall sub_180052284(void *a1)
{
  BOOL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = ResetEvent(a1);
  if ( !result )
  {
    sub_1800B5EF4(retaddr, 2337LL, "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
    JUMPOUT(0x18009CDA8LL);
  }
  return result;
}
