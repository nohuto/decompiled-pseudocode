/*
 * XREFs of ??1DCOBJA@@QEAA@XZ @ 0x1C012FB74
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0006F30 (NtGdiDdDDICreateDCFromMemory.c)
 *     DxgkEngGetClientRect @ 0x1C014D450 (DxgkEngGetClientRect.c)
 *     DxgkEngIsRedirectionDC @ 0x1C02727E0 (DxgkEngIsRedirectionDC.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00DC828 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCOBJA::~DCOBJA(__int64 **this)
{
  if ( *this )
    XDCOBJ::vAltUnlockFast(this);
}
