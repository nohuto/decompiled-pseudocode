/*
 * XREFs of sub_18000D83C @ 0x18000D83C
 * Callers:
 *     sub_18000C0C8 @ 0x18000C0C8 (sub_18000C0C8.c)
 *     sub_18000C250 @ 0x18000C250 (sub_18000C250.c)
 *     sub_18000D6FC @ 0x18000D6FC (sub_18000D6FC.c)
 * Callees:
 *     sub_18000EDC0 @ 0x18000EDC0 (sub_18000EDC0.c)
 */

BOOL __fastcall sub_18000D83C(void *a1)
{
  BOOL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = ReleaseMutex(a1);
  if ( !result )
  {
    sub_18000EDC0(retaddr, 2352LL, "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
    JUMPOUT(0x18000D865LL);
  }
  return result;
}
