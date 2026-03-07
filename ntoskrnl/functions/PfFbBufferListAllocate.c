__int64 __fastcall PfFbBufferListAllocate(_SLIST_ENTRY *RunRef, signed int a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v6; // rbp
  __int64 Pool2; // rax
  struct _SLIST_ENTRY *v8; // rsi
  unsigned __int64 v9; // r15
  struct _SLIST_ENTRY *v10; // rbx
  __int64 result; // rax

  v3 = a2;
  if ( a2 + _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[7], a2) > *((_DWORD *)&RunRef[5].Next + 2) )
  {
    result = 3221225773LL;
LABEL_9:
    _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[7], -(int)v3);
    return result;
  }
  v6 = ((a2 - 32) / a3) & 0xFFFFFFF0;
  Pool2 = ExAllocatePool2(*((_QWORD *)&RunRef[4].Next + 1), a2, HIDWORD(RunRef[4].Next));
  v8 = (struct _SLIST_ENTRY *)Pool2;
  if ( !Pool2 )
  {
    result = 3221225626LL;
    goto LABEL_9;
  }
  *(_QWORD *)Pool2 = 0LL;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_DWORD *)(Pool2 + 28) = 0;
  *(_DWORD *)(Pool2 + 16) = a3;
  v9 = Pool2 + v3;
  *(_DWORD *)(Pool2 + 24) = v3;
  v10 = (struct _SLIST_ENTRY *)(Pool2 + 32);
  *(_DWORD *)(Pool2 + 20) = v6;
  while ( (unsigned __int64)v10 + v6 <= v9 )
  {
    PfFbBufferListInsertInFree(RunRef, v10, v6, 0, 0);
    v10 = (struct _SLIST_ENTRY *)((char *)v10 + (unsigned int)v6);
  }
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)&RunRef[3], v8);
  return 0LL;
}
