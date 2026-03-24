/*
 * XREFs of ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C003C920
 * Callers:
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0031A40 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0039F08 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01E00E0 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C003CADC (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     BuildHwndList @ 0x1C006CB60 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006DAC0 (FreeHwndList.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00F59B8 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 */

void __fastcall xxxSendActivateAppMessage(const struct tagAAS *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  unsigned __int64 *i; // r14
  unsigned __int64 v5; // rdi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 *v13; // r15
  __int64 v14; // rbx
  int v15; // r8d
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  _QWORD v21[4]; // [rsp+30h] [rbp-48h] BYREF
  char v22; // [rsp+80h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v22);
  if ( (*((_DWORD *)a1 + 3) & 2) == 0 )
    UserAtomicCheck::Detach((UserAtomicCheck *)&v22);
  v2 = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 464LL) + 24LL) + 112LL));
  v3 = v2;
  if ( v2 )
  {
    for ( i = (unsigned __int64 *)(v2 + 32); ; ++i )
    {
      v5 = *i;
      if ( *i == 1 )
        break;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (CurrentProcess = PsGetCurrentProcess(v8, v7, v9),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        PsGetThreadWin32Thread(CurrentThread);
      }
      if ( (unsigned __int64)(unsigned __int16)v5 < *(_QWORD *)(gpsi + 8LL) )
      {
        v10 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v5 * LODWORD(gSharedInfo[2]);
        v11 = v5 >> 16;
        v13 = (__int64 *)HMPkheFromPhe(v10);
        if ( ((_WORD)v11 == *(_WORD *)(v10 + 26)
           || (_WORD)v11 == 0xFFFF
           || !(_WORD)v11 && PsGetCurrentProcessWow64Process(v12))
          && (*(_BYTE *)(v10 + 25) & 1) == 0
          && *(_BYTE *)(v10 + 24) == 1 )
        {
          v14 = *v13;
          if ( *v13 )
          {
            if ( *(_QWORD *)(v14 + 16) == *(_QWORD *)a1 )
            {
              v15 = *((_DWORD *)a1 + 3);
              if ( (v15 & 2) != 0 )
              {
                QueueNotifyTransformableMessage((struct tagWND *)v14, 0x1Cu, v15 & 1, *((unsigned int *)a1 + 2), 0, 0);
              }
              else
              {
                v21[2] = 0LL;
                ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
                v21[0] = *(_QWORD *)(ThreadWin32Thread + 416);
                *(_QWORD *)(ThreadWin32Thread + 416) = v21;
                v21[1] = v14;
                HMLockObject(v14);
                xxxSendMessage(v14, 28LL, *((_DWORD *)a1 + 3) & 1, *((unsigned int *)a1 + 2));
                ThreadUnlock1(v17);
              }
            }
          }
        }
      }
    }
    FreeHwndList(v3);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v22);
}
