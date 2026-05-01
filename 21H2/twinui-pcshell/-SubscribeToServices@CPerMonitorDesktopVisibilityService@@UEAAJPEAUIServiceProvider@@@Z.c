/*
 * XREFs of ?SubscribeToServices@CPerMonitorDesktopVisibilityService@@UEAAJPEAUIServiceProvider@@@Z @ 0x18043D450
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPerMonitorDesktopVisibilityService::SubscribeToServices(
        CPerMonitorDesktopVisibilityService *this,
        struct IServiceProvider *a2)
{
  _QWORD *v2; // r14
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 192);
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, _QWORD *))QueryService)(
         a2,
         &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
         &GUID_b6b9bca5_a1ad_4216_ab1f_4de46296eac8,
         v2);
  if ( v6 < 0 )
  {
    v7 = 48LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\apppositioner\\lib\\desktopvisibility.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(*(_QWORD *)*v2 + 24LL))(
         *v2,
         ((unsigned __int64)this + 72) & -(__int64)(this != (CPerMonitorDesktopVisibilityService *)40),
         (char *)this + 168);
  if ( v6 < 0 )
  {
    v7 = 49LL;
    goto LABEL_3;
  }
  return 0LL;
}
