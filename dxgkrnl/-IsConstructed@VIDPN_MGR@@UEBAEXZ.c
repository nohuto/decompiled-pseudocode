/*
 * XREFs of ?IsConstructed@VIDPN_MGR@@UEBAEXZ @ 0x1C0024280
 * Callers:
 *     ?IsConstructed@VIDPN_MGR@@WEI@EBAEXZ @ 0x1C0027CB0 (-IsConstructed@VIDPN_MGR@@WEI@EBAEXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDPN_MGR::IsConstructed(VIDPN_MGR *this)
{
  return *((_DWORD *)this + 22) == 2;
}
