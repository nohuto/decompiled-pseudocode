/*
 * XREFs of GreSfmGetNotificationTokens @ 0x1C009B840
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C0014970 (UserIsCurrentProcessDwm.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0017700 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0017740 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0089800 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     ?GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C009B950 (-GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 */

__int64 __fastcall GreSfmGetNotificationTokens(
        unsigned int a1,
        unsigned int *a2,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r8d
  unsigned int NotificationTokens; // edi
  __int64 v13; // rcx
  unsigned int v15; // [rsp+48h] [rbp+10h] BYREF
  LONG NumberOfWaitingThreads; // [rsp+50h] [rbp+18h] BYREF
  char v17; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v15 = 0;
  if ( ghsemDwmState )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDwmState, a2);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDwmState", (int)ghsemDwmState, (int)a3);
  if ( UserIsCurrentProcessDwm(v8, v7, v9, v10) )
  {
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v17, (SfmTokenArray *)((char *)gpSfmState + 32));
    NotificationTokens = SfmTokenArray::GetNotificationTokens(gpSfmState, a1, &v15, a3);
    if ( !*((_DWORD *)gpSfmState + 3) )
    {
      NumberOfWaitingThreads = 0;
      ZwResetEvent(*((HANDLE *)gpSfmState + 3), &NumberOfWaitingThreads);
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v17);
    v3 = v15;
  }
  else
  {
    NotificationTokens = -1073741790;
  }
  *a2 = v3;
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (int)ghsemDwmState, v11);
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
    PsLeavePriorityRegion(v13);
  }
  return NotificationTokens;
}
