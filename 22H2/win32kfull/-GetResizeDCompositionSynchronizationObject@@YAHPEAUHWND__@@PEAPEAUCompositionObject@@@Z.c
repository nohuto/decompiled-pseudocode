/*
 * XREFs of ?GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1C00C7F30
 * Callers:
 *     NtUserGetResizeDCompositionSynchronizationObject @ 0x1C00C7E60 (NtUserGetResizeDCompositionSynchronizationObject.c)
 * Callees:
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1C00C8130 (GreGetWindowResizeDCompositionSynchronizationObject.c)
 *     _GetTopLevelWindow @ 0x1C00CFFB0 (_GetTopLevelWindow.c)
 */

__int64 __fastcall GetResizeDCompositionSynchronizationObject(HWND a1, struct CompositionObject **a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  unsigned int WindowResizeDCompositionSynchronizationObject; // edi
  __int64 TopLevelWindow; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v9 = v4;
  if ( v4 && (v6 = *(_QWORD *)(v4 + 40), v5 = (*(_WORD *)(v6 + 42) & 0x2FFFu) - 669, (v5 & 0xFFFFFFFD) != 0) )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v16;
    *((_QWORD *)&v16 + 1) = v4;
    HMLockObject(v4);
    WindowResizeDCompositionSynchronizationObject = 1;
    TopLevelWindow = GetTopLevelWindow(v9);
    if ( !TopLevelWindow
      || (v13 = *(_QWORD *)(TopLevelWindow + 40), v12 = *(_WORD *)(v13 + 42) & 0x2FFF, (_DWORD)v12 == 669)
      || (WindowResizeDCompositionSynchronizationObject = GreGetWindowResizeDCompositionSynchronizationObject(*(HWND *)TopLevelWindow)) != 0 )
    {
      *a2 = 0LL;
    }
    ThreadUnlock1(v13, v12, v14);
  }
  else
  {
    WindowResizeDCompositionSynchronizationObject = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return WindowResizeDCompositionSynchronizationObject;
}
