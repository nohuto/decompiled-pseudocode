/*
 * XREFs of ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C00A25A8
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C007DC84 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00A22D8 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01DB90C (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00C9AD0 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 */

void __fastcall xxxSendActivateAppMessage(const struct tagAAS *a1)
{
  struct tagBWL *v2; // rax
  struct tagBWL *v3; // r14
  _QWORD *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rcx
  ULONG_PTR *v8; // r15
  ULONG_PTR v9; // rbx
  int v10; // r8d
  struct tagWND *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h]
  char v17; // [rsp+80h] [rbp+8h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v17);
  if ( (*((_DWORD *)a1 + 3) & 2) == 0 )
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v17);
  v2 = BuildHwndList(
         *(ShellWindowManagement **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 464LL) + 24LL) + 112LL),
         (const struct tagWND *)2,
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
          v6 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v5 * LODWORD(gSharedInfo[2]);
          v8 = (ULONG_PTR *)HMPkheFromPhe(v6);
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
              if ( *(_QWORD *)(v9 + 16) == *(_QWORD *)a1 )
              {
                v10 = *((_DWORD *)a1 + 3);
                v11 = (struct tagWND *)*v8;
                if ( (v10 & 2) != 0 )
                {
                  QueueNotifyTransformableMessage(v11, 0x1Cu, v10 & 1, *((unsigned int *)a1 + 2), 0, 0);
                }
                else
                {
                  v15 = 0LL;
                  v16 = 0LL;
                  ThreadLock((__int64)v11, (__int64 *)&v15);
                  xxxSendMessage(v9);
                  ThreadUnlock1(v13, v12, v14);
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
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v17);
}
