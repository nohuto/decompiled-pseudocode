/*
 * XREFs of GreSfmGetNotificationTokens @ 0x1C00CBC90
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001B580 (UserIsCurrentProcessDwm.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0041790 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00981A4 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00981E4 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00CBDB0 (-GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 */

__int64 __fastcall GreSfmGetNotificationTokens(__int64 a1, unsigned int *a2, struct _D3DKMT_PRESENTHISTORYTOKEN *a3)
{
  unsigned int v3; // edi
  unsigned int v6; // ebp
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int NotificationTokens; // eax
  __int64 v13; // rcx
  unsigned int v14; // esi
  __int64 v15; // rax
  struct _ERESOURCE *v16; // rcx
  unsigned int v18; // [rsp+58h] [rbp+10h] BYREF
  LONG NumberOfWaitingThreads; // [rsp+60h] [rbp+18h] BYREF
  char v20; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v18 = 0;
  v6 = a1;
  v7 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v8 = *(_QWORD *)(v7 + 72);
  if ( v8 )
    ExEnterPriorityRegionAndAcquireResourceShared(v8);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"GreBaseGlobals.hsemDwmState", *(_QWORD *)(v7 + 72));
  if ( UserIsCurrentProcessDwm(v10, v9, v11) )
  {
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v20, (struct _EX_PUSH_LOCK *)(*(_QWORD *)(v7 + 6472) + 32LL));
    NotificationTokens = SfmTokenArray::GetNotificationTokens(*(SfmTokenArray **)(v7 + 6472), v6, &v18, a3);
    v13 = *(_QWORD *)(v7 + 6472);
    v14 = NotificationTokens;
    if ( !*(_DWORD *)(v13 + 12) )
    {
      NumberOfWaitingThreads = 0;
      v15 = SGDGetSessionState(v13);
      ZwResetEvent(*(HANDLE *)(*(_QWORD *)(*(_QWORD *)(v15 + 24) + 6472LL) + 24LL), &NumberOfWaitingThreads);
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v20);
    v3 = v18;
  }
  else
  {
    v14 = -1073741790;
  }
  *a2 = v3;
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDwmState", *(_QWORD *)(v7 + 72));
  v16 = *(struct _ERESOURCE **)(v7 + 72);
  if ( v16 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v16);
    PsLeavePriorityRegion();
  }
  return v14;
}
