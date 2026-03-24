/*
 * XREFs of PopBcdOpen @ 0x1408F58B4
 * Callers:
 *     PopAllocateHiberContext @ 0x140777B44 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x14079AED8 (PoInitHiberServices.c)
 * Callees:
 *     BcdOpenStore @ 0x140782D48 (BcdOpenStore.c)
 */

__int64 __fastcall PopBcdOpen(__int64 a1)
{
  return BcdOpenStore(a1, 2u, a1);
}
