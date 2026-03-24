/*
 * XREFs of MiReclaimSystemVa @ 0x14030B8D8
 * Callers:
 *     MiObtainDynamicVa @ 0x14030AF58 (MiObtainDynamicVa.c)
 *     MiExtendDynamicBitMap @ 0x1403C917C (MiExtendDynamicBitMap.c)
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 */

LONG __fastcall MiReclaimSystemVa(int a1)
{
  LONG result; // eax

  if ( a1 == 1 || (unsigned __int64)qword_140C4E048 <= 0x8000000 )
    return KeSetEvent(&stru_140C4E388, 0, 0);
  return result;
}
