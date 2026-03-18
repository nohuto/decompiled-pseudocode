/*
 * XREFs of ?OnProcessTermination@InputObjectMap@@SAXXZ @ 0x1C008072C
 * Callers:
 *     DestroyProcessInfo @ 0x1C00188FC (DestroyProcessInfo.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00808F0 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

void __fastcall InputObjectMap::OnProcessTermination(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcess; // rbp
  _QWORD *v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 *v7; // rcx
  PVOID *v8; // rsi
  _QWORD *i; // rcx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v10, (struct _EX_PUSH_LOCK *)&InputObjectMap::s_hashTableLock);
  v5 = Buffer;
  v6 = (unsigned __int64)Buffer;
  while ( 1 )
  {
    v7 = (unsigned __int64 *)v6;
    if ( !v6 )
      break;
    v6 = *(_QWORD *)v6;
    if ( (v6 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v6 = *v7;
    if ( (v6 & 1) != 0 )
      break;
LABEL_6:
    v8 = (PVOID *)v6;
    if ( !v6 )
      goto LABEL_5;
    if ( *(_QWORD *)(*(_QWORD *)(v6 + 24) + 56LL) == CurrentProcess )
    {
      for ( i = v5; (*i & 1) == 0; i = (_QWORD *)*i )
      {
        if ( *i == v6 )
        {
          *i = *(_QWORD *)v6;
          --InputObjectMap::s_hashTable;
          *(_QWORD *)v6 |= 0x8000000000000002uLL;
          v6 = (unsigned __int64)i;
          break;
        }
      }
      ObfDereferenceObject(v8[3]);
      ExFreePoolWithTag(v8, 0);
    }
  }
  for ( ++v5; v5 < (_QWORD *)((char *)Buffer + 8 * ((unsigned __int64)(unsigned int)dword_1C029A1F4 >> 5)); ++v5 )
  {
    v6 = *v5;
    if ( (*v5 & 1) == 0 )
      goto LABEL_6;
  }
LABEL_5:
  ExReleasePushLockExclusiveEx(v10, 0LL);
  KeLeaveCriticalRegion();
}
