/*
 * XREFs of ?GetPresentCount@CLegacyRenderTarget@@UEBAIXZ @ 0x1800E3D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::GetPresentCount(CLegacyRenderTarget *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 5);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  else
    return 0LL;
}
