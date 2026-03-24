/*
 * XREFs of KiGetGdtIdt @ 0x140A10F60
 * Callers:
 *     sub_1403DD750 @ 0x1403DD750 (sub_1403DD750.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1409F8010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 * Callees:
 *     <none>
 */

void __fastcall KiGetGdtIdt(void *a1, void *a2)
{
  __sgdt(a1);
  __sidt(a2);
}
