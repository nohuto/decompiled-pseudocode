/*
 * XREFs of ?GetDevice@CRemoteAppRenderTarget@@UEBAPEAVCD3DDevice@@XZ @ 0x1801E7A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CRemoteAppRenderTarget::GetDevice(CRemoteAppRenderTarget *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 2) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL) + 12LL);
  return (struct CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
}
