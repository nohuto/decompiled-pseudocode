/*
 * XREFs of ??$Set@PEA_W@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEA_WUDummy@Details@23@@Z @ 0x1803EB368
 * Callers:
 *     _anonymous_namespace_::GetFriendlyNameForExe @ 0x1803EB90C (_anonymous_namespace_--GetFriendlyNameForExe.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL::Wrappers::HString::Set<wchar_t *>(HSTRING *a1, const wchar_t **a2)
{
  const wchar_t *v2; // rdx
  UINT32 v3; // r8d
  unsigned __int64 v4; // rax

  v2 = *a2;
  v3 = 0;
  if ( v2 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v2[v4] );
    if ( v4 > 0xFFFFFFFF )
      return -2147024362;
    v3 = v4;
  }
  else
  {
    v2 = &szAgent;
  }
  return Microsoft::WRL::Wrappers::HString::Set(a1, v2, v3);
}
