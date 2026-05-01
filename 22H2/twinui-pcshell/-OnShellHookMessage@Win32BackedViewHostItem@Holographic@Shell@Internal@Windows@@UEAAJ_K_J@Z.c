/*
 * XREFs of ?OnShellHookMessage@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJ_K_J@Z @ 0x1802BFEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_CheckWindowTextChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ @ 0x1802C35C0 (-_CheckWindowTextChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ.c)
 *     ?_GetIsSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ @ 0x1802C3F68 (-_GetIsSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ.c)
 *     ?_OnShellFullscreenStateChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x1802C4388 (-_OnShellFullscreenStateChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA.c)
 *     ?_RaiseTitleBarChangedEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJXZ @ 0x1802C4628 (-_RaiseTitleBarChangedEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJXZ.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::OnShellHookMessage(
        RTL_SRWLOCK *this,
        __int64 a2,
        HWND a3)
{
  RTL_SRWLOCK *v3; // rsi
  HWND Ptr; // rbp
  char v8; // r15
  char v9; // dl
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = this + 8;
  AcquireSRWLockShared(this + 8);
  Ptr = (HWND)this[46].Ptr;
  v8 = HIDWORD(this[49].Ptr) != 0;
  if ( v3 )
    ReleaseSRWLockShared(v3);
  if ( a3 == Ptr )
  {
    if ( a2 == 6 )
    {
      if ( Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_CheckWindowTextChanged((Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)&this[-20]) )
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_RaiseTitleBarChangedEvent((Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)&this[-20]);
    }
    else if ( (unsigned __int64)(a2 - 53) <= 1
           && Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_GetIsSlate((Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)&this[-20]) )
    {
      v9 = 0;
      if ( a2 == 53 )
        v9 = (GetWindowLongW(Ptr, -16) & 0xC00000) == 0;
      if ( v8 != v9 )
      {
        v10 = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_OnShellFullscreenStateChanged(
                (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)&this[-20],
                v9);
        if ( v10 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x4BF,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
            (const char *)(unsigned int)v10);
      }
    }
  }
  return 0LL;
}
