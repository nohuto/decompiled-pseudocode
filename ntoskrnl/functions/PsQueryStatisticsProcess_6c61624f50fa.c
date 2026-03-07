__int64 __fastcall PsQueryStatisticsProcess(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebp
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  __int64 v7; // r12
  __int64 v8; // r13
  _QWORD *i; // rsi
  __int64 v10; // rcx
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-58h] BYREF
  __int128 v13; // [rsp+30h] [rbp-48h]
  signed __int64 *BugCheckParameter2; // [rsp+88h] [rbp+10h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  BugCheckParameter2 = (signed __int64 *)(a1 + 2144);
  --CurrentThread->KernelApcDisable;
  v12 = 0LL;
  v13 = 0LL;
  ExAcquirePushLockSharedEx(a1 + 2144, 0LL);
  v4 = *(_DWORD *)(a1 + 892);
  v5 = *(_DWORD *)(a1 + 896);
  v6 = *(_DWORD *)(a1 + 900);
  v7 = *(_QWORD *)(a1 + 1000);
  v8 = *(_QWORD *)(a1 + 1008);
  a2[3] = *(_QWORD *)(a1 + 864);
  a2[4] = *(_QWORD *)(a1 + 872);
  a2[5] = *(_QWORD *)(a1 + 1552);
  a2[6] = *(_QWORD *)(a1 + 1560);
  a2[7] = *(_QWORD *)(a1 + 1568);
  a2[8] = *(_QWORD *)(a1 + 1576);
  a2[9] = *(_QWORD *)(a1 + 1584);
  a2[10] = *(_QWORD *)(a1 + 1592);
  for ( i = *(_QWORD **)(a1 + 1504); i != (_QWORD *)(a1 + 1504); v8 += *((_QWORD *)&v13 + 1) )
  {
    v4 += *((_DWORD *)i - 171);
    v5 += *((_DWORD *)i - 151);
    KeQueryValuesThread((__int64)(i - 167), (__int64)&v12);
    a2[3] += *(i - 158);
    a2[4] += *((unsigned int *)i - 249);
    a2[5] += *(i - 55);
    a2[6] += *(i - 54);
    a2[7] += *(i - 53);
    a2[8] += *(i - 52);
    a2[9] += *(i - 51);
    a2[10] += *(i - 50);
    i = (_QWORD *)*i;
    v6 += DWORD1(v12);
    v7 += v13;
  }
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v10 = (unsigned int)KeMaximumIncrement;
  *a2 = (unsigned int)KeMaximumIncrement * (unsigned __int64)v4;
  a2[1] = v10 * v5;
  a2[2] = v10 * v6;
  result = v7 * (unsigned int)v10;
  a2[11] = result;
  a2[12] = v8 * v10;
  return result;
}
