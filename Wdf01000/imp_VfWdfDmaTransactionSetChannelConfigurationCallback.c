/*
 * XREFs of imp_VfWdfDmaTransactionSetChannelConfigurationCallback @ 0x1C00B4740
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDmaTransactionSetChannelConfigurationCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned __int8 (__fastcall *ConfigureRoutine)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _MDL *, unsigned __int64, unsigned __int64),
        void *ConfigureContext)
{
  WdfVersion.Functions.pfnWdfDmaTransactionSetChannelConfigurationCallback(
    DriverGlobals,
    DmaTransaction,
    ConfigureRoutine,
    ConfigureContext);
}
