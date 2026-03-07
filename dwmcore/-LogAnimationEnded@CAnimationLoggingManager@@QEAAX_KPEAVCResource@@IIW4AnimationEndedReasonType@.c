char __fastcall CAnimationLoggingManager::LogAnimationEnded(
        wchar_t *a1,
        __int64 a2,
        struct CResource *a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  struct CAnimationLoggingManager::ResourceDebugInfo *DebugInfoForResource; // rax
  wchar_t *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  wchar_t *v15; // rax
  struct CAnimationLoggingManager::ResourceDebugInfo *v16; // rbx
  DiagnosticCallbacksManager *v17; // rdi
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  int v22; // [rsp+20h] [rbp-B9h]
  int v23; // [rsp+20h] [rbp-B9h]
  __int64 v24; // [rsp+28h] [rbp-B1h]
  __int64 v25; // [rsp+30h] [rbp-A9h]
  unsigned int v26; // [rsp+50h] [rbp-89h] BYREF
  unsigned int v27; // [rsp+54h] [rbp-85h] BYREF
  wchar_t *CommentForObject; // [rsp+58h] [rbp-81h] BYREF
  wchar_t *v29; // [rsp+60h] [rbp-79h] BYREF
  wchar_t *v30; // [rsp+68h] [rbp-71h] BYREF
  int v31[2]; // [rsp+70h] [rbp-69h] BYREF
  _BYTE v32[64]; // [rsp+80h] [rbp-59h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-19h] BYREF
  int v34; // [rsp+C8h] [rbp-11h]
  char v35; // [rsp+CCh] [rbp-Dh]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+4Fh]

  LOBYTE(DebugInfoForResource) = a6;
  if ( a6 )
  {
    LOBYTE(DebugInfoForResource) = a6 - 1;
    if ( a6 == 1 )
    {
      v11 = L"Animation disconnected due to direct property set (API)";
    }
    else
    {
      LOBYTE(DebugInfoForResource) = a6 - 2;
      if ( a6 == 2 )
      {
        v11 = L"Animation disconnected because the target was destroyed";
      }
      else
      {
        if ( a6 != 3 )
          ModuleFailFastForHRESULT(2147549183LL, retaddr);
        v11 = L"Animation was stopped (StopAnimation)";
      }
    }
  }
  else
  {
    v11 = L"Animation completed";
  }
  if ( (unsigned int)dword_1803E07D0 > 5 )
  {
    LOBYTE(DebugInfoForResource) = tlgKeywordOn((__int64)&dword_1803E07D0, 1LL);
    if ( (_BYTE)DebugInfoForResource )
    {
      CommentForObject = (wchar_t *)CAnimationLoggingManager::GetCommentForObject((CAnimationLoggingManager *)a1, a4);
      v15 = a1 + 80;
      if ( *((_QWORD *)a1 + 23) >= 8uLL )
        v15 = *(wchar_t **)v15;
      v29 = v15;
      v30 = v11;
      v26 = a5;
      v27 = a4;
      *(_QWORD *)v31 = a2;
      LOBYTE(DebugInfoForResource) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
                                       v12,
                                       byte_18037CC33,
                                       v13,
                                       v14,
                                       (__int64)v31,
                                       (__int64)&v27,
                                       (__int64)&v26,
                                       &v30,
                                       &v29,
                                       &CommentForObject);
    }
  }
  if ( a3 )
  {
    DebugInfoForResource = CAnimationLoggingManager::TryGetDebugInfoForResource((CAnimationLoggingManager *)a1, a3);
    v16 = DebugInfoForResource;
    if ( DebugInfoForResource )
    {
      if ( *((_DWORD *)DebugInfoForResource + 10) )
      {
        v17 = *(DiagnosticCallbacksManager **)(*((_QWORD *)a1 + 2) + 1248LL);
        memset_0(v32, 0, sizeof(v32));
        v18 = *(_QWORD *)a3;
        v33 = 0LL;
        v34 = 18;
        v35 = 0;
        v19 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, _BYTE *))(v18 + 136))(a3, a5, v32);
        if ( v19 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            654LL,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
            (const char *)(unsigned int)v19,
            v22);
        LODWORD(v25) = a6;
        v20 = DiagnosticCallbacksManager::SendAnimationEnded(
                v17,
                *((_DWORD *)v16 + 10),
                *((_DWORD *)v16 + 11),
                a2,
                a5,
                v24,
                v25,
                (CExpressionValue *)v32);
        if ( v20 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            664LL,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
            (const char *)(unsigned int)v20,
            v23);
        LOBYTE(DebugInfoForResource) = Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v33);
      }
    }
  }
  return (char)DebugInfoForResource;
}
