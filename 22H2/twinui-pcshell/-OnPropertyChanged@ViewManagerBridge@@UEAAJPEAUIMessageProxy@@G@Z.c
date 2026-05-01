/*
 * XREFs of ?OnPropertyChanged@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@G@Z @ 0x18032FB90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?ViewNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4ViewNavigationLevel@Navigation@@@Z @ 0x1803193B0 (-ViewNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4ViewNavigationLevel@Navigation@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewManagerBridge::OnPropertyChanged(RTL_SRWLOCK **this, int (***a2)(void), __int16 a3)
{
  int (*v5)(void); // rbx
  int v6; // eax
  int v7; // eax
  __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v11; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v12; // [rsp+68h] [rbp+20h] BYREF

  v9[0] = 0LL;
  v5 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
  try
  {
    if ( v5() >= 0 && a3 == 6 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v9[0] + 152LL))(v9[0], &v12);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          996LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v6);
      v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v9[0] + 72LL))(v9[0], &v11);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          999LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v7);
      ViewEventDispatcher::ViewNavigationLevelChanged(this[9], v12, v11);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
  }
  catch ( ... )
  {
  }
  return 0LL;
}
