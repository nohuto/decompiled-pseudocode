/*
 * XREFs of ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C003A884
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0039F08 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C003D28C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0120404 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C002DB50 (PostIAMShellHookMessageEx.c)
 *     xxxSetTrayWindow @ 0x1C003CF18 (xxxSetTrayWindow.c)
 *     IsTrayWindow @ 0x1C005EB30 (IsTrayWindow.c)
 *     _IsTopLevelWindow @ 0x1C006FC88 (_IsTopLevelWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     Is31TrayWindow @ 0x1C023DAB0 (Is31TrayWindow.c)
 */

void __fastcall xxxUpdateTray(struct tagWND *a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r9
  unsigned __int8 v5; // r10
  __int64 i; // rdx
  _BYTE *v7; // rcx
  struct tagWND *v8; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // edx
  int v13; // eax
  bool v14; // zf
  struct tagWND *v15; // rax
  char v16; // al
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-18h]

  v2 = (unsigned __int64)a1;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
  {
    v3 = *((_QWORD *)a1 + 15);
    while ( v3 )
    {
      v14 = (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 31LL) & 0x10) == 0;
      v15 = (struct tagWND *)v3;
      v3 = *(_QWORD *)(v3 + 120);
      if ( v14 )
        v15 = (struct tagWND *)v2;
      v2 = (unsigned __int64)v15;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v2 + 16) + 432LL) == gpqForeground
      && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0
      && (((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0
       || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 192LL))
      && (unsigned int)IsTopLevelWindow(v2)
      && ((v5 & *(_BYTE *)(*(_QWORD *)(v2 + 40) + 31LL)) != 0 || (*(_BYTE *)(v4 + 26) & 4) != 0) )
    {
      v17 = 0LL;
      v18 = 0LL;
      for ( i = 1LL; ; i = 0LL )
      {
        v7 = *(_BYTE **)(v2 + 40);
        if ( (v7[21] & 2) != 0 )
        {
          if ( (*(_BYTE *)(v4 + 21) & 2) != 0 && (unsigned int)IsTrayWindow(a1) )
          {
            v8 = a1;
            goto LABEL_15;
          }
          v13 = IsTrayWindow(v2);
          goto LABEL_23;
        }
        if ( (char)v7[24] < 0 )
          break;
        if ( (v7[20] & 0x40) != 0 || (v16 = v7[30], (v16 & 0xA) != 0) && ((v16 & 0xC0) != 0 || (v7[31] & 0x20) != 0) )
        {
          v13 = Is31TrayWindow(v2, i);
LABEL_23:
          v8 = (struct tagWND *)(v2 & -(__int64)(v13 != 0));
          goto LABEL_15;
        }
        if ( !(_DWORD)i )
          return;
        v2 = *(_QWORD *)(v2 + 200);
        if ( !v2 )
          return;
      }
      v8 = 0LL;
LABEL_15:
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v17 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v17;
      *((_QWORD *)&v17 + 1) = v8;
      if ( v8 )
      {
        HMLockObject(v8);
        v10 = *((_QWORD *)v8 + 3);
      }
      else
      {
        v10 = *(_QWORD *)(v2 + 24);
      }
      xxxSetTrayWindow(v10, v8);
      ThreadUnlock1(v11);
    }
    if ( !*((_QWORD *)a1 + 15) || (v12 = 23, (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 4) != 0) )
      v12 = 19;
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), v12, *(_QWORD *)a1);
  }
}
