/*
 * XREFs of EmProviderRegisterEntry @ 0x140939950
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     EmpQueueRuleUpdateState @ 0x1403861E4 (EmpQueueRuleUpdateState.c)
 *     EmpSearchEntryDatabase @ 0x1403862FC (EmpSearchEntryDatabase.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EmProviderRegisterEntry(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v8; // rdi
  int v9; // ebx
  _QWORD *v10; // rbp
  unsigned int v11; // r8d
  __int64 v12; // rdx
  _QWORD *v13; // r9
  __int64 v14; // rcx
  void *v15; // rcx
  _QWORD *Pool2; // rax
  unsigned int v18; // eax
  void *v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  _QWORD *v24; // rsi

  v8 = 0LL;
  v9 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
  if ( !a2 || !a1 || !a3 || !a4 || !*(_QWORD *)a3 || !*(_DWORD *)(a3 + 8) )
    goto LABEL_14;
  v10 = EmpSearchEntryDatabase(a2);
  if ( !v10 )
  {
    v9 = -1073741275;
    goto LABEL_15;
  }
  v11 = *(_DWORD *)(a1 + 16);
  v12 = 0LL;
  if ( v11 )
  {
    while ( 1 )
    {
      v13 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 8 * v12);
      v14 = *v13 - *a2;
      if ( *v13 == *a2 )
        v14 = v13[1] - a2[1];
      if ( !v14 )
        break;
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= v11 )
        goto LABEL_14;
    }
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 56LL, 1919962437LL);
    v8 = Pool2;
    if ( Pool2
      && (*Pool2 = v10,
          v18 = *(_DWORD *)(a3 + 8),
          *((_DWORD *)v8 + 4) = v18,
          v19 = (void *)ExAllocatePool2(256LL, v18, 1919962437LL),
          (v8[1] = v19) != 0LL) )
    {
      memmove(v19, *(const void **)a3, *((unsigned int *)v8 + 4));
      v20 = *(_QWORD **)(a1 + 64);
      v21 = v8 + 5;
      if ( *v20 != a1 + 56
        || (*v21 = a1 + 56,
            v8[6] = v20,
            *v20 = v21,
            *(_QWORD *)(a1 + 64) = v21,
            v22 = (_QWORD *)v10[6],
            v23 = v8 + 3,
            (_QWORD *)*v22 != v10 + 5) )
      {
        __fastfail(3u);
      }
      *v23 = v10 + 5;
      v8[4] = v22;
      *v22 = v23;
      v10[6] = v23;
      v24 = (_QWORD *)v10[9];
      v10[4] = v23;
      while ( v24 )
      {
        EmpQueueRuleUpdateState(*(v24 - 1), (__int64)v10);
        v24 = (_QWORD *)*v24;
      }
      *a4 = v8;
    }
    else
    {
      v9 = -1073741670;
    }
  }
  else
  {
LABEL_14:
    v9 = -1073741811;
  }
LABEL_15:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
  KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
  if ( v9 < 0 && v8 )
  {
    v15 = (void *)v8[1];
    if ( v15 )
      ExFreePoolWithTag(v15, 0x72704D45u);
    ExFreePoolWithTag(v8, 0x72704D45u);
  }
  return (unsigned int)v9;
}
