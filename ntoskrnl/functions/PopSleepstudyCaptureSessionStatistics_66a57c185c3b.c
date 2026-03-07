struct _KTHREAD *__fastcall PopSleepstudyCaptureSessionStatistics(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v8; // rax
  char *v10; // r10
  char *v11; // r11
  int v12; // r9d
  char *v13; // r8
  unsigned __int64 v14; // rdx
  _DWORD *v15; // rbx

  PopWdiCurrentScenario = (__int64)a2;
  PopWdiCurrentScenarioInstanceId = a3;
  memset(a5, 0, 0x150uLL);
  v8 = *a2 - *(_QWORD *)&NullGuid.Data1;
  if ( *a2 == *(_QWORD *)&NullGuid.Data1 )
    v8 = a2[1] - *(_QWORD *)NullGuid.Data4;
  if ( v8 )
  {
    SshSessionManagerTraceCsEnterReason((char *)&unk_140C3B930 + 104 * (unsigned int)dword_140C3B928);
    goto LABEL_5;
  }
  v10 = 0LL;
  v11 = 0LL;
  v12 = 1;
  while ( 1 )
  {
    v13 = (char *)&unk_140C3B930 + 104 * (((unsigned __int8)dword_140C3B928 - (unsigned __int8)v12) & 7);
    v14 = (*((_QWORD *)v13 + 3) - *((_QWORD *)v13 + 2)) / 0xAuLL;
    if ( *(_DWORD *)v13 != 2 )
      break;
    *((_BYTE *)a5 + 272) = 1;
    v11 = v13;
    a5[38] = v14;
    *((_DWORD *)a5 + 78) = *((_DWORD *)v13 + 10);
    *((_DWORD *)a5 + 80) = *((_DWORD *)v13 + 12);
    *((_DWORD *)a5 + 79) = *((_DWORD *)v13 + 11);
    *((_DWORD *)a5 + 81) = *((_DWORD *)v13 + 13);
LABEL_11:
    if ( (unsigned int)++v12 > 2 )
      goto LABEL_12;
  }
  if ( *(_DWORD *)v13 != 1 )
    goto LABEL_11;
  a5[35] = v14;
  v10 = v13;
  *((_DWORD *)a5 + 72) = *((_DWORD *)v13 + 10);
  *((_DWORD *)a5 + 74) = *((_DWORD *)v13 + 12);
  *((_DWORD *)a5 + 73) = *((_DWORD *)v13 + 11);
  *((_DWORD *)a5 + 75) = *((_DWORD *)v13 + 13);
LABEL_12:
  v15 = (_DWORD *)((char *)&unk_140C3B930 + 104 * (unsigned int)dword_140C3B928);
  SshSessionManagerTraceCsExitReason(v10, v11, v15);
  if ( *v15 == 3 && qword_140C6AC38 )
    qword_140C6AC38();
LABEL_5:
  PopReleaseRwLock((ULONG_PTR)&PopSleepstudySessionLock);
  PopCaptureSleepStudyStatistics(a2, a3, a4, a5);
  if ( qword_140C6ABF0 )
    qword_140C6ABF0(a2, a3);
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopSleepstudySessionLock);
}
