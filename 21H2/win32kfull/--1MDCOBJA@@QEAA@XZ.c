/*
 * XREFs of ??1MDCOBJA@@QEAA@XZ @ 0x1C015DC5C
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0091B20 (NtGdiDdDDICreateDCFromMemory.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00920F0 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall MDCOBJA::~MDCOBJA(__int64 **this)
{
  if ( *this )
    XDCOBJ::vAltUnlockFast(this);
}
