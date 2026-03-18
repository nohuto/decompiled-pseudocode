/*
 * XREFs of FVisCountable @ 0x1C00A1A50
 * Callers:
 *     DecVisWindows @ 0x1C00A17FC (DecVisWindows.c)
 *     IncVisWindows @ 0x1C00A1908 (IncVisWindows.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C00F1010 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 */

__int64 __fastcall FVisCountable(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v2; // eax
  __int64 v3; // r8

  v1 = *(_QWORD *)(a1 + 40);
  if ( *(char *)(v1 + 19) < 0 )
    return 0LL;
  if ( (*(_WORD *)(v1 + 42) & 0x2FFF) == 0x29D )
    return 1LL;
  v2 = IsTopLevelWindow(a1);
  if ( !v2 )
    return 0LL;
  LOBYTE(v2) = ~*(_BYTE *)(v3 + 31);
  return (v2 >> 5) & 1;
}
