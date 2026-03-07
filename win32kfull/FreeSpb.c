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
