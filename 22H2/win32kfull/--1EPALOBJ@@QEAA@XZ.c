/*
 * XREFs of ??1EPALOBJ@@QEAA@XZ @ 0x1C013FEE0
 * Callers:
 *     GreGetPaletteEntries @ 0x1C0057290 (GreGetPaletteEntries.c)
 *     NtGdiEngDeletePalette @ 0x1C02C9750 (NtGdiEngDeletePalette.c)
 *     GreCreateHalftonePalette @ 0x1C02D14F0 (GreCreateHalftonePalette.c)
 *     NtGdiResizePalette @ 0x1C02D2760 (NtGdiResizePalette.c)
 *     EngHTBlt @ 0x1C02DECB0 (EngHTBlt.c)
 * Callees:
 *     <none>
 */

void __fastcall EPALOBJ::~EPALOBJ(EPALOBJ *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
    DEC_SHARE_REF_CNT(v1);
}
