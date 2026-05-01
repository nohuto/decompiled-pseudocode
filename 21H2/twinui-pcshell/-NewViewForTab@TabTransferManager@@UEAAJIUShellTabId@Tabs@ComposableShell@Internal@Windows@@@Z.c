/*
 * XREFs of ?NewViewForTab@TabTransferManager@@UEAAJIUShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802FE910
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180022A34 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005CD40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_63df1022615e5d58b392f54f931127cc_____lambda_63df1022615e5d58b392f54f931127cc___ @ 0x1802FC54C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_63df1022615e5.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall TabTransferManager::NewViewForTab(__int64 a1, int a2, __int128 *a3)
{
  __int64 *v6; // rax
  __int64 v7; // r9
  unsigned int v8; // edi
  __int64 *v9; // rax
  volatile int *v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // edi
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+38h] [rbp-40h] BYREF
  __int64 v17; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+48h] [rbp-30h] BYREF
  int v19; // [rsp+50h] [rbp-28h]
  __int128 v20; // [rsp+54h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v6 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
         &v16,
         a1);
  v17 = a1;
  v7 = *v6;
  *v6 = 0LL;
  v18 = v7;
  v19 = a2;
  v20 = *a3;
  v8 = *(_DWORD *)(a1 + 112);
  v9 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_63df1022615e5d58b392f54f931127cc_____lambda_63df1022615e5d58b392f54f931127cc___(
         &v15,
         (__int64)&v17);
  v11 = *v9;
  *v9 = 0LL;
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v12,
      v10);
  }
  v13 = SHTaskPoolQueueTask(3LL, 2LL, v8, 0LL, v11, 0LL);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      244LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)(unsigned int)v13);
  return 0LL;
}
