/*
 * XREFs of ?_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z @ 0x1C01F43FC
 * Callers:
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01F3E38 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F5128 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C00CF084 (IsWindowBeingDestroyed.c)
 *     _GetDesktopWindow @ 0x1C00ECDE0 (_GetDesktopWindow.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 */

bool __fastcall _ShouldGhostWindow(const struct tagWND *a1)
{
  __int64 v1; // rdi
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // r9

  v1 = *((_QWORD *)a1 + 2);
  v3 = *(_QWORD **)(v1 + 424);
  return !(unsigned int)IsWindowBeingDestroyed((__int64)a1)
      && (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 31LL) & 0x10) != 0
      && IsTopLevelWindow(v4)
      && *(_QWORD *)(v1 + 456) == grpdeskRitInput
      && **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) != *(_WORD *)(gpsi + 900LL)
      && !GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL, v5)
      && (*(_DWORD *)(*(_QWORD *)(v1 + 424) + 12LL) & 0x8000000) == 0
      && *v3 != gpepCSRSS
      && !(unsigned int)IsProcessDwm(*v3)
      && !PsGetProcessDebugPort(**(_QWORD **)(v1 + 424))
      && (*(_DWORD *)(v1 + 632) > 0x9900u || (*(_DWORD *)(v1 + 648) & 0x80000) == 0)
      && a1 != (const struct tagWND *)GetDesktopWindow((__int64)a1);
}
