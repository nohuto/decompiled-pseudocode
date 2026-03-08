/*
 * XREFs of ?IsVBlankBoostSupported@CLegacyRenderTarget@@UEBA_NXZ @ 0x180103C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLegacyRenderTarget::IsVBlankBoostSupported(CLegacyRenderTarget *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 5);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 88LL))(v1);
  else
    return 0;
}
