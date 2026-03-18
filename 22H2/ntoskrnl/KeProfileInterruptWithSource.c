/*
 * XREFs of KeProfileInterruptWithSource @ 0x140573F30
 * Callers:
 *     DefaultOverflowHandler @ 0x14050CA30 (DefaultOverflowHandler.c)
 *     EmonOverflowHandler @ 0x14051D710 (EmonOverflowHandler.c)
 *     Amd64OverflowHandler @ 0x140529B70 (Amd64OverflowHandler.c)
 * Callees:
 *     KiProcessProfileList @ 0x1405743D4 (KiProcessProfileList.c)
 */

__int64 __fastcall KeProfileInterruptWithSource(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  KiProcessProfileList(a1, a2, &KeGetCurrentThread()->ApcState.Process->ProfileListHead);
  return KiProcessProfileList(a1, v2, &KiProfileListHead);
}
