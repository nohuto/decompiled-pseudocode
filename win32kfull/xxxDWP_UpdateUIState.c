__int64 __fastcall xxxDWP_UpdateUIState(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 v6; // rbp
  int v7; // eax
  __int64 v8; // rax
  ShellWindowManagement *v9; // r10
  __int64 v11; // r14
  struct tagBWL *v12; // rax
  __int64 v13; // rdx
  struct tagBWL *v14; // rbp
  _QWORD *i; // rbx
  __int64 v16; // rax
  struct tagWND *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // ecx
  __int64 ThreadWin32Thread; // rax
  int v23; // edi
  __int128 v24; // [rsp+30h] [rbp-38h] BYREF
  __int64 v25; // [rsp+40h] [rbp-28h]

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
    if ( (*(_DWORD *)(gpsi + 7004LL) & 0x80000020) != 0x80000000 )
      return 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( *(_DWORD *)(ThreadWin32Thread + 632) <= 0x400u && (*(_DWORD *)(ThreadWin32Thread + 648) & 2) != 0 )
      return 0LL;
    LOBYTE(v4) = 3;
    v6 = (unsigned __int16)(((*gpsi & 0x40) != 0) + 1);
    v3 = v6 | 0x30000;
LABEL_9:
    if ( (unsigned __int16)v6 == 1 )
    {
      if ( (v4 & 2) != 0 )
        SetOrClrWF(1, a1, 0xB40u, 1);
      if ( (v4 & 1) != 0 )
        SetOrClrWF(1, a1, 0xB80u, 1);
      if ( (v4 & 4) == 0 )
        goto LABEL_15;
      v21 = 1;
    }
    else
    {
      if ( (unsigned __int16)v6 != 2 )
      {
        if ( (unsigned __int16)v6 == 3 )
        {
          v23 = *gpsi & 0x40;
          SetOrClrWF(v23 == 0, a1, 0xB80u, 1);
          SetOrClrWF(v23 == 0, a1, 0xB40u, 1);
          v3 = (v23 != 0) + 196609LL;
        }
        goto LABEL_15;
      }
      if ( (v4 & 2) != 0 )
        SetOrClrWF(0, a1, 0xB40u, 1);
      if ( (v4 & 1) != 0 )
        SetOrClrWF(0, a1, 0xB80u, 1);
      if ( (v4 & 4) == 0 )
      {
LABEL_15:
        v9 = (ShellWindowManagement *)a1[14];
        if ( v9 )
        {
          v25 = 0LL;
          v24 = 0LL;
          if ( gptiCurrent == gTermIO[2] || (v11 = 0LL, gptiCurrent == qword_1C03617C0) )
            v11 = 1LL;
          v12 = BuildHwndList(v9, 2, 0LL, 1);
          v14 = v12;
          if ( v12 )
          {
            for ( i = (_QWORD *)((char *)v12 + 32); *i != 1LL; ++i )
            {
              LOBYTE(v13) = 1;
              v16 = HMValidateHandleNoSecure(*i, v13);
              v17 = (struct tagWND *)v16;
              if ( v16 )
              {
                ThreadLockAlways(v16, &v24);
                if ( v11 )
                  xxxSendNotifyMessage(v17, 296LL, v3, 0LL, 1);
                else
                  xxxSendMessage(v17, 0x128u);
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
    goto LABEL_15;
  }
  if ( (v7 & 0x80u) != 0
    || (*(_DWORD *)(gpsi + 7004LL) & 0x80000020) != 0x80000000
    || (v8 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread()), *(_DWORD *)(v8 + 632) <= 0x400u)
    && (*(_DWORD *)(v8 + 648) & 2) != 0 )
  {
    LOWORD(v4) = v4 & 0xFFFC;
  }
  if ( (_WORD)v4 )
    goto LABEL_9;
  return 0LL;
}
