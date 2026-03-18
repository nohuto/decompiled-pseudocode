/*
 * XREFs of ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C0066CF0
 * Callers:
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C004AD48 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0065F18 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01B5194 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     BuildHwndList @ 0x1C00D2540 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00D2E50 (FreeHwndList.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     QueueNotifyMessage @ 0x1C01FBCA0 (QueueNotifyMessage.c)
 */

void __fastcall xxxSendActivateAppMessage(const struct tagAAS *a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  _QWORD *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 *v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+40h] [rbp-38h]
  char v15; // [rsp+80h] [rbp+8h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v15);
  if ( (*((_DWORD *)a1 + 3) & 2) == 0 )
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v15);
  v2 = BuildHwndList(*(ShellWindowManagement **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 464LL) + 24LL) + 112LL));
  v3 = v2;
  if ( v2 )
  {
    v4 = (_QWORD *)(v2 + 32);
    v5 = *(_QWORD *)(v2 + 32);
    if ( v5 != 1 )
    {
      do
      {
        PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( (unsigned __int64)(unsigned __int16)v5 < *(_QWORD *)(gpsi + 8LL) )
        {
          v6 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v5;
          v7 = (__int64 *)HMPkheFromPhe(v6);
          LOWORD(v5) = WORD1(v5) & 0x7FFF;
          if ( ((WORD1(v5) & 0x7FFF) == *(_WORD *)(v6 + 26)
             || (_WORD)v5 == 0x7FFF
             || !(_WORD)v5 && PsGetCurrentProcessWow64Process())
            && (*(_BYTE *)(v6 + 25) & 1) == 0
            && *(_BYTE *)(v6 + 24) == 1 )
          {
            v8 = *v7;
            if ( *v7 )
            {
              if ( *(_QWORD *)(v8 + 16) == *(_QWORD *)a1 )
              {
                v9 = *v7;
                if ( (*((_DWORD *)a1 + 3) & 2) != 0 )
                {
                  QueueNotifyMessage(v9, 28, *((_DWORD *)a1 + 3) & 1, *((_DWORD *)a1 + 2), 0);
                }
                else
                {
                  v13 = 0LL;
                  v14 = 0LL;
                  ThreadLock(v9, &v13);
                  xxxSendMessage(v8, 28LL, *((_DWORD *)a1 + 3) & 1, *((unsigned int *)a1 + 2));
                  ThreadUnlock1(v11, v10, v12);
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
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v15);
}
