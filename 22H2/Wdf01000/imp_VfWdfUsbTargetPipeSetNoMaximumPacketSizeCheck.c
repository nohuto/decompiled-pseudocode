/*
 * XREFs of imp_VfWdfUsbTargetPipeSetNoMaximumPacketSizeCheck @ 0x1C00C3930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfUsbTargetPipeSetNoMaximumPacketSizeCheck(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe)
{
  WdfVersion.Functions.pfnWdfUsbTargetPipeSetNoMaximumPacketSizeCheck(DriverGlobals, Pipe);
}
