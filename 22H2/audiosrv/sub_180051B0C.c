/*
 * XREFs of sub_180051B0C @ 0x180051B0C
 * Callers:
 *     sub_180031350 @ 0x180031350 (sub_180031350.c)
 *     sub_1800372D0 @ 0x1800372D0 (sub_1800372D0.c)
 *     sub_180045060 @ 0x180045060 (sub_180045060.c)
 *     sub_18004EB70 @ 0x18004EB70 (sub_18004EB70.c)
 *     sub_18005262C @ 0x18005262C (sub_18005262C.c)
 *     sub_180062644 @ 0x180062644 (sub_180062644.c)
 *     sub_180065C3C @ 0x180065C3C (sub_180065C3C.c)
 *     sub_1801071D0 @ 0x1801071D0 (sub_1801071D0.c)
 * Callees:
 *     sub_1800B5EF4 @ 0x1800B5EF4 (sub_1800B5EF4.c)
 */

BOOL __fastcall sub_180051B0C(void *a1)
{
  BOOL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = CloseHandle(a1);
  if ( !result )
  {
    sub_1800B5EF4(retaddr, 2342LL, "onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h");
    JUMPOUT(0x18009C740LL);
  }
  return result;
}
