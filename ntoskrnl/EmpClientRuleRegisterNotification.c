/*
 * XREFs of EmpClientRuleRegisterNotification @ 0x1409394F4
 * Callers:
 *     EmClientRuleRegisterNotification @ 0x1409394D0 (EmClientRuleRegisterNotification.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     EmpSearchTargetRuleList @ 0x1402D62A0 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x1402D62C8 (EmpSearchRuleDatabase.c)
 *     EmpQueueRuleUpdateState @ 0x1403861E4 (EmpQueueRuleUpdateState.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EmpClientRuleRegisterNotification(PVOID Object, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v5; // r14
  unsigned int v8; // edi
  _QWORD *Pool2; // rsi
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r11
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  volatile signed __int32 *v15; // rax
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  _QWORD *v20; // rdx
  char *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  volatile signed __int32 *v24; // rax

  v5 = a3;
  v8 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
  if ( a4 && (_DWORD)v5 && a2 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 24LL, 1818447173LL);
    if ( Pool2 )
    {
      v10 = ExAllocatePool2(256LL, (unsigned int)(40 * v5), 1818447173LL);
      Pool2[1] = v10;
      if ( v10 )
      {
        v11 = 0LL;
        *((_DWORD *)Pool2 + 4) = v5;
        do
        {
          v12 = (unsigned int)v11 + 2 * v11;
          v13 = *(_QWORD **)(a2 + 8 * v12);
          if ( !v13 || !*(_QWORD *)(a2 + 8 * v12 + 8) )
          {
            v8 = -1073741811;
            goto LABEL_23;
          }
          v14 = EmpSearchRuleDatabase(v13);
          if ( !v14 || (v15 = (volatile signed __int32 *)EmpSearchTargetRuleList((__int64)v14)) == 0LL )
          {
            v8 = -1073741275;
            goto LABEL_23;
          }
          v18 = (unsigned int)v11 + 4 * v11;
          *(_QWORD *)(Pool2[1] + 8 * v18) = v15;
          *(_QWORD *)(Pool2[1] + 8 * v18 + 8) = *(_QWORD *)(a2 + 8 * v17 + 8);
          *(_QWORD *)(Pool2[1] + 8 * v18 + 16) = *(_QWORD *)(a2 + 8 * v17 + 16);
          v19 = (_QWORD *)(Pool2[1] + 24LL + 8 * v18);
          v20 = *(_QWORD **)(v16 + 88);
          if ( *v20 != v16 + 80 )
            __fastfail(3u);
          *v19 = v16 + 80;
          v19[1] = v20;
          *v20 = v19;
          *(_QWORD *)(v16 + 88) = v19;
          if ( _InterlockedIncrement(v15) == 1 )
            EmpQueueRuleUpdateState(v16, 0LL);
          v11 = (unsigned int)(v11 + 1);
        }
        while ( (unsigned int)v11 < (unsigned int)v5 );
        if ( Object )
          ObfReferenceObject(Object);
        *Pool2 = Object;
        *a4 = Pool2;
      }
      else
      {
        v8 = -1073741670;
LABEL_23:
        v21 = (char *)Pool2[1];
        if ( v21 )
        {
          v22 = 0LL;
          v23 = v5;
          do
          {
            v24 = *(volatile signed __int32 **)&v21[v22];
            if ( v24 )
            {
              _InterlockedAdd(v24, 0xFFFFFFFF);
              v21 = (char *)Pool2[1];
            }
            v22 += 40LL;
            --v23;
          }
          while ( v23 );
          ExFreePoolWithTag(v21, 0x6C634D45u);
        }
        ExFreePoolWithTag(Pool2, 0x6C634D45u);
      }
    }
    else
    {
      v8 = -1073741670;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
  KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
  return v8;
}
