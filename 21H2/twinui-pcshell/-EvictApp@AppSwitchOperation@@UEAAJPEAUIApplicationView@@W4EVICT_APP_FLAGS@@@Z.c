/*
 * XREFs of ?EvictApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x180476960
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800133E0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007D6B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?QueryEvictApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x180476F14 (-QueryEvictApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1804EFC6C (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1804F05E8 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AppSwitchOperation::EvictApp(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // r14
  struct _RTL_CRITICAL_SECTION *v7; // r12
  int EvictApp; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v11; // eax
  char v12; // bl
  __int64 v13; // rbx
  __int64 v14; // rbx
  int v16; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v18; // [rsp+80h] [rbp+40h] BYREF
  __int64 v19; // [rsp+98h] [rbp+58h] BYREF

  v6 = a1 - 176;
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 176));
  v16 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  EvictApp = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v9 = EvictApp;
  if ( EvictApp < 0 )
  {
    v10 = 146LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
      (const char *)(unsigned int)EvictApp);
    goto LABEL_26;
  }
  EvictApp = AppSwitchOperation::QueryEvictApp(v6, a2, a3);
  v9 = EvictApp;
  if ( EvictApp < 0 )
  {
    v10 = 149LL;
    goto LABEL_24;
  }
  *(_DWORD *)(a1 - 72) = 1;
  if ( (a3 & 1) != 0 )
  {
    v11 = 524353;
    *(_DWORD *)(a1 - 72) = 524353;
  }
  else
  {
    v11 = 1;
  }
  if ( (a3 & 4) != 0 )
  {
    v12 = 1;
    v11 |= 0x20u;
    *(_DWORD *)(a1 - 72) = v11;
  }
  else
  {
    v12 = 0;
  }
  if ( (a3 & 8) == 0 )
    *(_DWORD *)(a1 - 72) = v11 | 0x10000;
  if ( (a3 & 2) == 0
    && (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 112) + 80LL))(*(_QWORD *)(a1 - 112), 1LL)
    && (!(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 112) + 80LL))(*(_QWORD *)(a1 - 112), 4LL)
     || v12) )
  {
    v19 = 0LL;
    v13 = *(_QWORD *)(a1 - 112);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v13 + 104LL))(
           v13,
           0LL,
           1LL,
           &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
           &v19) >= 0 )
    {
      v18 = 0LL;
      v14 = v19;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v14 + 48LL))(
             v14,
             &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
             &v18) >= 0 )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 - 88), &v18);
        *(_DWORD *)(a1 - 72) |= 2u;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  }
  EvictApp = CAppLayoutOperation::_FinalizeLayout(a1 - 152);
  v9 = EvictApp;
  if ( EvictApp < 0 )
  {
    v10 = 195LL;
    goto LABEL_24;
  }
  v9 = 0;
LABEL_26:
  if ( v16 >= 0 )
    LeaveCriticalSection(v7);
  return v9;
}
