void __fastcall CComposition::AdjustStereoEntityCount(CComposition *this, char a2)
{
  struct CComposition *v2; // rcx
  int v3; // eax
  int v4; // eax

  v2 = g_pComposition;
  v3 = *((_DWORD *)g_pComposition + 109);
  if ( a2 )
  {
    v4 = v3 + 1;
    *((_DWORD *)g_pComposition + 109) = v4;
    if ( v4 == 1 )
      CRenderTargetManager::ForceFullRender(*((CRenderTargetManager **)v2 + 27));
  }
  else
  {
    *((_DWORD *)g_pComposition + 109) = v3 - 1;
  }
}
