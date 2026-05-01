/*
 * XREFs of ?UnsubscribeFromServices@CFullScreenManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18021BFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFullScreenManager::UnsubscribeFromServices(CFullScreenManager *this, struct IServiceProvider *a2)
{
  __int64 *v3; // rdi
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = (__int64 *)((char *)this + 184);
  if ( *((_DWORD *)this + 43) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v3 + 32LL))(*v3);
    *((_DWORD *)this + 43) = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v3);
  if ( *((_DWORD *)this + 44) )
  {
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
           &v9);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x82,
        (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
        (const char *)(unsigned int)v5);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
      return v6;
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 32LL))(v9, *((unsigned int *)this + 44));
    *((_DWORD *)this + 44) = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  }
  return 0LL;
}
