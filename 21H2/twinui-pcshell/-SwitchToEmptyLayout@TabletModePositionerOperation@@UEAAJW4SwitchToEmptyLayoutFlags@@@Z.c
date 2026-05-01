/*
 * XREFs of ?SwitchToEmptyLayout@TabletModePositionerOperation@@UEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x18047ADF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007D6B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?_EvictAllItems@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@PEA_N@Z @ 0x1804EF83C (-_EvictAllItems@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@PEA.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1804EFC6C (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1804F05E8 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositionerOperation::SwitchToEmptyLayout(__int64 a1, char a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  int v5; // r14d
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 176));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v6 = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 171LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_9;
  }
  v6 = CAppLayoutOperation::_EvictAllItems(a1 - 152, 0LL, 5LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 174LL;
    goto LABEL_5;
  }
  *(_DWORD *)(a1 - 72) = 1;
  if ( (a2 & 1) != 0 )
    *(_DWORD *)(a1 - 72) = 33;
  CAppLayoutOperation::_FinalizeLayout(a1 - 152);
  v7 = 0;
LABEL_9:
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
  return v7;
}
