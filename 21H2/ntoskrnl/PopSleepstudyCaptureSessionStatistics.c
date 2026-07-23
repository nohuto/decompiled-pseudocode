/*
 * XREFs of PopSleepstudyCaptureSessionStatistics @ 0x1408FA328
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140774E98 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopCaptureSleepStudyStatistics @ 0x140570798 (PopCaptureSleepStudyStatistics.c)
 */

struct _KTHREAD *__fastcall PopSleepstudyCaptureSessionStatistics(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  unsigned int i; // r9d
  char *v9; // r8
  unsigned __int64 v10; // rdx

  PopWdiCurrentScenario = (__int64)a2;
  PopWdiCurrentScenarioInstanceId = a3;
  memset((void *)a4, 0, 0x148uLL);
  v7 = *a2 - *(_QWORD *)&NullGuid.Data1;
  if ( *a2 == *(_QWORD *)&NullGuid.Data1 )
    v7 = a2[1] - *(_QWORD *)NullGuid.Data4;
  if ( !v7 )
  {
    for ( i = 1; i <= 2; ++i )
    {
      v9 = (char *)&unk_140C1E4F8 + 96 * (((unsigned __int8)dword_140C1E4F0 - (unsigned __int8)i) & 7);
      v10 = (*((_QWORD *)v9 + 3) - *((_QWORD *)v9 + 2)) / 0xAuLL;
      if ( *(_DWORD *)v9 == 2 )
      {
        *(_BYTE *)(a4 + 272) = 1;
        *(_QWORD *)(a4 + 304) = v10;
        *(_DWORD *)(a4 + 312) = *((_DWORD *)v9 + 10);
        *(_DWORD *)(a4 + 320) = *((_DWORD *)v9 + 12);
        *(_DWORD *)(a4 + 316) = *((_DWORD *)v9 + 11);
        *(_DWORD *)(a4 + 324) = *((_DWORD *)v9 + 13);
      }
      else if ( *(_DWORD *)v9 == 1 )
      {
        *(_QWORD *)(a4 + 280) = v10;
        *(_DWORD *)(a4 + 288) = *((_DWORD *)v9 + 10);
        *(_DWORD *)(a4 + 296) = *((_DWORD *)v9 + 12);
        *(_DWORD *)(a4 + 292) = *((_DWORD *)v9 + 11);
        *(_DWORD *)(a4 + 300) = *((_DWORD *)v9 + 13);
        break;
      }
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopSleepstudySessionLock);
  PopCaptureSleepStudyStatistics(a2, a3, a4);
  if ( qword_140C54450 )
    qword_140C54450(a2, a3);
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopSleepstudySessionLock);
}
