/*
 * XREFs of FreeSpb @ 0x1C00DCA08
 * Callers:
 *     SpbCheckPwnd @ 0x1C0004DF4 (SpbCheckPwnd.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0047DD4 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     zzzLockWindowUpdate2 @ 0x1C00DBFA8 (zzzLockWindowUpdate2.c)
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C00DC840 (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 *     FreeAllSpbs @ 0x1C00F0F80 (FreeAllSpbs.c)
 *     RestoreSpb @ 0x1C0158DC0 (RestoreSpb.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C020C464 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     ?PostSpbApc@@YAXPEAU_KAPC@@PEAUtagWND@@_K@Z @ 0x1C0214A74 (-PostSpbApc@@YAXPEAU_KAPC@@PEAUtagWND@@_K@Z.c)
 *     GreSaveScreenBits @ 0x1C029D748 (GreSaveScreenBits.c)
 */

void __fastcall FreeSpb(__int64 a1)
{
  char v1; // bp
  char v2; // si
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *i; // rdx
  struct tagWND **v8; // rdi
  struct tagWND *v9; // rdx
  __int64 v10; // rcx
  _QWORD *j; // rbx
  unsigned __int64 v12; // r8
  struct tagWND *v13; // rdx

  if ( !a1 )
    return;
  v1 = 0;
  v2 = 0;
  if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
  {
    if ( (unsigned int)GreIsVisRgnPublishLocked(*(_QWORD *)(gpDispInfo + 40LL)) )
      v1 = 1;
    else
      GreSaveScreenBits(*(_QWORD *)(gpDispInfo + 40LL), 2LL, *(_QWORD *)(a1 + 56), 0LL);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 16);
    if ( v4 )
      GreDeleteObject(v4);
  }
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
    GreDeleteObject(v5);
  v6 = (_QWORD *)(gpDispInfo + 32LL);
  for ( i = *(_QWORD **)(gpDispInfo + 32LL); i != (_QWORD *)a1; i = (_QWORD *)*i )
    v6 = i;
  v8 = (struct tagWND **)(a1 + 8);
  *v6 = *(_QWORD *)a1;
  v9 = *(struct tagWND **)(a1 + 8);
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
    v12 = *(_QWORD *)(a1 + 56);
    if ( !v2 )
    {
      v13 = 0LL;
      goto LABEL_30;
    }
LABEL_29:
    v13 = *v8;
LABEL_30:
    PostSpbApc(*(struct _KAPC **)(a1 + 64), v13, v12);
    if ( v2 )
      *v8 = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
    goto LABEL_15;
  }
  if ( v2 )
  {
    v12 = 0LL;
    goto LABEL_29;
  }
  v10 = *(_QWORD *)(a1 + 64);
  if ( v10 )
    Win32FreePool(v10);
LABEL_15:
  Win32FreePool(a1);
  if ( !*(_QWORD *)(gpDispInfo + 32LL) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    for ( j = *(_QWORD **)(gpDispInfo + 24LL); j; j = (_QWORD *)*j )
      GreGetBounds(j[1], 0LL, 2LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  }
}
