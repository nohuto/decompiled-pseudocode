/*
 * XREFs of ?DestroyTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@6@@Z @ 0x1800F09F4
 * Callers:
 *     ?RemoveTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x1800F28C4 (-RemoveTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_4a333852e21931a81855c9334a3cdba7___ @ 0x1800F0318 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_4a333852e21931a81855c9334a3cdba7.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?handle_wait@wil@@YA_NPEAXK@Z @ 0x180293120 (-handle_wait@wil@@YA_NPEAXK@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::DestroyTabProxyWindow(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3)
{
  __int64 v5; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v7; // ecx
  int v8; // eax
  int v9[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v11; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 80);
  if ( v5 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 56LL))(v5, *a2);
  wil::handle_wait(*(wil **)(a1 + 32), (void *)0xFFFFFFFFLL, a3);
  v11 = a2;
  *(_QWORD *)v9 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)&v9[2] = &v11;
  CurrentThreadId = GetCurrentThreadId();
  v8 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_4a333852e21931a81855c9334a3cdba7___(
         v7,
         CurrentThreadId,
         (__int128 *)v9);
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (__int64)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v8);
}
