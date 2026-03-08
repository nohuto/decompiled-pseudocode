/*
 * XREFs of WindowHasShadow @ 0x1C002A3D0
 * Callers:
 *     NtUserSetLayeredWindowAttributes @ 0x1C002A290 (NtUserSetLayeredWindowAttributes.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C002E920 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 * Callees:
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C0029674 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall WindowHasShadow(struct tagWND *a1)
{
  unsigned int v1; // r9d

  v1 = 0;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
    return FindShadow(a1) != 0LL;
  return v1;
}
