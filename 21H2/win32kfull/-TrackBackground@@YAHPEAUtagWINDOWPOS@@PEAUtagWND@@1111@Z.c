/*
 * XREFs of ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C00365F4
 * Callers:
 *     ?TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z @ 0x1C0036510 (-TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z.c)
 * Callees:
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0035300 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     CalcForegroundInsertAfter @ 0x1C0038B7C (CalcForegroundInsertAfter.c)
 *     GetLastTopMostWindow @ 0x1C0038CE8 (GetLastTopMostWindow.c)
 *     ?IsLastTopMostWindow@@YAHPEBUtagWND@@@Z @ 0x1C0132538 (-IsLastTopMostWindow@@YAHPEBUtagWND@@@Z.c)
 */

__int64 __fastcall TrackBackground(
        struct tagWINDOWPOS *a1,
        struct tagWND *a2,
        struct tagWND *a3,
        struct tagWND *a4,
        struct tagWND *a5,
        struct tagWND *a6)
{
  __int64 v6; // rbx
  const struct tagWND *v7; // r10
  __int64 *LastTopMostWindow; // r10
  __int64 v12; // rdx

  v6 = 0LL;
  v7 = a4;
  if ( !a3
    || *((_QWORD *)a2 + 2) == gptiForeground
    || ((*(_BYTE *)(*((_QWORD *)a3 + 5) + 19LL) & 4 ^ (*(unsigned __int8 *)(*((_QWORD *)a3 + 5) + 24LL) >> 1) & 4) & 0xFFFFFFFC) == 0
    || (*(_BYTE *)(*((_QWORD *)a2 + 5) + 24LL) & 8) != 0 )
  {
    return 0LL;
  }
  if ( a4 || (v7 = (const struct tagWND *)CalcForegroundInsertAfter(a2)) != 0LL )
  {
    if ( !a6 || *(_QWORD *)(*((_QWORD *)a2 + 2) + 432LL) != gpqForeground || !(unsigned int)IsLastTopMostWindow(v7) )
    {
      if ( !(unsigned int)IsLastTopMostWindow(v7) && a5 == GetRootOwner(a2) )
      {
        v12 = *((_QWORD *)a5 + 2);
        if ( *(_QWORD *)(v12 + 1392) )
        {
          if ( *(_QWORD *)(v12 + 432) == gpqForeground && a5 == *(struct tagWND **)(gpqForeground + 120LL) )
            LastTopMostWindow = (__int64 *)GetLastTopMostWindow(a2);
        }
      }
      if ( LastTopMostWindow )
        v6 = *LastTopMostWindow;
      goto LABEL_14;
    }
    return 0LL;
  }
LABEL_14:
  *((_QWORD *)a1 + 1) = v6;
  return 1LL;
}
