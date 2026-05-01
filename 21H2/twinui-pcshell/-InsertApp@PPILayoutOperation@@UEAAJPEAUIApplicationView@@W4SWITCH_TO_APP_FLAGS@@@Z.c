/*
 * XREFs of ?InsertApp@PPILayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x18047B530
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007D6B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?QueryInsertApp@PPILayoutOperation@@AEAAJPEAUIApplicationView@@@Z @ 0x18047B718 (-QueryInsertApp@PPILayoutOperation@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1804EFC6C (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1804F05E8 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PPILayoutOperation::InsertApp(__int64 a1, struct IApplicationView *a2, char a3)
{
  PPILayoutOperation *v6; // r12
  struct _RTL_CRITICAL_SECTION *v7; // rbp
  int v8; // r13d
  int InsertApp; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = (PPILayoutOperation *)(a1 - 176);
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 176));
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  InsertApp = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v10 = InsertApp;
  if ( InsertApp >= 0 )
  {
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 - 88), (__int64)a2);
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
        *(_DWORD *)(a1 - 72) = v12 | 0x400000;
    }
    InsertApp = PPILayoutOperation::QueryInsertApp(v6, a2);
    v10 = InsertApp;
    if ( InsertApp >= 0 )
    {
      InsertApp = CAppLayoutOperation::_FinalizeLayout(a1 - 152);
      v10 = InsertApp;
      if ( InsertApp >= 0 )
        goto LABEL_14;
      v11 = 113LL;
    }
    else
    {
      v11 = 112LL;
    }
  }
  else
  {
    v11 = 93LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppilayoutoperation.cpp",
    (const char *)(unsigned int)InsertApp);
LABEL_14:
  if ( v8 >= 0 )
    LeaveCriticalSection(v7);
  return v10;
}
