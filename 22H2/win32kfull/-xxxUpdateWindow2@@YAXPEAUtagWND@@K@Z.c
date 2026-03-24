/*
 * XREFs of ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00F5250
 * Callers:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00F5200 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00F5250 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     _PostMessage @ 0x1C002DBA0 (_PostMessage.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 *     xxxSimpleDoSyncPaint @ 0x1C006D7A0 (xxxSimpleDoSyncPaint.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00F5250 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C00F5494 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 *     DecPaintCount @ 0x1C00F5634 (DecPaintCount.c)
 *     xxxCompositedPaint @ 0x1C023DFF0 (xxxCompositedPaint.c)
 */

void __fastcall xxxUpdateWindow2(struct tagWND *a1, int a2)
{
  struct tagWND *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  struct tagWND *v7; // rax
  __int64 v8; // rdx
  struct tagWND *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  unsigned int v15; // edx
  __int64 v16; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v23; // [rsp+28h] [rbp-20h]
  __int64 v24; // [rsp+30h] [rbp-18h]

  v24 = 0LL;
  v4 = a1;
  if ( a1 )
  {
    do
    {
      if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 27LL) & 2) != 0 )
        break;
      v4 = (struct tagWND *)*((_QWORD *)v4 + 13);
    }
    while ( v4 );
    if ( v4 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v22 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v22;
      v23 = v4;
      HMLockObject(v4);
      xxxCompositedPaint(v4);
LABEL_14:
      ThreadUnlock1(v10);
      return;
    }
  }
  v5 = *((_QWORD *)a1 + 5);
  if ( *(_QWORD *)(v5 + 136) )
  {
    if ( !(unsigned int)ValidateParents(a1, a2 & 4) )
      return;
  }
  else if ( (*(_BYTE *)(v5 + 17) & 0x10) == 0 )
  {
    goto LABEL_7;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 0x10) != 0 )
  {
    SetOrClrWF(0, (__int64)a1, 0x110u, 1);
    if ( !*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) )
      DecPaintCount(a1);
  }
  SetOrClrWF(1, (__int64)a1, 0x240u, 1);
  SetOrClrWF(0, (__int64)a1, 0x120u, 1);
  v13 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v13 + 21) & 2) == 0 && (*(_BYTE *)(v13 + 31) & 0x20) != 0 && *(_QWORD *)(*((_QWORD *)a1 + 17) + 80LL) )
  {
    v14 = 1LL;
    v15 = 38;
  }
  else
  {
    if ( (*(_DWORD *)(gptiCurrent + 1232LL) & 0x40000) != 0 )
    {
      v18 = *((_QWORD *)a1 + 2);
      if ( gptiCurrent != v18 )
      {
        v19 = *(_QWORD *)(v18 + 816);
        v20 = v19 + 16;
        v21 = -v19;
        if ( (v20 & -(__int64)(v21 != 0)) == 0
          || *(_DWORD *)((v20 & -(__int64)(v21 != 0)) + 8) != 15
          || *(_QWORD *)((v20 & -(__int64)(v21 != 0)) + 0x10)
          || *(_QWORD *)((v20 & -(__int64)(v21 != 0)) + 0x18) )
        {
          PostMessage((int)a1, 15, 0, 0);
        }
        goto LABEL_26;
      }
    }
    v14 = 0LL;
    v15 = 15;
  }
  xxxSendMessage((unsigned __int64)a1, v15, v14, 0LL);
LABEL_26:
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 0x40) != 0 )
    xxxSimpleDoSyncPaint(a1);
LABEL_7:
  if ( (a2 & 1) != 0 )
  {
    v6 = *((_QWORD *)a1 + 3);
    v7 = 0LL;
    if ( v6 )
    {
      v8 = *(_QWORD *)(v6 + 8);
      if ( v8 )
        v7 = *(struct tagWND **)(v8 + 24);
    }
    if ( a1 != v7 )
    {
      v9 = 0LL;
      v10 = gptiCurrent;
      v22 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v22;
      v11 = *((_QWORD *)a1 + 14);
      v23 = 0LL;
      while ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 40);
        if ( (*(_BYTE *)(v12 + 24) & 0x20) != 0
          && (*(_QWORD *)(v12 + 136) || (*(_BYTE *)(v12 + 17) & 0x10) != 0)
          && (v10 = *(_QWORD *)(v11 + 88)) != 0 )
        {
          while ( 1 )
          {
            v16 = *(_QWORD *)(v10 + 40);
            if ( *(_QWORD *)(v16 + 136) || (*(_BYTE *)(v16 + 17) & 0x10) != 0 )
              break;
            v10 = *(_QWORD *)(v10 + 88);
            if ( !v10 )
              goto LABEL_17;
          }
          v11 = *(_QWORD *)(v11 + 88);
        }
        else
        {
LABEL_17:
          v23 = (struct tagWND *)v11;
          HMLockObject(v11);
          if ( v9 )
            HMUnlockObject(v9);
          xxxUpdateWindow2((struct tagWND *)v11, a2 | 4);
          v11 = *(_QWORD *)(v11 + 88);
          v9 = v23;
        }
      }
      goto LABEL_14;
    }
  }
}
