void __fastcall CAnimationLoggingManager::LogAnimationStarted(
        CAnimationLoggingManager *this,
        __int64 a2,
        struct CResource *a3,
        __int64 a4,
        unsigned int a5)
{
  struct CAnimationLoggingManager::ResourceDebugInfo *DebugInfoForResource; // rax
  struct CAnimationLoggingManager::ResourceDebugInfo *v9; // rbx
  DiagnosticCallbacksManager *v10; // r14
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // [rsp+20h] [rbp-A8h]
  unsigned int v15; // [rsp+20h] [rbp-A8h]
  unsigned __int16 v16; // [rsp+28h] [rbp-A0h]
  _BYTE v17[64]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v18; // [rsp+80h] [rbp-48h] BYREF
  int v19; // [rsp+88h] [rbp-40h]
  char v20; // [rsp+8Ch] [rbp-3Ch]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  if ( a3 )
  {
    DebugInfoForResource = CAnimationLoggingManager::TryGetDebugInfoForResource(this, a3);
    v9 = DebugInfoForResource;
    if ( DebugInfoForResource )
    {
      if ( *((_DWORD *)DebugInfoForResource + 10) )
      {
        v10 = *(DiagnosticCallbacksManager **)(*((_QWORD *)this + 2) + 1248LL);
        memset_0(v17, 0, sizeof(v17));
        v11 = *(_QWORD *)a3;
        v18 = 0LL;
        v19 = 18;
        v20 = 0;
        v12 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, _BYTE *))(v11 + 136))(a3, a5, v17);
        if ( v12 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            575LL,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
            (const char *)(unsigned int)v12,
            v14);
        v13 = DiagnosticCallbacksManager::SendAnimationStarted(
                v10,
                *((_DWORD *)v9 + 10),
                *((_DWORD *)v9 + 11),
                a2,
                a5,
                v16,
                (const struct CExpressionValue *)v17);
        if ( v13 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            584LL,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
            (const char *)(unsigned int)v13,
            v15);
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v18);
      }
    }
  }
}
