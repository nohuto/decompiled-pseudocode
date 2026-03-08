/*
 * XREFs of ?GetVBlankDuration@CLegacyRenderTarget@@UEBA_KXZ @ 0x1800DE2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::GetVBlankDuration(CLegacyRenderTarget *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 5);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 72LL))(v1);
  else
    return 0LL;
}
