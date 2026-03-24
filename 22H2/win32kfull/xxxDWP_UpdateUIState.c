/*
 * XREFs of xxxDWP_UpdateUIState @ 0x1C00E0B94
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00462FC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0049E28 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C00402D0 (xxxSendNotifyMessage.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 *     BuildHwndList @ 0x1C006CAC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006DA20 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     GetAppCompatFlags2 @ 0x1C00E0FC0 (GetAppCompatFlags2.c)
 */

__int64 __fastcall xxxDWP_UpdateUIState(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 v6; // rbp
  int v7; // eax
  int v8; // eax
  struct tagWND *v9; // r9
  __int64 v11; // r14
  struct tagBWL *v12; // rax
  struct tagBWL *v13; // rbp
  unsigned __int64 *i; // rbx
  __int64 v15; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // eax
  int v20; // edi
  __int128 v21; // [rsp+30h] [rbp-38h] BYREF
  __int64 v22; // [rsp+40h] [rbp-28h]

  v3 = a2;
  v4 = a2 >> 16;
  LOWORD(v6) = a2;
  if ( (a2 & 0xFFF80000) != 0 || (unsigned __int16)a2 > 3u || a3 )
    return 0LL;
  v7 = *gpsi;
  if ( (_WORD)a2 == 3 )
  {
    if ( (v7 & 0x80u) != 0 )
      return 0LL;
    v19 = *(_DWORD *)(gpsi + 7004LL);
    if ( (v19 & 0x20) != 0 || v19 >= 0 || (GetAppCompatFlags2(1024LL) & 2) != 0 )
      return 0LL;
    LOBYTE(v4) = 3;
    v6 = (unsigned __int16)(((*gpsi & 0x40) != 0) + 1);
    v3 = v6 | 0x30000;
LABEL_10:
    if ( (unsigned __int16)v6 == 1 )
    {
      if ( (v4 & 2) != 0 )
        SetOrClrWF(1, a1, 0xB40u, 1);
      if ( (v4 & 1) != 0 )
        SetOrClrWF(1, a1, 0xB80u, 1);
      if ( (v4 & 4) == 0 )
        goto LABEL_16;
      v18 = 1;
    }
    else
    {
      if ( (unsigned __int16)v6 != 2 )
      {
        if ( (unsigned __int16)v6 == 3 )
        {
          v20 = *gpsi & 0x40;
          SetOrClrWF(v20 == 0, a1, 0xB80u, 1);
          SetOrClrWF(v20 == 0, a1, 0xB40u, 1);
          v3 = (v20 != 0) + 196609LL;
        }
        goto LABEL_16;
      }
      if ( (v4 & 2) != 0 )
        SetOrClrWF(0, a1, 0xB40u, 1);
      if ( (v4 & 1) != 0 )
        SetOrClrWF(0, a1, 0xB80u, 1);
      if ( (v4 & 4) == 0 )
      {
LABEL_16:
        v9 = *(struct tagWND **)(a1 + 112);
        if ( v9 )
        {
          v22 = 0LL;
          v21 = 0LL;
          if ( gptiCurrent == gTermIO[2] || (v11 = 0LL, gptiCurrent == qword_1C0338FD0) )
            v11 = 1LL;
          v12 = BuildHwndList(v9, 2, 0LL);
          v13 = v12;
          if ( v12 )
          {
            for ( i = (unsigned __int64 *)((char *)v12 + 32); *i != 1; ++i )
            {
              v15 = HMValidateHandleNoSecure(*i, 1);
              if ( v15 )
              {
                ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                *(_QWORD *)&v21 = *(_QWORD *)(ThreadWin32Thread + 416);
                *(_QWORD *)(ThreadWin32Thread + 416) = &v21;
                *((_QWORD *)&v21 + 1) = v15;
                HMLockObject(v15);
                if ( v11 )
                  xxxSendNotifyMessage(v15, 0x128u, v3, 0LL, 1);
                else
                  xxxSendMessage(v15, 0x128u, v3, 0LL);
                ThreadUnlock1(v17);
              }
            }
            FreeHwndList(v13);
          }
        }
        return 0LL;
      }
      v18 = 0;
    }
    SetOrClrWF(v18, a1, 0xB04u, 1);
    goto LABEL_16;
  }
  if ( (v7 & 0x80u) != 0
    || (v8 = *(_DWORD *)(gpsi + 7004LL), (v8 & 0x20) != 0)
    || v8 >= 0
    || (GetAppCompatFlags2(1024LL) & 2) != 0 )
  {
    LOWORD(v4) = v4 & 0xFFFC;
  }
  if ( (_WORD)v4 )
    goto LABEL_10;
  return 0LL;
}
