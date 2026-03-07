void __fastcall xxxUpdateWindow2(struct tagWND **a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  struct tagWND *v5; // rdi
  struct tagWND *v6; // rax
  struct tagWND *v7; // rcx
  struct tagWND *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  struct tagWND *v11; // rbx
  __int64 v12; // rcx
  struct tagWND *v13; // rcx
  unsigned int v14; // edx
  struct tagWND *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int128 v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+30h] [rbp-18h]

  v22 = 0LL;
  v3 = a2;
  v5 = (struct tagWND *)a1;
  v21 = 0LL;
  if ( a1 )
  {
    while ( (*(_BYTE *)(*((_QWORD *)v5 + 5) + 27LL) & 2) == 0 )
    {
      v5 = (struct tagWND *)*((_QWORD *)v5 + 13);
      if ( !v5 )
        goto LABEL_4;
    }
    ThreadLockAlways(v5, &v21);
    xxxCompositedPaint(v5);
    goto LABEL_12;
  }
LABEL_4:
  v6 = a1[5];
  if ( *((_QWORD *)v6 + 17) )
  {
    if ( !(unsigned int)ValidateParents((struct tagWND *)a1, a2 & 4) )
      return;
  }
  else if ( (*((_BYTE *)v6 + 17) & 0x10) == 0 )
  {
    goto LABEL_6;
  }
  if ( (*((_BYTE *)a1[5] + 17) & 0x10) != 0 )
  {
    SetOrClrWF(0, (__int64 *)a1, 0x110u, 1);
    if ( !*((_QWORD *)a1[5] + 17) )
      DecPaintCount((__int64)a1);
  }
  SetOrClrWF(1, (__int64 *)a1, 0x240u, 1);
  SetOrClrWF(0, (__int64 *)a1, 0x120u, 1);
  v13 = a1[5];
  if ( (*((_BYTE *)v13 + 21) & 2) == 0 && (*((_BYTE *)v13 + 31) & 0x20) != 0 && *((_QWORD *)a1[17] + 10) )
  {
    v14 = 38;
  }
  else
  {
    if ( (*(_DWORD *)(gptiCurrent + 1272LL) & 0x40000) != 0 )
    {
      v15 = a1[2];
      if ( (struct tagWND *)gptiCurrent != v15 )
      {
        v16 = *((_QWORD *)v15 + 102);
        v17 = v16 + 16;
        v18 = -v16;
        a3 = v17 & -(__int64)(v18 != 0);
        if ( !a3
          || *(_DWORD *)((v17 & -(__int64)(v18 != 0)) + 8) != 15
          || *(_QWORD *)((v17 & -(__int64)(v18 != 0)) + 0x10)
          || *(_QWORD *)((v17 & -(__int64)(v18 != 0)) + 0x18) )
        {
          PostMessage((unsigned __int64)a1, 0xFu, 0LL, 0LL);
        }
        goto LABEL_25;
      }
    }
    v14 = 15;
  }
  xxxSendMessage((struct tagWND *)a1, v14);
LABEL_25:
  if ( (*((_BYTE *)a1[5] + 18) & 0x40) != 0 )
    xxxSimpleDoSyncPaint((struct tagWND *)a1);
LABEL_6:
  if ( (v3 & 1) != 0 )
  {
    v7 = a1[3];
    v8 = 0LL;
    if ( v7 )
    {
      a2 = *((_QWORD *)v7 + 1);
      if ( a2 )
        v8 = *(struct tagWND **)(a2 + 24);
    }
    if ( a1 != (struct tagWND **)v8 )
    {
      v9 = 0LL;
      v10 = gptiCurrent;
      *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v21;
      v11 = a1[14];
      *((_QWORD *)&v21 + 1) = 0LL;
      if ( v11 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v12 = *((_QWORD *)v11 + 5);
            if ( (*(_BYTE *)(v12 + 24) & 0x20) == 0 || !*(_QWORD *)(v12 + 136) && (*(_BYTE *)(v12 + 17) & 0x10) == 0 )
              break;
            v19 = *((_QWORD *)v11 + 11);
            if ( !v19 )
              break;
            do
            {
              v20 = *(_QWORD *)(v19 + 40);
              if ( *(_QWORD *)(v20 + 136) )
                break;
              if ( (*(_BYTE *)(v20 + 17) & 0x10) != 0 )
                break;
              v19 = *(_QWORD *)(v19 + 88);
            }
            while ( v19 );
            if ( !v19 )
              break;
            v11 = (struct tagWND *)*((_QWORD *)v11 + 11);
          }
          *((_QWORD *)&v21 + 1) = v11;
          HMLockObject(v11);
          if ( v9 )
            HMUnlockObject(v9);
          xxxUpdateWindow2(v11, v3 | 4);
          v11 = (struct tagWND *)*((_QWORD *)v11 + 11);
          if ( !v11 )
            break;
          v9 = *((_QWORD *)&v21 + 1);
        }
      }
LABEL_12:
      ThreadUnlock1(v10, a2, a3);
    }
  }
}
