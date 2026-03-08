/*
 * XREFs of ?OnProcessTermination@InputObjectMap@@SAXXZ @ 0x1C005BA98
 * Callers:
 *     DestroyProcessInfo @ 0x1C00D51B0 (DestroyProcessInfo.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C005BB7C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

void __fastcall InputObjectMap::OnProcessTermination(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcess; // rbp
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  PVOID *v7; // rsi
  _QWORD *i; // rcx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v9, (struct _EX_PUSH_LOCK *)&InputObjectMap::s_hashTableLock);
  v5 = Buffer;
  v6 = Buffer;
  while ( v6 )
  {
    v6 = (_QWORD *)*v6;
    if ( ((unsigned __int8)v6 & 1) != 0 )
      break;
LABEL_9:
    v7 = (PVOID *)v6;
    if ( !v6 )
      goto LABEL_7;
    if ( *(_QWORD *)(v6[3] + 56LL) == CurrentProcess )
    {
      for ( i = v5; (*i & 1) == 0; i = (_QWORD *)*i )
      {
        if ( (_QWORD *)*i == v6 )
        {
          *i = *v6;
          --InputObjectMap::s_hashTable;
          *v6 |= 0x8000000000000002uLL;
          v6 = i;
          break;
        }
      }
      ObfDereferenceObject(v7[3]);
      ExFreePoolWithTag(v7, 0);
    }
  }
  for ( ++v5; v5 < (_QWORD *)((char *)Buffer + 8 * ((unsigned __int64)*(&InputObjectMap::s_hashTable + 1) >> 5)); ++v5 )
  {
    v6 = (_QWORD *)*v5;
    if ( (*v5 & 1) == 0 )
      goto LABEL_9;
  }
LABEL_7:
  ExReleasePushLockExclusiveEx(v9, 0LL);
  KeLeaveCriticalRegion();
}
