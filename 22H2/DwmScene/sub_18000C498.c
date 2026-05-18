/*
 * XREFs of sub_18000C498 @ 0x18000C498
 * Callers:
 *     sub_18000C0B0 @ 0x18000C0B0 (sub_18000C0B0.c)
 *     sub_18000C1B0 @ 0x18000C1B0 (sub_18000C1B0.c)
 *     sub_18000C250 @ 0x18000C250 (sub_18000C250.c)
 *     sub_18000C4C4 @ 0x18000C4C4 (sub_18000C4C4.c)
 *     sub_18000C6A8 @ 0x18000C6A8 (sub_18000C6A8.c)
 *     sub_18000D4C0 @ 0x18000D4C0 (sub_18000D4C0.c)
 *     sub_18000D6FC @ 0x18000D6FC (sub_18000D6FC.c)
 *     sub_18000EAC8 @ 0x18000EAC8 (sub_18000EAC8.c)
 * Callees:
 *     sub_18000EDC0 @ 0x18000EDC0 (sub_18000EDC0.c)
 */

BOOL __fastcall sub_18000C498(void *a1)
{
  BOOL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = CloseHandle(a1);
  if ( !result )
  {
    sub_18000EDC0(retaddr, 2342LL, "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
    JUMPOUT(0x18000C4C1LL);
  }
  return result;
}
