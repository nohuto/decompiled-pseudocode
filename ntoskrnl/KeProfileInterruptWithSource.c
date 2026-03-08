/*
 * XREFs of KeProfileInterruptWithSource @ 0x140571A20
 * Callers:
 *     DefaultOverflowHandler @ 0x14050A950 (DefaultOverflowHandler.c)
 *     EmonOverflowHandler @ 0x14051B1E0 (EmonOverflowHandler.c)
 *     Amd64OverflowHandler @ 0x140527640 (Amd64OverflowHandler.c)
 * Callees:
 *     KiProcessProfileList @ 0x140571EC4 (KiProcessProfileList.c)
 */

__int64 __fastcall KeProfileInterruptWithSource(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  KiProcessProfileList(a1, a2, &KeGetCurrentThread()->ApcState.Process->ProfileListHead);
  return KiProcessProfileList(a1, v2, &KiProfileListHead);
}
