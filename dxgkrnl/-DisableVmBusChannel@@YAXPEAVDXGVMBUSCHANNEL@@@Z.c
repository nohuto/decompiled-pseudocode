/*
 * XREFs of ?DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C035D0A4
 * Callers:
 *     ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x1C0055888 (-DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?Disable@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C035D03C (-Disable@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void __fastcall DisableVmBusChannel(struct DXGVMBUSCHANNEL *a1)
{
  if ( a1 )
    DXGVMBUSCHANNEL::Disable(a1);
}
