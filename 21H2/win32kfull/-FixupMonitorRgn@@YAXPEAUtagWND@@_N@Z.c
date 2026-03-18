/*
 * XREFs of ?FixupMonitorRgn@@YAXPEAUtagWND@@_N@Z @ 0x1C00FE6AC
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     SelectWindowRgn @ 0x1C00847C0 (SelectWindowRgn.c)
 *     IsSmallerThanScreen @ 0x1C014CE30 (IsSmallerThanScreen.c)
 */

void __fastcall FixupMonitorRgn(struct tagWND *a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rdx

  v3 = (unsigned __int8)a2;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 8) != 0 )
  {
    if ( *(_DWORD *)*gpDispInfo <= 1u || (unsigned int)IsSmallerThanScreen(a1, a2) )
    {
      v4 = 0LL;
    }
    else
    {
      if ( *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL) )
        return;
      v4 = 2LL;
    }
    SelectWindowRgn(a1, v4, v3);
  }
}
