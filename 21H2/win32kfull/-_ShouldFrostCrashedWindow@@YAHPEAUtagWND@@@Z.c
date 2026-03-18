/*
 * XREFs of ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C021144C
 * Callers:
 *     xxxFrostCrashedWindow @ 0x1C0211758 (xxxFrostCrashedWindow.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C0083884 (IsWindowBeingDestroyed.c)
 */

__int64 __fastcall _ShouldFrostCrashedWindow(struct tagWND *a1)
{
  __int64 v1; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r9

  v1 = *((_QWORD *)a1 + 2);
  v3 = 0;
  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1)
    && IsTopLevelWindow(v4)
    && *(_QWORD *)(v1 + 456) == grpdeskRitInput
    && **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) != *(_WORD *)(gpsi + 900LL)
    && (*(_DWORD *)(v5 + 12) & 0x8000000) == 0
    && *(_QWORD *)v5 != gpepCSRSS
    && !(unsigned int)IsProcessDwm(*(_QWORD *)v5)
    && !PsGetProcessDebugPort(**(_QWORD **)(v1 + 424))
    && (*(_DWORD *)(v1 + 632) > 0x9900u || (*(_DWORD *)(v1 + 648) & 0x80000) == 0)
    && a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
  {
    return 1;
  }
  return v3;
}
