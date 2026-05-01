/*
 * XREFs of ?CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F7350
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007D6B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F8980 (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 */

__int64 __fastcall CMultitaskingViewManager::CreateMultitaskingView(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // r14
  int v9; // r15d
  int MTVHost; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 40) & -(__int64)(a1 != 0));
  v9 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  MTVHost = CMultitaskingViewManager::_CreateMTVHost(a1, a2, 0LL, a3, a4);
  v11 = MTVHost;
  if ( MTVHost < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDD,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)MTVHost);
  if ( v9 >= 0 )
    LeaveCriticalSection(v7);
  return v11;
}
