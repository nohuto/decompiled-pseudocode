/*
 * XREFs of KeProfileInterruptWithSource @ 0x14051BAC0
 * Callers:
 *     DefaultOverflowHandler @ 0x1404BE680 (DefaultOverflowHandler.c)
 *     EmonOverflowHandler @ 0x1404D37E0 (EmonOverflowHandler.c)
 *     Amd64OverflowHandler @ 0x1404DD9F0 (Amd64OverflowHandler.c)
 * Callees:
 *     KiProcessProfileList @ 0x14051BF00 (KiProcessProfileList.c)
 */

__int64 __fastcall KeProfileInterruptWithSource(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  KiProcessProfileList(a1, a2, &KeGetCurrentThread()->ApcState.Process->ProfileListHead);
  return KiProcessProfileList(a1, v2, &KiProfileListHead);
}
