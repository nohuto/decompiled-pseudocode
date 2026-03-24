/*
 * XREFs of FreeSpb @ 0x1C0219D24
 * Callers:
 *     FreeAllSpbs @ 0x1C002AA90 (FreeAllSpbs.c)
 *     zzzLockWindowUpdate2 @ 0x1C003DD5C (zzzLockWindowUpdate2.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006DF90 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxFreeWindow @ 0x1C007A720 (xxxFreeWindow.c)
 *     xxxDrawDragRectEx @ 0x1C0210F44 (xxxDrawDragRectEx.c)
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C0219AE0 (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 *     RestoreSpb @ 0x1C0219F30 (RestoreSpb.c)
 *     SpbCheckPwnd @ 0x1C021A1E4 (SpbCheckPwnd.c)
 * Callees:
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     ?PostSpbApc@@YAXPEAU_KAPC@@PEAUtagWND@@_K@Z @ 0x1C02199D4 (-PostSpbApc@@YAXPEAU_KAPC@@PEAUtagWND@@_K@Z.c)
 *     GreSaveScreenBits @ 0x1C029E814 (GreSaveScreenBits.c)
 */

void __fastcall FreeSpb(char *a1)
{
  char v1; // bp
  char v2; // si
  __int64 v4; // rcx
  __int64 v5; // rcx
  char *v6; // rcx
  char *i; // rdx
  struct tagWND **v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  void *v11; // rcx
  struct tagWND *v12; // rdx
  _QWORD *j; // rbx

  if ( !a1 )
    return;
  v1 = 0;
  v2 = 0;
  if ( (*((_DWORD *)a1 + 12) & 1) != 0 )
  {
    if ( (unsigned int)GreIsVisRgnPublishLocked(*(_QWORD *)(gpDispInfo + 40LL)) )
      v1 = 1;
    else
      GreSaveScreenBits(*(_QWORD *)(gpDispInfo + 40LL), 2LL, *((_QWORD *)a1 + 7), 0LL);
  }
  else
  {
    v4 = *((_QWORD *)a1 + 2);
    if ( v4 )
      GreDeleteObject(v4);
  }
  v5 = *((_QWORD *)a1 + 5);
  if ( v5 )
    GreDeleteObject(v5);
  v6 = (char *)(gpDispInfo + 32LL);
  for ( i = *(char **)(gpDispInfo + 32LL); i != a1; i = *(char **)i )
    v6 = i;
  v8 = (struct tagWND **)(a1 + 8);
  *(_QWORD *)v6 = *(_QWORD *)a1;
  v9 = *((_QWORD *)a1 + 1);
  if ( v9 )
  {
    SetOrClrWF(0, v9, 0x80u, 1);
    if ( ExIsResourceAcquiredExclusiveLite(gpresUser) || !ExIsResourceAcquiredSharedLite(gpresUser) )
      HMAssignmentUnlock(a1 + 8);
    else
      v2 = 1;
  }
  if ( v1 )
  {
    v10 = *((_QWORD *)a1 + 7);
  }
  else
  {
    if ( !v2 )
    {
      v11 = (void *)*((_QWORD *)a1 + 8);
      if ( v11 )
        Win32FreePool(v11);
      goto LABEL_29;
    }
    v10 = 0LL;
  }
  if ( v2 )
    v12 = *v8;
  else
    v12 = 0LL;
  PostSpbApc(*((struct _KAPC **)a1 + 8), v12, v10);
  if ( v2 )
    *v8 = 0LL;
  *((_QWORD *)a1 + 8) = 0LL;
LABEL_29:
  Win32FreePool(a1);
  if ( !*(_QWORD *)(gpDispInfo + 32LL) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    for ( j = *(_QWORD **)(gpDispInfo + 24LL); j; j = (_QWORD *)*j )
      GreGetBounds(j[1], 0LL, 2LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  }
}
