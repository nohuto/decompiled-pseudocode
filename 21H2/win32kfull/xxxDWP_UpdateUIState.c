/*
 * XREFs of xxxDWP_UpdateUIState @ 0x1C00FB224
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00A3BCC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     xxxSendNotifyMessage @ 0x1C00ACBA0 (xxxSendNotifyMessage.c)
 */

__int64 __fastcall xxxDWP_UpdateUIState(struct tagWND *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 v6; // rbp
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  ShellWindowManagement *v10; // r10
  __int64 v12; // r14
  struct tagBWL *v13; // rax
  struct tagBWL *v14; // rbp
  _QWORD *i; // rbx
  struct tagWND *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // ecx
  int v22; // eax
  __int64 ThreadWin32Thread; // rax
  int v24; // edi
  __int128 v25; // [rsp+30h] [rbp-38h] BYREF
  __int64 v26; // [rsp+40h] [rbp-28h]

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
    v22 = *(_DWORD *)(gpsi + 7004LL);
    if ( (v22 & 0x20) != 0 )
      return 0LL;
    if ( v22 >= 0 )
      return 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( *(_DWORD *)(ThreadWin32Thread + 632) <= 0x400u && (*(_DWORD *)(ThreadWin32Thread + 648) & 2) != 0 )
      return 0LL;
    LOBYTE(v4) = 3;
    v6 = (unsigned __int16)(((*gpsi & 0x40) != 0) + 1);
    v3 = v6 | 0x30000;
LABEL_11:
    if ( (unsigned __int16)v6 == 1 )
    {
      if ( (v4 & 2) != 0 )
        SetOrClrWF(1, a1, 0xB40u, 1);
      if ( (v4 & 1) != 0 )
        SetOrClrWF(1, a1, 0xB80u, 1);
      if ( (v4 & 4) == 0 )
        goto LABEL_17;
      v21 = 1;
    }
    else
    {
      if ( (unsigned __int16)v6 != 2 )
      {
        if ( (unsigned __int16)v6 == 3 )
        {
          v24 = *gpsi & 0x40;
          SetOrClrWF(v24 == 0, a1, 0xB80u, 1);
          SetOrClrWF(v24 == 0, a1, 0xB40u, 1);
          v3 = (v24 != 0) + 196609LL;
        }
        goto LABEL_17;
      }
      if ( (v4 & 2) != 0 )
        SetOrClrWF(0, a1, 0xB40u, 1);
      if ( (v4 & 1) != 0 )
        SetOrClrWF(0, a1, 0xB80u, 1);
      if ( (v4 & 4) == 0 )
      {
LABEL_17:
        v10 = (ShellWindowManagement *)*((_QWORD *)a1 + 14);
        if ( v10 )
        {
          v26 = 0LL;
          v25 = 0LL;
          if ( gptiCurrent == gTermIO[2] || (v12 = 0LL, gptiCurrent == qword_1C0336E50) )
            v12 = 1LL;
          v13 = BuildHwndList(v10, (const struct tagWND *)2, 0LL, 1);
          v14 = v13;
          if ( v13 )
          {
            for ( i = (_QWORD *)((char *)v13 + 32); *i != 1LL; ++i )
            {
              v16 = (struct tagWND *)HMValidateHandleNoSecure(*i, 1);
              if ( v16 )
              {
                v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                *(_QWORD *)&v25 = *(_QWORD *)(v17 + 416);
                *(_QWORD *)(v17 + 416) = &v25;
                *((_QWORD *)&v25 + 1) = v16;
                HMLockObject(v16);
                if ( v12 )
                  xxxSendNotifyMessage(v16, 0x128u, v3, 0LL, 1);
                else
                  xxxSendMessage((ULONG_PTR)v16);
                ThreadUnlock1(v19, v18, v20);
              }
            }
            FreeHwndList(v14);
          }
        }
        return 0LL;
      }
      v21 = 0;
    }
    SetOrClrWF(v21, a1, 0xB04u, 1);
    goto LABEL_17;
  }
  if ( (v7 & 0x80u) != 0
    || (v8 = *(_DWORD *)(gpsi + 7004LL), (v8 & 0x20) != 0)
    || v8 >= 0
    || (v9 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread()), *(_DWORD *)(v9 + 632) <= 0x400u)
    && (*(_DWORD *)(v9 + 648) & 2) != 0 )
  {
    LOWORD(v4) = v4 & 0xFFFC;
  }
  if ( (_WORD)v4 )
    goto LABEL_11;
  return 0LL;
}
