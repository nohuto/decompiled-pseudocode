/*
 * XREFs of FreeSpb @ 0x1C000B520
 * Callers:
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C000B34C (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 *     SpbCheckPwnd @ 0x1C0012BCC (SpbCheckPwnd.c)
 *     FreeAllSpbs @ 0x1C0020240 (FreeAllSpbs.c)
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0068A60 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C00E51C8 (zzzLockWindowUpdate2.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01ED7C0 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     RestoreSpb @ 0x1C01FA57C (RestoreSpb.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x1C00E3814 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?PostSpbApc@@YAXPEAU_KAPC@@PEAUtagWND@@_K@Z @ 0x1C01FA448 (-PostSpbApc@@YAXPEAU_KAPC@@PEAUtagWND@@_K@Z.c)
 *     GreSaveScreenBits @ 0x1C02AA584 (GreSaveScreenBits.c)
 */

void __fastcall FreeSpb(char *a1)
{
  char v1; // bp
  char v2; // si
  char *v4; // rcx
  char *i; // rdx
  struct tagWND **v6; // rdi
  __int64 v7; // rdx
  void *v8; // rcx
  _QWORD *j; // rbx
  unsigned __int64 v10; // r8
  struct tagWND *v11; // rdx

  if ( !a1 )
    return;
  v1 = 0;
  v2 = 0;
  if ( (*((_DWORD *)a1 + 12) & 1) != 0 )
  {
    if ( (unsigned int)GreIsVisRgnPublishLocked(*(_QWORD *)(gpDispInfo + 40LL)) )
      v1 = 1;
    else
      GreSaveScreenBits(*(_QWORD *)(gpDispInfo + 40LL), 2LL, *((_QWORD *)a1 + 7));
  }
  else if ( *((_QWORD *)a1 + 2) )
  {
    GreDeleteObject();
  }
  if ( *((_QWORD *)a1 + 5) )
    GreDeleteObject();
  v4 = (char *)(gpDispInfo + 32LL);
  for ( i = *(char **)(gpDispInfo + 32LL); i != a1; i = *(char **)i )
    v4 = i;
  v6 = (struct tagWND **)(a1 + 8);
  *(_QWORD *)v4 = *(_QWORD *)a1;
  v7 = *((_QWORD *)a1 + 1);
  if ( v7 )
  {
    SetOrClrWF(0LL, v7, 128LL, 1LL);
    if ( IS_USERCRIT_OWNED_SHAREDONLY() )
      v2 = 1;
    else
      HMAssignmentUnlock(a1 + 8);
  }
  if ( v1 )
  {
    v10 = *((_QWORD *)a1 + 7);
    if ( !v2 )
    {
      v11 = 0LL;
      goto LABEL_29;
    }
LABEL_28:
    v11 = *v6;
LABEL_29:
    PostSpbApc(*((struct _KAPC **)a1 + 8), v11, v10);
    if ( v2 )
      *v6 = 0LL;
    *((_QWORD *)a1 + 8) = 0LL;
    goto LABEL_13;
  }
  if ( v2 )
  {
    v10 = 0LL;
    goto LABEL_28;
  }
LABEL_13:
  v8 = (void *)*((_QWORD *)a1 + 8);
  if ( v8 )
    Win32FreePool(v8);
  Win32FreePool(a1);
  if ( !*(_QWORD *)(gpDispInfo + 32LL) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    for ( j = *(_QWORD **)(gpDispInfo + 24LL); j; j = (_QWORD *)*j )
      GreGetBounds(j[1], 0LL, 2LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  }
}
