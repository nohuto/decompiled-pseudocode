/*
 * XREFs of ?GetPresentCount@CRemoteAppRenderTarget@@UEBAIXZ @ 0x1801E7A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRemoteAppRenderTarget::GetPresentCount(CRemoteAppRenderTarget *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 8LL))(*((_QWORD *)this + 2));
}
