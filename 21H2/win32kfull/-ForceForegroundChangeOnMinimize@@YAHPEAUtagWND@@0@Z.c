/*
 * XREFs of ?ForceForegroundChangeOnMinimize@@YAHPEAUtagWND@@0@Z @ 0x1C00CE268
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00CDA30 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     CanForceForeground @ 0x1C007B000 (CanForceForeground.c)
 */

_BOOL8 __fastcall ForceForegroundChangeOnMinimize(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v3; // rcx
  _BOOL8 result; // rax
  __int64 v5; // r9
  __int64 v6; // r8

  v3 = *((_QWORD *)a1 + 2);
  result = 0;
  if ( (*(_DWORD *)(v3 + 1256) & 0x40000) != 0 && *(struct tagWND **)(v3 + 1392) == a1 )
  {
    v5 = *(_QWORD *)(v3 + 432);
    if ( v5 == gpqForeground && *(struct tagWND **)(v5 + 120) == a1 )
    {
      v6 = *(_QWORD *)(v3 + 1400);
      if ( v6 )
      {
        if ( *(_QWORD *)(v6 + 16) == gptiForeground
          && *(_QWORD *)(*((_QWORD *)a2 + 2) + 432LL) != gpqForeground
          && !CanForceForeground(*(_QWORD *)(v3 + 424)) )
        {
          return 1;
        }
      }
    }
  }
  return result;
}
