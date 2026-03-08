/*
 * XREFs of ?NotifyInvalidResource@CIndirectSwapchainRenderTarget@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801C2920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIndirectSwapchainRenderTarget::NotifyInvalidResource(
        CIndirectSwapchainRenderTarget *this,
        const struct IDeviceResource *a2)
{
  CIndirectSwapchainRenderTarget::Unregister((CIndirectSwapchainRenderTarget *)((char *)this - 1872));
}
