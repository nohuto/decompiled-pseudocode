/*
 * XREFs of RtlLockHeapManagerForCloning @ 0x1800F2724
 * Callers:
 *     RtlPrepareForProcessCloning @ 0x18009BB80 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6340 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlpCSparseBitmapLock @ 0x180006534 (RtlpCSparseBitmapLock.c)
 *     RtlTryEnterCriticalSection @ 0x1800207E0 (RtlTryEnterCriticalSection.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpHpHeapLock @ 0x18005FAC4 (RtlpHpHeapLock.c)
 *     ZwDelayExecution @ 0x18009DB60 (ZwDelayExecution.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800F4A54 (RtlpUnlockHeapManagerForCloning.c)
 *     RtlpHpLfhContextLockUnlock @ 0x18010E090 (RtlpHpLfhContextLockUnlock.c)
 */

__int64 RtlLockHeapManagerForCloning()
{
  struct _PEB *v0; // r14
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // r9
  unsigned int v3; // edi
  unsigned int i; // esi
  void **ProcessHeaps; // rax
  char *v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  int v16; // ebp
  unsigned __int64 v17; // rdx
  unsigned __int64 v19; // rcx
  char v20[40]; // [rsp+20h] [rbp-28h] BYREF
  char v21; // [rsp+50h] [rbp+8h] BYREF
  __int64 v22; // [rsp+58h] [rbp+10h]

  v0 = NtCurrentPeb();
  RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
  RtlpCSparseBitmapLock((__int64)&unk_18016DC30, 1, (__int64)v20);
  v3 = 0;
  for ( i = 0; i < v0->NumberOfHeaps; ++i )
  {
    ProcessHeaps = v0->ProcessHeaps;
    v6 = (char *)ProcessHeaps[i];
    if ( *((_DWORD *)v6 + 4) == -571548178 )
    {
      if ( (v6[20] & 1) == 0 )
      {
        RtlpHpHeapLock((__int64)ProcessHeaps[i], &v21, v1, v2);
        RtlAcquireSRWLockExclusive((unsigned __int64)(v6 + 368), v7, v8, v9);
        RtlAcquireSRWLockExclusive((unsigned __int64)(v6 + 560), v10, v11, v12);
        RtlAcquireSRWLockExclusive((unsigned __int64)(v6 + 224), v13, v14, v15);
        RtlpHpLfhContextLockUnlock(v6 + 832, 0LL);
      }
    }
    else if ( (v6[112] & 1) == 0 )
    {
      v16 = 0;
      v22 = -250000LL;
      while ( !(unsigned int)RtlTryEnterCriticalSection(*((_QWORD *)v6 + 44)) )
      {
        ZwDelayExecution();
        if ( (unsigned int)++v16 >= 0x64 )
        {
          v3 = -1073741420;
          RtlpUnlockHeapManagerForCloning(0LL, i);
          return v3;
        }
      }
      if ( v6[418] == 2 )
        v19 = *((_QWORD *)v6 + 51);
      else
        v19 = 0LL;
      if ( v19 )
        RtlAcquireSRWLockExclusive(v19, v17, v1, v2);
    }
  }
  return v3;
}
