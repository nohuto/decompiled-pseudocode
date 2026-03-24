/*
 * XREFs of FVisCountable @ 0x1C004C070
 * Callers:
 *     zzzSetWindowCompositionCloak @ 0x1C0036D90 (zzzSetWindowCompositionCloak.c)
 *     IncVisWindows @ 0x1C004BF54 (IncVisWindows.c)
 *     DecVisWindows @ 0x1C004C78C (DecVisWindows.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C006FC88 (_IsTopLevelWindow.c)
 */

_BOOL8 __fastcall FVisCountable(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r9

  v1 = *(_QWORD *)(a1 + 40);
  return *(char *)(v1 + 19) >= 0
      && ((*(_WORD *)(v1 + 42) & 0x2FFF) == 0x29D
       || (unsigned int)IsTopLevelWindow(a1) && (*(_BYTE *)(v2 + 31) & 0x20) == 0);
}
