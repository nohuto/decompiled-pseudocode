void __fastcall CAnimationLoggingManager::DeferredSendDebugStart(
        CAnimationLoggingManager *this,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v6; // rcx
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v9; // rdi
  struct CAnimationLoggingManager::ResourceDebugInfo *DebugInfoForResource; // rax
  struct CAnimationLoggingManager::ResourceDebugInfo *v11; // rbx
  __int64 v12; // rax
  DiagnosticCallbacksManager *v13; // rsi
  int v14; // eax
  const char *v15; // [rsp+20h] [rbp-98h]
  unsigned int v16; // [rsp+20h] [rbp-98h]
  _BYTE v17[64]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v18; // [rsp+70h] [rbp-48h] BYREF
  int v19; // [rsp+78h] [rbp-40h]
  char v20; // [rsp+7Ch] [rbp-3Ch]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v6 = *((_QWORD *)this + 6);
  if ( v6 )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(*(CResourceTable **)(v6 + 32), a2);
    v9 = ResourceWithoutType;
    if ( ResourceWithoutType )
    {
      DebugInfoForResource = CAnimationLoggingManager::TryGetDebugInfoForResource(this, ResourceWithoutType);
      v11 = DebugInfoForResource;
      if ( DebugInfoForResource )
      {
        if ( *((_DWORD *)DebugInfoForResource + 10) )
        {
          memset_0(v17, 0, sizeof(v17));
          v12 = *((_QWORD *)this + 2);
          v18 = 0LL;
          v19 = 18;
          v20 = 0;
          v13 = *(DiagnosticCallbacksManager **)(v12 + 1248);
          if ( (*(int (__fastcall **)(struct CResource *, _QWORD, _BYTE *))(*(_QWORD *)v9 + 136LL))(v9, a4, v17) < 0 )
            wil::details::in1diag3::FailFast_UnexpectedMsg(
              retaddr,
              (void *)0x126,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
              "Unexpectedly failed to get property.",
              v15);
          v14 = DiagnosticCallbacksManager::SendDebugStart(
                  v13,
                  *((_DWORD *)v11 + 10),
                  *((_DWORD *)v11 + 11),
                  a3,
                  a4,
                  (const struct CExpressionValue *)v17);
          if ( v14 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              288LL,
              (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
              (const char *)(unsigned int)v14,
              v16);
          Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v18);
        }
      }
    }
  }
}
