char __fastcall SpbCheckPwnd(struct tagWND *a1)
{
  struct tagSPB *v2; // rdi
  char result; // al
  struct tagSPB *v4; // rsi
  struct tagWND *i; // rbx

  while ( 1 )
  {
    v2 = *(struct tagSPB **)(gpDispInfo + 32LL);
    if ( !v2 )
      break;
    while ( 1 )
    {
      v4 = *(struct tagSPB **)v2;
      for ( i = (struct tagWND *)*((_QWORD *)v2 + 1); i; i = (struct tagWND *)*((_QWORD *)i + 13) )
      {
        if ( a1 == i )
          FreeSpb((char *)v2);
      }
      if ( !IsSpbPresentOrNull(v4) )
        break;
      v2 = v4;
      if ( !v4 )
        goto LABEL_2;
    }
  }
LABEL_2:
  result = gpDispInfo;
  if ( *(_QWORD *)(gpDispInfo + 32LL) )
    return SpbCheckRect(a1, (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL), 0);
  return result;
}
