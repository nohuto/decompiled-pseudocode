/*
 * XREFs of ??1MDCOBJ@@QEAA@XZ @ 0x1C02C4340
 * Callers:
 *     NtGdiSelectBitmap @ 0x1C00C37F0 (NtGdiSelectBitmap.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 */

void __fastcall MDCOBJ::~MDCOBJ(MDCOBJ *this)
{
  if ( *(_QWORD *)this )
    XDCOBJ::vUnlockFast(this);
}
