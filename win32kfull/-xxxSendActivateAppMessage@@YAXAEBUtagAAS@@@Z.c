/*
 * XREFs of ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C009DAB4
 * Callers:
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C009BD38 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C009E0E4 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01B633C (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     BuildHwndList @ 0x1C0041A10 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00680B0 (FreeHwndList.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     QueueNotifyMessage @ 0x1C01FE820 (QueueNotifyMessage.c)
 */

void __fastcall xxxSendActivateAppMessage(const struct tagAAS *a1)
{
  struct tagBWL *v2; // rax
  struct tagBWL *v3; // r14
  _QWORD *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rcx
  struct tagWND **v8; // r15
  struct tagWND *v9; // rbx
  struct tagWND *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v14; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+40h] [rbp-38h]
  char v16; // [rsp+80h] [rbp+8h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v16);
  if ( (*((_DWORD *)a1 + 3) & 2) == 0 )
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v16);
  v2 = BuildHwndList(
         *(ShellWindowManagement **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 464LL) + 24LL) + 112LL),
         2,
         0LL,
         1);
  v3 = v2;
  if ( v2 )
  {
    v4 = (_QWORD *)((char *)v2 + 32);
    v5 = *((_QWORD *)v2 + 4);
    if ( v5 != 1 )
    {
      do
      {
        PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( (unsigned __int64)(unsigned __int16)v5 < *(_QWORD *)(gpsi + 8LL) )
        {
          v6 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v5;
          v8 = (struct tagWND **)HMPkheFromPhe(v6);
          LOWORD(v5) = WORD1(v5) & 0x7FFF;
          if ( ((WORD1(v5) & 0x7FFF) == *(_WORD *)(v6 + 26)
             || (_WORD)v5 == 0x7FFF
             || !(_WORD)v5 && PsGetCurrentProcessWow64Process(v7))
            && (*(_BYTE *)(v6 + 25) & 1) == 0
            && *(_BYTE *)(v6 + 24) == 1 )
          {
            v9 = *v8;
            if ( *v8 )
            {
              if ( *((_QWORD *)v9 + 2) == *(_QWORD *)a1 )
              {
                v10 = *v8;
                if ( (*((_DWORD *)a1 + 3) & 2) != 0 )
                {
                  QueueNotifyMessage((_DWORD)v10, 28, *((_DWORD *)a1 + 3) & 1, *((_DWORD *)a1 + 2), 0);
                }
                else
                {
                  v14 = 0LL;
                  v15 = 0LL;
                  ThreadLock(v10, &v14);
                  xxxSendMessage(v9, 0x1Cu);
                  ThreadUnlock1(v12, v11, v13);
                }
              }
            }
          }
        }
        v5 = *++v4;
      }
      while ( *v4 != 1LL );
    }
    FreeHwndList(v3);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v16);
}
