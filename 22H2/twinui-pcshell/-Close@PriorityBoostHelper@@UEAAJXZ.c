/*
 * XREFs of ?Close@PriorityBoostHelper@@UEAAJXZ @ 0x180268DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801A9F0C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall PriorityBoostHelper::Close(PriorityBoostHelper *this)
{
  const char *v2; // r9
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( GetCurrentThreadId() != *((_DWORD *)this + 18) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      45LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      v2);
    __debugbreak();
  }
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    if ( *((_DWORD *)this + 16) )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x32,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
          (const char *)(unsigned int)v4);
      *((_DWORD *)this + 16) = 0;
    }
    if ( *((_DWORD *)this + 17) )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 32LL))(*((_QWORD *)this + 3));
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x38,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
          (const char *)(unsigned int)v5);
      *((_DWORD *)this + 17) = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  }
  *((_QWORD *)this + 4) = 0LL;
  return 0LL;
}
