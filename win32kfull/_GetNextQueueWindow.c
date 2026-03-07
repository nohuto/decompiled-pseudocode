__int64 __fastcall GetNextQueueWindow(__int64 a1, __int64 a2, int a3)
{
  int v3; // r14d
  int v4; // r15d
  __int64 LastTopMostWindow; // rax
  struct tagWND *v6; // r13
  const struct tagWND *TopLevelWindow; // rax
  struct tagWND *CompositeAppFrameWindowOrSelf; // rax
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // r12
  __int64 v12; // rdi
  __int64 i; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  __int64 j; // rcx
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx

  v3 = 0;
  v4 = a2;
  LastTopMostWindow = a1;
  if ( !a1 )
  {
    LastTopMostWindow = GetLastTopMostWindow(0LL, a2);
    if ( !LastTopMostWindow )
      return 0LL;
  }
  v6 = gspwndAltTab;
  TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(LastTopMostWindow);
  CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(TopLevelWindow);
  v9 = (__int64)CompositeAppFrameWindowOrSelf;
  if ( !CompositeAppFrameWindowOrSelf )
    return 0LL;
  v10 = *((_QWORD *)CompositeAppFrameWindowOrSelf + 13);
  if ( !v10 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
    v9 = *(_QWORD *)(v10 + 112);
  }
  v11 = v9;
  if ( !v9 )
    return 0LL;
  while ( 1 )
  {
    if ( (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFF) != 0x29D )
    {
      v12 = 0LL;
      if ( (v4 != 0) == -2 )
      {
        v14 = *(_QWORD *)(v9 + 104);
        if ( v14 )
        {
          v12 = *(_QWORD *)(v14 + 112);
          v15 = GetAppCompatFlags(0LL) & 8;
          if ( v12 )
          {
            if ( v15 )
            {
              do
              {
                if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 24LL) & 8) == 0 )
                  break;
                v12 = *(_QWORD *)(v12 + 88);
              }
              while ( v12 );
            }
          }
        }
      }
      else if ( (v4 != 0) == -1 )
      {
        for ( i = *(_QWORD *)(*(_QWORD *)(v9 + 104) + 112LL); i; i = *(_QWORD *)(i + 88) )
          v12 = i;
      }
      else if ( v4 )
      {
        if ( v4 != 0 )
        {
          v12 = *(_QWORD *)(v9 + 96);
        }
        else if ( (v4 != 0) == 2 )
        {
          v12 = *(_QWORD *)(v9 + 120);
        }
        else
        {
          if ( (v4 != 0) != 3 )
          {
            UserSetLastError(1443);
            goto LABEL_29;
          }
          v12 = *(_QWORD *)(v9 + 112);
        }
      }
      else
      {
        v12 = *(_QWORD *)(v9 + 88);
      }
      v9 = v12;
      if ( v12 )
        goto LABEL_36;
    }
LABEL_29:
    v9 = *(_QWORD *)(v10 + 112);
    if ( v4 )
    {
      v16 = *(_QWORD *)(v9 + 40);
      v9 = 0LL;
      if ( (*(_WORD *)(v16 + 42) & 0x2FFF) != 0x29D )
      {
        for ( j = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 112) + 104LL) + 112LL); j; j = *(_QWORD *)(j + 88) )
          v9 = j;
      }
    }
    if ( v3 )
      return 0LL;
    v3 = 1;
    if ( !v9 )
      return 0LL;
LABEL_36:
    if ( v9 == v11 )
      return 0LL;
    if ( (struct tagWND *)v9 != v6 )
    {
      v18 = *(_QWORD *)(v9 + 40);
      if ( *(char *)(v18 + 24) >= 0
        && (*(_BYTE *)(v18 + 27) & 8) == 0
        && !(unsigned int)IsWindowUnderActiveLockScreen(v9)
        && (*(_BYTE *)(v19 + 31) & 0x10) != 0
        && !(unsigned int)GetWindowCloakState((struct tagTHREADINFO **)v9) )
      {
        v20 = *(_QWORD *)(v9 + 200);
        if ( !v20
          || (*(_BYTE *)(*(_QWORD *)(v20 + 40) + 31LL) & 8) == 0
          && (!a3 || (v21 = *(_QWORD *)(v9 + 40), (*(_BYTE *)(v21 + 24) & 8) == 0) && (*(_BYTE *)(v21 + 20) & 0x20) == 0) )
        {
          v22 = *(_QWORD *)(v9 + 120);
          v23 = v9;
          while ( v22 )
          {
            v23 = v22;
            v22 = *(_QWORD *)(v22 + 120);
          }
          if ( v9 == *(_QWORD *)(v23 + 200) )
            return v9;
        }
      }
    }
    if ( !v9 )
      return 0LL;
  }
}
