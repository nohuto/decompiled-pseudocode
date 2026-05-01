/*
 * XREFs of _lambda_6fa5311f677dfb1ca9719d5bf83446d7_::operator() @ 0x1802FD94C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6fa5311f677dfb1ca9719d5bf83446d7___::Run @ 0x1802FFF60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6fa5311f677dfb1ca9719d5bf83446d7___--Run.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z @ 0x1802FDFCC (-AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z.c)
 *     ?ValidateTabId@TabTransferManager@@AEAAXUShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18030127C (-ValidateTabId@TabTransferManager@@AEAAXUShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_6fa5311f677dfb1ca9719d5bf83446d7_::operator()(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rdi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int128 v6; // [rsp+30h] [rbp-38h] BYREF
  __int128 v7; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = *a1 + 6;
  AcquireSRWLockExclusive(v2);
  v3 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, __int128 *))a1[2]->Ptr + 7))(a1[2], &v7);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      256LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v6 = v7;
  TabTransferManager::ValidateTabId(*a1, &v6);
  v4 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, RTL_SRWLOCK *))a1[2]->Ptr + 6))(a1[2], *a1 + 28);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      258LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, RTL_SRWLOCK *))a1[2]->Ptr + 8))(a1[2], *a1 + 30);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      259LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  TabTransferManager::AdvanceTransfer(*a1, 8LL);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
