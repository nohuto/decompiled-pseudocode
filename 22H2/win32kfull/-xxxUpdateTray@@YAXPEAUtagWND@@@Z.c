/*
 * XREFs of ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C0066B58
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0061584 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0065F18 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00AE86C (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 * Callees:
 *     xxxSetTrayWindow @ 0x1C0096ECC (xxxSetTrayWindow.c)
 *     PostIAMShellHookMessage @ 0x1C00D34E8 (PostIAMShellHookMessage.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C00EB4B8 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 *     ?Is31TrayWindow@@YAHPEAUtagWND@@@Z @ 0x1C021FE60 (-Is31TrayWindow@@YAHPEAUtagWND@@@Z.c)
 */

void __fastcall xxxUpdateTray(struct tagWND *a1)
{
  unsigned __int64 v2; // rbx
  struct tagWND *v3; // rdx
  __int64 v4; // r8
  unsigned __int8 v5; // r9
  int i; // edx
  _BYTE *v7; // rcx
  struct tagWND *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  bool v14; // cf
  bool v15; // zf
  struct tagWND *v16; // rax
  char v17; // al
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-18h]

  v2 = (unsigned __int64)a1;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
  {
    v3 = (struct tagWND *)*((_QWORD *)a1 + 15);
    while ( v3 )
    {
      v15 = (*(_BYTE *)(*((_QWORD *)v3 + 5) + 31LL) & 0x10) == 0;
      v16 = v3;
      v3 = (struct tagWND *)*((_QWORD *)v3 + 15);
      if ( v15 )
        v16 = (struct tagWND *)v2;
      v2 = (unsigned __int64)v16;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v2 + 16) + 432LL) == gpqForeground
      && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0
      && (((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0
       || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 192LL))
      && (unsigned int)IsTopLevelWindow(v2)
      && ((v5 & *(_BYTE *)(*(_QWORD *)(v2 + 40) + 31LL)) != 0 || (*(_BYTE *)(v4 + 26) & 4) != 0) )
    {
      v18 = 0LL;
      v19 = 0LL;
      for ( i = 1; ; i = 0 )
      {
        v7 = *(_BYTE **)(v2 + 40);
        if ( (v7[21] & 2) != 0 )
        {
          if ( (*(_BYTE *)(v4 + 21) & 2) != 0 && (unsigned __int8)IsTrayWindow(a1, 1LL) )
          {
            v8 = a1;
            goto LABEL_15;
          }
          v14 = (unsigned __int8)IsTrayWindow(v2, 1LL) != 0;
          goto LABEL_23;
        }
        if ( (char)v7[24] < 0 )
          break;
        if ( (v7[20] & 0x40) != 0 || (v17 = v7[30], (v17 & 0xA) != 0) && ((v17 & 0xC0) != 0 || (v7[31] & 0x20) != 0) )
        {
          v14 = (unsigned int)Is31TrayWindow((struct tagWND *)v2) != 0;
LABEL_23:
          v8 = (struct tagWND *)(v2 & -(__int64)v14);
          goto LABEL_15;
        }
        if ( !i )
          return;
        v2 = *(_QWORD *)(v2 + 200);
        if ( !v2 )
          return;
      }
      v8 = 0LL;
LABEL_15:
      ThreadLock(v8, &v18);
      if ( v8 )
        v9 = *((_QWORD *)v8 + 3);
      else
        v9 = *(_QWORD *)(v2 + 24);
      xxxSetTrayWindow(v9, v8);
      ThreadUnlock1(v11, v10, v12);
    }
    if ( !*((_QWORD *)a1 + 15) || (v13 = 23LL, (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 4) != 0) )
      v13 = 19LL;
    PostIAMShellHookMessage(v13, *(_QWORD *)a1);
  }
}
