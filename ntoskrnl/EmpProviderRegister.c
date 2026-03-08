/*
 * XREFs of EmpProviderRegister @ 0x140810DB0
 * Callers:
 *     EmProviderRegister @ 0x140810D40 (EmProviderRegister.c)
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 *     HalRegisterErrataCallbacks @ 0x140B4CB70 (HalRegisterErrataCallbacks.c)
 *     EmInitSystem @ 0x140B4CBA8 (EmInitSystem.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     EmpQueueRuleUpdateState @ 0x1403861E4 (EmpQueueRuleUpdateState.c)
 *     EmpSearchCallbackDatabase @ 0x1403862C4 (EmpSearchCallbackDatabase.c)
 *     EmpSearchEntryDatabase @ 0x1403862FC (EmpSearchEntryDatabase.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EmpProviderRegister(
        PVOID Object,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 *a6)
{
  __int64 v7; // rbp
  __int64 v9; // r15
  unsigned int v10; // r12d
  unsigned int v11; // ebx
  __int64 Pool2; // rax
  __int64 v13; // rdi
  _QWORD *v14; // rax
  __int64 v15; // rax
  unsigned int v16; // ebp
  __int64 v17; // r14
  _QWORD *v18; // r10
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // r10
  __int64 v22; // r11
  _QWORD *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 i; // rbp
  __int64 v27; // rdx
  _QWORD *j; // rsi
  __int64 k; // rbp
  __int64 v30; // rdx
  _QWORD *m; // rsi
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // r10
  __int64 v38; // r15
  _QWORD *v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // r10
  _QWORD *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rcx
  _QWORD *v46; // rax
  _QWORD *v47; // rdx
  _QWORD *v48; // rcx
  void *v49; // rcx
  unsigned int v50; // edx
  _QWORD *v51; // r8
  __int64 v52; // rcx
  _QWORD *v53; // rax
  char *v54; // rcx
  char *v55; // rax
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx

  v7 = a3;
  v9 = a4;
  v10 = 0;
  v11 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
  if ( !a6 || (_DWORD)v7 && !a2 || a5 && !v9 )
  {
    v11 = -1073741811;
    goto LABEL_29;
  }
  Pool2 = ExAllocatePool2(256LL, 72LL, 1919962437LL);
  v13 = Pool2;
  if ( !Pool2 )
  {
    v11 = -1073741670;
    goto LABEL_29;
  }
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_DWORD *)(Pool2 + 32) = 0;
  *(_QWORD *)(Pool2 + 40) = 0LL;
  *(_DWORD *)(Pool2 + 48) = 0;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_DWORD *)(Pool2 + 16) = 0;
  v14 = (_QWORD *)(Pool2 + 56);
  v14[1] = v14;
  *v14 = v14;
  if ( (_DWORD)v7 )
  {
    v33 = ExAllocatePool2(256LL, (unsigned int)(8 * v7), 1919962437LL);
    *(_QWORD *)(v13 + 8) = v33;
    if ( v33 )
    {
      *(_DWORD *)(v13 + 16) = v7;
      v34 = (_QWORD *)(a2 + 8);
      v35 = v7;
      do
      {
        if ( *v34 )
          ++*(_DWORD *)(v13 + 32);
        v34 += 3;
        --v35;
      }
      while ( v35 );
      v36 = *(_DWORD *)(v13 + 32);
      if ( !v36
        || (v44 = ExAllocatePool2(256LL, (unsigned int)(32 * v36), 1919962437LL), (*(_QWORD *)(v13 + 24) = v44) != 0LL) )
      {
        v37 = 0LL;
        while ( 1 )
        {
          v38 = 3 * v37;
          v39 = *(_QWORD **)(a2 + 24 * v37);
          if ( !v39 )
            goto LABEL_53;
          v40 = EmpSearchEntryDatabase(v39);
          v42 = v40;
          if ( !v40 )
          {
LABEL_52:
            v11 = -1073741275;
            goto LABEL_54;
          }
          *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8 * v41) = v40;
          v43 = *(_QWORD *)(a2 + 8 * v38 + 8);
          if ( v43 )
          {
            v45 = (_QWORD *)(*(_QWORD *)(v13 + 24) + 32LL * v10);
            *v45 = v43;
            v45[1] = *(_QWORD *)(a2 + 8 * v38 + 16);
            v46 = v42 + 7;
            v47 = (_QWORD *)v42[8];
            v48 = v45 + 2;
            if ( (_QWORD *)*v47 != v46 )
              goto LABEL_71;
            *v48 = v46;
            ++v10;
            v48[1] = v47;
            *v47 = v48;
            v46[1] = v48;
          }
          v37 = (unsigned int)(v41 + 1);
          if ( (unsigned int)v37 >= (unsigned int)v7 )
          {
            v9 = a4;
            goto LABEL_8;
          }
        }
      }
    }
  }
  else
  {
LABEL_8:
    if ( !a5 )
    {
LABEL_16:
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v13 + 16); i = (unsigned int)(i + 1) )
      {
        v27 = *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8 * i);
        _InterlockedIncrement((volatile signed __int32 *)(v27 + 16));
        for ( j = *(_QWORD **)(v27 + 72); j; j = (_QWORD *)*j )
          EmpQueueRuleUpdateState(*(j - 1), 0LL);
      }
      for ( k = 0LL; (unsigned int)k < *(_DWORD *)(v13 + 48); k = (unsigned int)(k + 1) )
      {
        v30 = *(_QWORD *)(*(_QWORD *)(v13 + 40) + 8 * k);
        _InterlockedIncrement((volatile signed __int32 *)(v30 + 24));
        for ( m = *(_QWORD **)(v30 + 48); m; m = (_QWORD *)*m )
          EmpQueueRuleUpdateState(*(m - 1), 0LL);
      }
      if ( Object )
        ObfReferenceObject(Object);
      *(_QWORD *)v13 = Object;
      *a6 = v13;
      goto LABEL_29;
    }
    v15 = ExAllocatePool2(256LL, 8 * a5, 1919962437LL);
    *(_QWORD *)(v13 + 40) = v15;
    if ( v15 )
    {
      v16 = 0;
      *(_DWORD *)(v13 + 48) = a5;
      v17 = 0LL;
      v18 = (_QWORD *)(v9 + 8);
      while ( *v18 )
      {
        v19 = (_QWORD *)*(v18 - 1);
        if ( !v19 )
          break;
        v20 = EmpSearchCallbackDatabase(v19);
        v23 = v20;
        if ( !v20 )
          goto LABEL_52;
        v24 = v20[2];
        if ( v24 && v24 != v22 )
        {
          v11 = -1073741771;
          goto LABEL_54;
        }
        ++v16;
        *(_QWORD *)(v17 + *(_QWORD *)(v13 + 40)) = v23;
        v17 += 8LL;
        v23[2] = *v21;
        v25 = v21[1];
        v18 = v21 + 3;
        v23[4] = v25;
        if ( v16 >= a5 )
          goto LABEL_16;
      }
LABEL_53:
      v11 = -1073741811;
      goto LABEL_54;
    }
  }
  v11 = -1073741670;
LABEL_54:
  v49 = *(void **)(v13 + 8);
  if ( v49 )
    ExFreePoolWithTag(v49, 0x72704D45u);
  if ( *(_QWORD *)(v13 + 24) )
  {
    v50 = 0;
    if ( v10 )
    {
      while ( 1 )
      {
        v51 = (_QWORD *)(32LL * v50 + *(_QWORD *)(v13 + 24) + 16LL);
        v52 = *v51;
        if ( *(_QWORD **)(*v51 + 8LL) != v51 )
          break;
        v53 = (_QWORD *)v51[1];
        if ( (_QWORD *)*v53 != v51 )
          break;
        ++v50;
        *v53 = v52;
        *(_QWORD *)(v52 + 8) = v53;
        if ( v50 >= v10 )
          goto LABEL_61;
      }
LABEL_71:
      __fastfail(3u);
    }
LABEL_61:
    ExFreePoolWithTag(*(PVOID *)(v13 + 24), 0x72704D45u);
  }
  v54 = *(char **)(v13 + 40);
  if ( v54 )
  {
    if ( a5 )
    {
      v55 = *(char **)(v13 + 40);
      v56 = 0LL;
      v57 = a5;
      do
      {
        v58 = *(_QWORD *)&v55[v56];
        v54 = v55;
        if ( v58 && !*(_DWORD *)(v58 + 24) )
        {
          *(_QWORD *)(v58 + 16) = 0LL;
          v54 = *(char **)(v13 + 40);
        }
        v56 += 8LL;
        v55 = v54;
        --v57;
      }
      while ( v57 );
    }
    ExFreePoolWithTag(v54, 0x72704D45u);
  }
  ExFreePoolWithTag((PVOID)v13, 0x72704D45u);
LABEL_29:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
  KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
  return v11;
}
