/*
 * XREFs of ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C0209F58
 * Callers:
 *     xxxRegisterSiblingFrostWindow @ 0x1C020A2E0 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C00388DC (IsWindowBeingDestroyed.c)
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C00704C0 (_GetDesktopWindow.c)
 */

__int64 __fastcall _ShouldFrostSiblingWindow(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rsi
  _QWORD *v4; // r14
  __int64 v5; // r8
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rax

  v1 = 0;
  v2 = *((_QWORD *)a1 + 2);
  v4 = *(_QWORD **)(v2 + 424);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 0xC0) == 0xC0
    && !(unsigned int)IsWindowBeingDestroyed((__int64)a1)
    && (*(_BYTE *)(v5 + 31) & 0x10) != 0
    && *(_QWORD *)(v2 + 456) == grpdeskRitInput )
  {
    v6 = *(unsigned __int16 *)(gpsi + 900LL);
    if ( **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) != (_WORD)v6
      && !GetProp((__int64)a1, v6, 1LL)
      && !GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL)
      && (*(_DWORD *)(*(_QWORD *)(v2 + 424) + 12LL) & 0x8000000) == 0
      && *v4 != gpepCSRSS
      && !(unsigned int)IsProcessDwm(*v4) )
    {
      v7 = 0;
      if ( *(_DWORD *)(v2 + 632) <= 0x9900u )
        v7 = *(_DWORD *)(v2 + 648);
      if ( (v7 & 0x80000) == 0 && a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
      {
        v8 = *(_QWORD *)(v2 + 464);
        if ( a1 != *(struct tagWND **)(v8 + 168) && a1 != *(struct tagWND **)(v8 + 184) )
          return 1;
      }
    }
  }
  return v1;
}
