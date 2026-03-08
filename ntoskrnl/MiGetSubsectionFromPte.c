/*
 * XREFs of MiGetSubsectionFromPte @ 0x14064BC7C
 * Callers:
 *     MiCreateFileOnlyImageFixupList @ 0x140A30D1C (MiCreateFileOnlyImageFixupList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionFromPte(__int64 a1)
{
  if ( qword_140C657C0 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140C657C0;
  return a1 >> 16;
}
