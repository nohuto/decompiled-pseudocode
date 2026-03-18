/*
 * XREFs of ??1MDCOBJ@@QEAA@XZ @ 0x1C02C1B38
 * Callers:
 *     NtGdiSelectBitmap @ 0x1C008C7F0 (NtGdiSelectBitmap.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 */

void __fastcall MDCOBJ::~MDCOBJ(MDCOBJ *this)
{
  if ( *(_QWORD *)this )
    XDCOBJ::vUnlockFast(this);
}
