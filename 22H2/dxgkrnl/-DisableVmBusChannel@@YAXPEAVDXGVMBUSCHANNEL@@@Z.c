/*
 * XREFs of ?DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C0361B34
 * Callers:
 *     ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x1C0056728 (-DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?Disable@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C0361ACC (-Disable@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void __fastcall DisableVmBusChannel(struct DXGVMBUSCHANNEL *a1)
{
  if ( a1 )
    DXGVMBUSCHANNEL::Disable(a1);
}
