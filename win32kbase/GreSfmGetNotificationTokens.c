__int64 __fastcall GreSfmGetNotificationTokens(__int64 a1, unsigned int *a2, struct _D3DKMT_PRESENTHISTORYTOKEN *a3)
{
  unsigned int v3; // edi
  unsigned int v6; // ebp
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int NotificationTokens; // eax
  __int64 v14; // rcx
  unsigned int v15; // esi
  __int64 v16; // rax
  struct _ERESOURCE *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v21; // [rsp+58h] [rbp+10h] BYREF
  LONG NumberOfWaitingThreads; // [rsp+60h] [rbp+18h] BYREF
  char v23; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v21 = 0;
  v6 = a1;
  v7 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v8 = *(_QWORD *)(v7 + 72);
  if ( v8 )
    ExEnterPriorityRegionAndAcquireResourceShared(v8);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"GreBaseGlobals.hsemDwmState", *(_QWORD *)(v7 + 72));
  if ( UserIsCurrentProcessDwm(v10, v9, v11, v12) )
  {
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v23, (struct _EX_PUSH_LOCK *)(*(_QWORD *)(v7 + 6472) + 32LL));
    NotificationTokens = SfmTokenArray::GetNotificationTokens(*(SfmTokenArray **)(v7 + 6472), v6, &v21, a3);
    v14 = *(_QWORD *)(v7 + 6472);
    v15 = NotificationTokens;
    if ( !*(_DWORD *)(v14 + 12) )
    {
      NumberOfWaitingThreads = 0;
      v16 = SGDGetSessionState(v14);
      ZwResetEvent(*(HANDLE *)(*(_QWORD *)(*(_QWORD *)(v16 + 24) + 6472LL) + 24LL), &NumberOfWaitingThreads);
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v23);
    v3 = v21;
  }
  else
  {
    v15 = -1073741790;
  }
  *a2 = v3;
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDwmState", *(_QWORD *)(v7 + 72));
  v17 = *(struct _ERESOURCE **)(v7 + 72);
  if ( v17 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v17);
    PsLeavePriorityRegion(v19, v18);
  }
  return v15;
}
