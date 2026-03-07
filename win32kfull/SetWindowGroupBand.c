struct tagWND *__fastcall SetWindowGroupBand(struct tagWND *a1, unsigned int a2, int a3)
{
  struct tagWND *RootOwner; // rdi
  int v5; // ebp
  struct tagWND *i; // rbx
  __int64 v7; // rcx
  struct tagWND *result; // rax
  struct tagWND *v9; // rsi
  __int64 v10; // rcx
  struct tagWND *v11; // rcx
  struct tagWND *j; // r8
  __int64 v13; // r8

  RootOwner = a1;
  if ( !a3 )
    RootOwner = GetRootOwner(a1);
  v5 = *(_DWORD *)(*((_QWORD *)RootOwner + 5) + 236LL);
  GetBandOrdinal(v5);
  GetBandOrdinal(a2);
  for ( i = RootOwner; ; i = (struct tagWND *)*((_QWORD *)i + 12) )
  {
    v7 = *((_QWORD *)i + 12);
    if ( !v7 || *(_DWORD *)(*(_QWORD *)(v7 + 40) + 236LL) != v5 )
      break;
  }
  do
  {
    result = (struct tagWND *)*((_QWORD *)i + 5);
    if ( *((_DWORD *)result + 59) != v5 )
      break;
    v9 = (struct tagWND *)*((_QWORD *)i + 11);
    if ( i != RootOwner )
    {
      result = i;
      while ( 1 )
      {
        v10 = (__int64)result;
        if ( result )
          break;
LABEL_13:
        v11 = (struct tagWND *)*((_QWORD *)result + 15);
        if ( v11 != result )
        {
          result = (struct tagWND *)*((_QWORD *)result + 15);
          if ( v11 )
            continue;
        }
        for ( j = (struct tagWND *)*((_QWORD *)i + 14); j; j = *(struct tagWND **)(v13 + 88) )
        {
          result = (struct tagWND *)HasOwnedWindowInTree(j, RootOwner);
          if ( (_DWORD)result )
            goto LABEL_21;
        }
        goto LABEL_17;
      }
      while ( (struct tagWND *)v10 != RootOwner )
      {
        v10 = *(_QWORD *)(v10 + 104);
        if ( !v10 )
          goto LABEL_13;
      }
    }
LABEL_21:
    UnlinkWindow(i, *((_QWORD *)i + 13));
    if ( a2 != 1 )
    {
      SetOrClrWF(0LL, i, 772LL, 1LL);
      SetOrClrWF(1LL, i, 2056LL, 1LL);
    }
    SetWindowTreeBand(i, a2);
    result = (struct tagWND *)LinkWindow(i);
LABEL_17:
    i = v9;
  }
  while ( v9 );
  return result;
}
