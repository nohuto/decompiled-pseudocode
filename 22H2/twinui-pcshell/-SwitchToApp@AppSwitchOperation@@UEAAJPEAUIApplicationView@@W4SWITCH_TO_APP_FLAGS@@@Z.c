/*
 * XREFs of ?SwitchToApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x180477490
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007D6B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x180476D0C (-QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1804EF8DC (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1804F0258 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppSwitchOperation::SwitchToApp(__int64 a1, struct IApplicationView *a2, char a3)
{
  __int64 v6; // r14
  struct _RTL_CRITICAL_SECTION *v7; // rbp
  int v8; // r12d
  int SwitchToApp; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = a1 - 176;
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 176));
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  SwitchToApp = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v10 = SwitchToApp;
  if ( SwitchToApp < 0 )
  {
    v11 = 72LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
      (const char *)(unsigned int)SwitchToApp);
    goto LABEL_17;
  }
  SwitchToApp = AppSwitchOperation::QuerySwitchToApp(v6, a2, a3);
  v10 = SwitchToApp;
  if ( SwitchToApp < 0 )
  {
    v11 = 75LL;
    goto LABEL_15;
  }
  *(_DWORD *)(a1 - 72) = 1;
  if ( (a3 & 1) != 0 )
  {
    v12 = 65537;
  }
  else
  {
    *(_DWORD *)(a1 - 72) = 3;
    v12 = 65539;
  }
  if ( (a3 & 2) == 0 )
  {
    *(_DWORD *)(a1 - 72) = v12;
    if ( (a3 & 8) != 0 )
    {
      v12 |= 0x400000u;
      *(_DWORD *)(a1 - 72) = v12;
    }
    if ( (a3 & 0x10) != 0 )
      *(_DWORD *)(a1 - 72) = v12 | 0x2000000;
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 - 88), (__int64)a2);
  SwitchToApp = CAppLayoutOperation::_FinalizeLayout(a1 - 152);
  v10 = SwitchToApp;
  if ( SwitchToApp < 0 )
  {
    v11 = 103LL;
    goto LABEL_15;
  }
  v10 = 0;
LABEL_17:
  if ( v8 >= 0 )
    LeaveCriticalSection(v7);
  return v10;
}
