/*
 * XREFs of KiGetGdtIdt @ 0x140B143D0
 * Callers:
 *     sub_1403E51E0 @ 0x1403E51E0 (sub_1403E51E0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140AFB010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 * Callees:
 *     <none>
 */

void __fastcall KiGetGdtIdt(void *a1, void *a2)
{
  __sgdt(a1);
  __sidt(a2);
}
