/*
 * XREFs of ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F53A4
 * Callers:
 *     ?xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z @ 0x1C01F5880 (-xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0039B60 (IsWindowBeingDestroyed.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 */

__int64 __fastcall _ShouldFrostCrashedWindow(struct tagWND *a1)
{
  __int64 v1; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r8

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
