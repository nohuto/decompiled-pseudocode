/*
 * XREFs of ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00490FC
 * Callers:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00490FC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00C9704 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00490FC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     GetStyleWindow @ 0x1C004CDA0 (GetStyleWindow.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     DecPaintCount @ 0x1C005DF94 (DecPaintCount.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00720D0 (xxxSimpleDoSyncPaint.c)
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C00C9954 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 *     xxxCompositedPaint @ 0x1C0239C94 (xxxCompositedPaint.c)
 */

void __fastcall xxxUpdateWindow2(struct tagWND **a1, int a2)
{
  __int64 v4; // rdx
  struct tagWND *StyleWindow; // rdi
  __int64 v6; // r8
  struct tagWND *v7; // rax
  struct tagWND *v8; // rcx
  struct tagWND *v9; // rax
  struct tagWND *v10; // rdi
  __int64 v11; // rcx
  struct tagWND *v12; // rbx
  __int64 v13; // rcx
  struct tagWND *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v24; // [rsp+28h] [rbp-20h]
  __int64 v25; // [rsp+30h] [rbp-18h]

  v25 = 0LL;
  StyleWindow = (struct tagWND *)GetStyleWindow(a1, 2818LL);
  if ( StyleWindow )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v23 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v23;
    v24 = StyleWindow;
    HMLockObject(StyleWindow);
    xxxCompositedPaint(StyleWindow);
LABEL_11:
    ThreadUnlock1(v11, v4, v6);
    return;
  }
  v7 = a1[5];
  if ( *((_QWORD *)v7 + 17) )
  {
    if ( !(unsigned int)ValidateParents((struct tagWND *)a1, a2 & 4) )
      return;
  }
  else if ( (*((_BYTE *)v7 + 17) & 0x10) == 0 )
  {
    goto LABEL_4;
  }
  if ( (*((_BYTE *)a1[5] + 17) & 0x10) != 0 )
  {
    SetOrClrWF(0LL, a1, 272LL, 1LL);
    if ( !*((_QWORD *)a1[5] + 17) )
      DecPaintCount(a1);
  }
  SetOrClrWF(1LL, a1, 576LL, 1LL);
  SetOrClrWF(0LL, a1, 288LL, 1LL);
  v14 = a1[5];
  if ( (*((_BYTE *)v14 + 21) & 2) == 0 && (*((_BYTE *)v14 + 31) & 0x20) != 0 && *((_QWORD *)a1[17] + 10) )
  {
    v15 = 1LL;
    v16 = 38LL;
  }
  else
  {
    if ( (*(_DWORD *)(gptiCurrent + 1256LL) & 0x40000) != 0 )
    {
      v19 = a1[2];
      if ( (struct tagWND *)gptiCurrent != v19 )
      {
        v20 = *((_QWORD *)v19 + 102);
        v21 = v20 + 16;
        v22 = -v20;
        v6 = v21 & -(__int64)(v22 != 0);
        if ( !v6
          || *(_DWORD *)((v21 & -(__int64)(v22 != 0)) + 8) != 15
          || *(_QWORD *)((v21 & -(__int64)(v22 != 0)) + 0x10)
          || *(_QWORD *)((v21 & -(__int64)(v22 != 0)) + 0x18) )
        {
          PostMessage(a1, 15LL, 0LL);
        }
        goto LABEL_23;
      }
    }
    v15 = 0LL;
    v16 = 15LL;
  }
  xxxSendMessage(a1, v16, v15, 0LL);
LABEL_23:
  if ( (*((_BYTE *)a1[5] + 18) & 0x40) != 0 )
    xxxSimpleDoSyncPaint((struct tagWND *)a1);
LABEL_4:
  if ( (a2 & 1) != 0 )
  {
    v8 = a1[3];
    v9 = 0LL;
    if ( v8 )
    {
      v4 = *((_QWORD *)v8 + 1);
      if ( v4 )
        v9 = *(struct tagWND **)(v4 + 24);
    }
    if ( a1 != (struct tagWND **)v9 )
    {
      v10 = 0LL;
      v11 = gptiCurrent;
      v23 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v23;
      v12 = a1[14];
      v24 = 0LL;
      while ( v12 )
      {
        v13 = *((_QWORD *)v12 + 5);
        if ( (*(_BYTE *)(v13 + 24) & 0x20) == 0 || !*(_QWORD *)(v13 + 136) && (*(_BYTE *)(v13 + 17) & 0x10) == 0 )
          goto LABEL_14;
        v4 = *((_QWORD *)v12 + 11);
        v11 = v4;
        if ( !v4 )
          goto LABEL_14;
        while ( 1 )
        {
          v17 = *(_QWORD *)(v11 + 40);
          if ( *(_QWORD *)(v17 + 136) || (*(_BYTE *)(v17 + 17) & 0x10) != 0 )
            break;
          v11 = *(_QWORD *)(v11 + 88);
          if ( !v11 )
            goto LABEL_14;
        }
        if ( v11 )
        {
          v12 = (struct tagWND *)*((_QWORD *)v12 + 11);
        }
        else
        {
LABEL_14:
          v24 = v12;
          HMLockObject(v12);
          if ( v10 )
            HMUnlockObject(v10);
          xxxUpdateWindow2(v12, a2 | 4);
          v12 = (struct tagWND *)*((_QWORD *)v12 + 11);
          v10 = v24;
        }
      }
      goto LABEL_11;
    }
  }
}
