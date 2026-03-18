/*
 * XREFs of MiReclaimSystemVa @ 0x14036716C
 * Callers:
 *     MiObtainDynamicVa @ 0x140211064 (MiObtainDynamicVa.c)
 *     MiExtendDynamicBitMap @ 0x1403AA370 (MiExtendDynamicBitMap.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 */

LONG __fastcall MiReclaimSystemVa(int a1)
{
  LONG result; // eax

  if ( a1 || (unsigned __int64)qword_140C66E08 <= 0x8000000 )
    return KeSetEvent(&stru_140C67190, 0, 0);
  return result;
}
