/*
 * XREFs of PopSleepstudyCaptureSessionStatistics @ 0x140809614
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140809838 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopCaptureSleepStudyStatistics @ 0x14039A210 (PopCaptureSleepStudyStatistics.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SshSessionManagerTraceCsExitReason @ 0x14080788C (SshSessionManagerTraceCsExitReason.c)
 *     SshSessionManagerTraceCsEnterReason @ 0x14080A488 (SshSessionManagerTraceCsEnterReason.c)
 */

struct _KTHREAD *__fastcall PopSleepstudyCaptureSessionStatistics(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        void *a5)
{
  __int64 v8; // rax
  __int64 v10; // r10
  __int64 v11; // r11
  int v12; // r9d
  char *v13; // r8
  unsigned __int64 v14; // rdx
  _DWORD *v15; // rbx

  PopWdiCurrentScenario = (__int64)a2;
  PopWdiCurrentScenarioInstanceId = a3;
  memset(a5, 0, 0x148uLL);
  v8 = *a2 - *(_QWORD *)&NullGuid.Data1;
  if ( *a2 == *(_QWORD *)&NullGuid.Data1 )
    v8 = a2[1] - *(_QWORD *)NullGuid.Data4;
  if ( v8 )
  {
    SshSessionManagerTraceCsEnterReason((char *)&unk_140C20050 + 104 * (unsigned int)dword_140C20048);
    goto LABEL_5;
  }
  v10 = 0LL;
  v11 = 0LL;
  v12 = 1;
  while ( 1 )
  {
    v13 = (char *)&unk_140C20050 + 104 * (((unsigned __int8)dword_140C20048 - (unsigned __int8)v12) & 7);
    v14 = (*((_QWORD *)v13 + 3) - *((_QWORD *)v13 + 2)) / 0xAuLL;
    if ( *(_DWORD *)v13 == 2 )
    {
      *((_BYTE *)a5 + 272) = 1;
      v11 = (__int64)v13;
      *((_QWORD *)a5 + 38) = v14;
      *((_DWORD *)a5 + 78) = *((_DWORD *)v13 + 10);
      *((_DWORD *)a5 + 80) = *((_DWORD *)v13 + 12);
      *((_DWORD *)a5 + 79) = *((_DWORD *)v13 + 11);
      *((_DWORD *)a5 + 81) = *((_DWORD *)v13 + 13);
      goto LABEL_15;
    }
    if ( *(_DWORD *)v13 == 1 )
      break;
LABEL_15:
    if ( (unsigned int)++v12 > 2 )
      goto LABEL_12;
  }
  *((_QWORD *)a5 + 35) = v14;
  v10 = (__int64)v13;
  *((_DWORD *)a5 + 72) = *((_DWORD *)v13 + 10);
  *((_DWORD *)a5 + 74) = *((_DWORD *)v13 + 12);
  *((_DWORD *)a5 + 73) = *((_DWORD *)v13 + 11);
  *((_DWORD *)a5 + 75) = *((_DWORD *)v13 + 13);
LABEL_12:
  v15 = (_DWORD *)((char *)&unk_140C20050 + 104 * (unsigned int)dword_140C20048);
  SshSessionManagerTraceCsExitReason(v10, v11, v15);
  if ( *v15 == 3 && qword_140C5ADE8 )
    qword_140C5ADE8();
LABEL_5:
  PopReleaseRwLock((ULONG_PTR)&PopSleepstudySessionLock);
  PopCaptureSleepStudyStatistics(a2, a3, a4, (__int64)a5);
  if ( qword_140C5ADA0 )
    qword_140C5ADA0(a2, a3);
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopSleepstudySessionLock);
}
