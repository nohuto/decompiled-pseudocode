/*
 * XREFs of ?GetDevice@CRemoteAppRenderTarget@@UEAAJPEAPEAVCD3DDevice@@@Z @ 0x180185FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall CRemoteAppRenderTarget::GetDevice(CRemoteAppRenderTarget *this, struct CD3DDevice **a2)
{
  return CDeviceManager::GetDefaultDevice(this, a2);
}
