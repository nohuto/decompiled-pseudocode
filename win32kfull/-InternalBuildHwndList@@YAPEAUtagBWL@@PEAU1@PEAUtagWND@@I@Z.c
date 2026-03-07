struct tagBWL *__fastcall InternalBuildHwndList(struct tagBWL *a1, struct tagWND *a2, char a3)
{
  struct tagWND *v4; // rbx
  struct tagBWL *v5; // rdi
  int v6; // r14d
  __int64 v7; // rbp
  __int64 v8; // rbp
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rcx

  v4 = a2;
  v5 = a1;
  if ( !a2 )
    return a1;
  v6 = a3 & 0x10;
  do
  {
    v7 = *((_QWORD *)v5 + 3);
    if ( !v6 || IsNonImmersiveBand((__int64)v4) )
    {
      if ( (a3 & 0x20) == 0
        || (v13 = *((_QWORD *)v4 + 5), (*(_BYTE *)(v13 + 31) & 0x11) != 0x10)
        || (*(_BYTE *)(v13 + 20) & 0x40) != 0
        || !ShellWindowManagement::EligibleWindow(v4, a2) )
      {
        if ( !v7 || v7 == *((_QWORD *)v4 + 2) )
        {
          **((_QWORD **)v5 + 1) = *(_QWORD *)v4;
          v8 = *((_QWORD *)v5 + 1) + 8LL;
          *((_QWORD *)v5 + 1) = v8;
          if ( v8 == *((_QWORD *)v5 + 2) )
          {
            v10 = v8 - (_QWORD)v5;
            v11 = UserReAllocPool(v5, (unsigned int)v10 + 8LL, (unsigned int)v10 + 72LL, 1819767637LL);
            if ( !v11 )
              return v5;
            v12 = v11 + v10;
            v5 = (struct tagBWL *)v11;
            *(_QWORD *)(v11 + 8) = v12;
            *(_QWORD *)(v11 + 16) = v12 + 64;
          }
        }
      }
    }
    if ( (a3 & 1) != 0 )
    {
      a2 = (struct tagWND *)*((_QWORD *)v4 + 14);
      if ( a2 )
      {
        v5 = InternalBuildHwndList(v5, a2, 3u);
        if ( *((_QWORD *)v5 + 1) >= *((_QWORD *)v5 + 2) )
          break;
      }
    }
    if ( (a3 & 2) == 0 )
      break;
    v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
  }
  while ( v4 );
  return v5;
}
