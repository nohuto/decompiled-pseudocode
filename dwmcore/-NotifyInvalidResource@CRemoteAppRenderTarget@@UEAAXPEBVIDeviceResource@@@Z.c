/*
 * XREFs of ?NotifyInvalidResource@CRemoteAppRenderTarget@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801E7D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRemoteAppRenderTarget::NotifyInvalidResource(
        CRemoteAppRenderTarget *this,
        const struct IDeviceResource *a2)
{
  CRemoteAppRenderTarget::ReleaseSwapChain((CRemoteAppRenderTarget *)((char *)this - 144));
}
