/*
 * XREFs of MiGetSubsectionFromPte @ 0x14064E298
 * Callers:
 *     MiCreateFileOnlyImageFixupList @ 0x140A33A4C (MiCreateFileOnlyImageFixupList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionFromPte(__int64 a1)
{
  if ( qword_140C65C40 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140C65C40;
  return a1 >> 16;
}
