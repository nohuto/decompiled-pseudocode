/*
 * XREFs of ?HideDropFeedback@JointResize@@AEAAJ_N@Z @ 0x18048CACC
 * Callers:
 *     ?HideDropFeedback@JointResize@@AEAAJ_N@Z @ 0x18048CACC (-HideDropFeedback@JointResize@@AEAAJ_N@Z.c)
 *     ?InitDropFeedback@JointResize@@AEAAJH@Z @ 0x18048CC70 (-InitDropFeedback@JointResize@@AEAAJH@Z.c)
 *     ?OnArrangedWindowSizeCompleted@JointResize@@UEAAXH@Z @ 0x18048D3B0 (-OnArrangedWindowSizeCompleted@JointResize@@UEAAXH@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_73ef71535b890153fa9387f7d486ec46___::Run @ 0x18048DA90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_73ef71535b890153fa9387f7d486ec46___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_73ef71535b890153fa9387f7d486ec46___ @ 0x18048BC38 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_73ef71535b890153fa9387f7d486ec46___.c)
 *     ?HideDropFeedback@JointResize@@AEAAJ_N@Z @ 0x18048CACC (-HideDropFeedback@JointResize@@AEAAJ_N@Z.c)
 */

__int64 __fastcall JointResize::HideDropFeedback(JointResize *this, char a2)
{
  __int64 *v3; // rsi
  char v4; // bp
  HWND v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  IUnknown *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int pvAttribute; // [rsp+68h] [rbp+10h] BYREF
  JointResize *v13; // [rsp+70h] [rbp+18h] BYREF

  if ( a2 )
  {
    if ( *((_QWORD *)this + 22) )
    {
      v3 = (__int64 *)((char *)this + 208);
      if ( !*((_QWORD *)this + 26) )
      {
        v4 = 1;
        if ( (int)DwmpBeginTransitionRequest(5LL) >= 0 )
        {
          v5 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 112LL))(*((_QWORD *)this + 22));
          DwmpTransitionWindowWithRects(v5, 26LL, 0LL, 0LL);
          pvAttribute = 1;
          DwmSetWindowAttribute(v5, 0xDu, &pvAttribute, 4u);
          DwmpEndTransitionRequest(5LL);
        }
        v13 = this;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
        v13 = this;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v3);
        v8 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_73ef71535b890153fa9387f7d486ec46___(
               v7,
               v6,
               (__int64)v3,
               &v13);
        if ( v8 >= 0 )
          v4 = 0;
        else
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x253,
            (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
            (const char *)(unsigned int)v8);
        if ( v13 )
          (*(void (__fastcall **)(JointResize *))(*(_QWORD *)v13 + 16LL))(v13);
        if ( v4 )
          JointResize::HideDropFeedback(this, 0);
        (*(void (__fastcall **)(JointResize *))(*(_QWORD *)this + 16LL))(this);
      }
    }
  }
  else if ( *((_QWORD *)this + 2) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 26);
    v9 = (IUnknown *)*((_QWORD *)this + 22);
    if ( v9 )
    {
      IUnknown_SetSite(v9, 0LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 22);
    }
  }
  return 0LL;
}
