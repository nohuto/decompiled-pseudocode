void __fastcall InteractionSourceManager::Initialize(
        struct CWeakResourceReference **this,
        struct CComposition *a2,
        struct CInteractionTracker *a3)
{
  int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *this = a2;
  v3 = CWeakReference<CInteractionTracker>::Create(a3, this + 1);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      20LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\animations\\interactionsourcemanager.cpp",
      (const char *)(unsigned int)v3,
      v4);
}
