/*
 * XREFs of ?RegisterRawInput@JointResize@@AEAAX_N@Z @ 0x18048DCAC
 * Callers:
 *     ?OnArrangedWindowBorderEnter@JointResize@@UEAAXPEAUHWND__@@HI@Z @ 0x18048D5C0 (-OnArrangedWindowBorderEnter@JointResize@@UEAAXPEAUHWND__@@HI@Z.c)
 *     ?OnArrangedWindowBorderExit@JointResize@@UEAAXXZ @ 0x18048D6F0 (-OnArrangedWindowBorderExit@JointResize@@UEAAXXZ.c)
 *     ?OnArrangedWindowSizeStarted@JointResize@@UEAAJPEAUIApplicationView@@UtagRECT@@HI@Z @ 0x18048D820 (-OnArrangedWindowSizeStarted@JointResize@@UEAAJPEAUIApplicationView@@UtagRECT@@HI@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall JointResize::RegisterRawInput(JointResize *this, char a2)
{
  int v4; // edx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *ppvOut; // [rsp+40h] [rbp+8h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  if ( IUnknown_QueryService(
         *((IUnknown **)this + 2),
         (const GUID *const)&SID_ImmersiveRawInputProvider,
         &GUID_c1235996_b084_4af2_8663_28f19352097e,
         &ppvOut) >= 0 )
  {
    v4 = *((_DWORD *)this + 107);
    if ( a2 )
    {
      if ( !v4 )
        (*(void (__fastcall **)(void *, JointResize *, __int64, char *))(*(_QWORD *)ppvOut + 24LL))(
          ppvOut,
          this,
          2LL,
          (char *)this + 428);
    }
    else if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut + 32LL))(ppvOut);
      if ( v5 >= 0 )
        *((_DWORD *)this + 107) = 0;
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1DE,
          (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)v5);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
}
