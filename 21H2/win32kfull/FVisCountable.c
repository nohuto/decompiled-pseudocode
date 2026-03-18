/*
 * XREFs of FVisCountable @ 0x1C00201C0
 * Callers:
 *     DecVisWindows @ 0x1C001FD7C (DecVisWindows.c)
 *     IncVisWindows @ 0x1C0020088 (IncVisWindows.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C0081DAC (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
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
