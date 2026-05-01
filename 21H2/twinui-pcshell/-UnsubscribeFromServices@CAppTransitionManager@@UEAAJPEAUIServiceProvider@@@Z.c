/*
 * XREFs of ?UnsubscribeFromServices@CAppTransitionManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180435580
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppTransitionManager::UnsubscribeFromServices(
        CAppTransitionManager *this,
        struct IServiceProvider *a2)
{
  __int64 *v2; // rsi
  int v4; // eax
  unsigned int v5; // edi
  HWND v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (__int64 *)((char *)this + 200);
  if ( *((_DWORD *)this + 68) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v2 + 104LL))(*v2);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32,
        (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
    *((_DWORD *)this + 68) = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 18);
  v7 = (HWND)*((_QWORD *)this + 21);
  if ( v7 )
  {
    DestroyWindow(v7);
    *((_QWORD *)this + 21) = 0LL;
  }
  return 0LL;
}
