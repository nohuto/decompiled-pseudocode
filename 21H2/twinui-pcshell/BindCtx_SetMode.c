/*
 * XREFs of BindCtx_SetMode @ 0x180153F00
 * Callers:
 *     ?CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x1801545E4 (-CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     ?_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z @ 0x18015D4A0 (-_CreateFileSysBindCtx@@YAJPEAUIBindCtx@@PEBU_WIN32_FIND_DATAW@@PEAPEAU1@@Z.c)
 *     ?_CreateKnownFolderPidl@CBackupLocationManager@@AEBAJPEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x18015D5AC (-_CreateKnownFolderPidl@CBackupLocationManager@@AEBAJPEBGPEAPEFAU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BindCtx_SetMode(__int64 a1, __int64 a2, LPBC *a3)
{
  HRESULT BindCtx; // edi
  LPBC v5; // rcx
  _DWORD v7[4]; // [rsp+20h] [rbp-28h] BYREF

  *a3 = 0LL;
  BindCtx = CreateBindCtx(0, a3);
  if ( BindCtx >= 0 )
  {
    v5 = *a3;
    v7[1] = 0;
    v7[3] = 0;
    v7[0] = 16;
    v7[2] = 4096;
    BindCtx = ((__int64 (__fastcall *)(LPBC, _DWORD *))v5->lpVtbl->SetBindOptions)(v5, v7);
    if ( BindCtx < 0 )
      wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)a3);
  }
  return (unsigned int)BindCtx;
}
