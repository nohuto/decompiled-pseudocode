/*
 * XREFs of ?NavigateView@WindowManagerBridge@@UEAAJIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18006D8C0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_946ff4b2cd2342ecd6351b66005f8fb8___ @ 0x18006D92C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_946ff4b2cd2342ecd6351b66005f8fb8.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowManagerBridge::NavigateView(__int64 a1, int a2, int a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+58h] [rbp+10h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = a3;
  v8 = a2;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 216LL))(*(_QWORD *)(a1 + 280));
  v7[0] = &v8;
  v7[1] = a1;
  v7[2] = &v9;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_946ff4b2cd2342ecd6351b66005f8fb8___(
           v5,
           CurrentThreadId,
           v7);
}
