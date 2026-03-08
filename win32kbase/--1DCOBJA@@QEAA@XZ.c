/*
 * XREFs of ??1DCOBJA@@QEAA@XZ @ 0x1C0046798
 * Callers:
 *     GreCopyVisRgn @ 0x1C003CF00 (GreCopyVisRgn.c)
 *     GreValidateVisrgn @ 0x1C004145C (GreValidateVisrgn.c)
 *     GreIntersectVisRect @ 0x1C0197D20 (GreIntersectVisRect.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00467B8 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCOBJA::~DCOBJA(DCOBJA *this)
{
  if ( *(_QWORD *)this )
    XDCOBJ::vAltUnlockFast(this);
}
