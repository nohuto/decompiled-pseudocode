/*
 * XREFs of ?GetVBlankBoostMultiplier@CLegacyRenderTarget@@UEBAIXZ @ 0x1800E0FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::GetVBlankBoostMultiplier(CLegacyRenderTarget *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 5);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 96LL))(v1);
  else
    return 1LL;
}
