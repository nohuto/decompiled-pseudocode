/*
 * XREFs of LdrpCompleteProcessCloning @ 0x1800D49F8
 * Callers:
 *     RtlCompleteProcessCloning @ 0x18009BA40 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18009BB80 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6340 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     LdrpReleaseLoaderLock @ 0x18003E664 (LdrpReleaseLoaderLock.c)
 *     LdrpCreateLoaderEvents @ 0x18007EB10 (LdrpCreateLoaderEvents.c)
 *     ZwTerminateProcess @ 0x18009DA60 (ZwTerminateProcess.c)
 */

__int64 __fastcall LdrpCompleteProcessCloning(int a1, __int64 a2, __int64 a3)
{
  void *UniqueThread; // rcx
  void *v4; // rcx
  __int64 v5; // rcx

  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_18016C3D8 = 0LL;
    qword_18016C3D0 = (__int64)UniqueThread;
    dword_18016C3CC = 1;
    dword_18016C3C8 = -2;
    v4 = NtCurrentTeb()->ClientId.UniqueThread;
    qword_1801665E0 = 0LL;
    qword_1801665D8 = (__int64)v4;
    dword_1801665D0 = -2;
    dword_1801665D4 = 1;
    if ( (int)LdrpCreateLoaderEvents() < 0 )
      ZwTerminateProcess();
    LdrpMapAndSnapWork = 0LL;
  }
  RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock, a2, a3);
  LdrpReleaseLoaderLock(v5, 13LL, 0LL);
  return LdrpDropLastInProgressCount();
}
