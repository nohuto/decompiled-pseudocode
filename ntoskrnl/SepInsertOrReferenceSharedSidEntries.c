/*
 * XREFs of SepInsertOrReferenceSharedSidEntries @ 0x1409CE9FC
 * Callers:
 *     SepSetTokenCapabilities @ 0x140710278 (SepSetTokenCapabilities.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     RtlInsertEntryHashTable @ 0x1402989F0 (RtlInsertEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x1402B8170 (RtlRemoveEntryHashTable.c)
 *     RtlCopySid @ 0x1406D4890 (RtlCopySid.c)
 *     SepFindSharedSidEntry @ 0x1409CE95C (SepFindSharedSidEntry.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepInsertOrReferenceSharedSidEntries(unsigned int **a1, unsigned int **a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // r15d
  unsigned int v7; // ebp
  __int64 v8; // rsi
  signed __int64 v9; // r12
  signed __int64 v10; // r13
  PRTL_DYNAMIC_HASH_TABLE_ENTRY SharedSidEntry; // rax
  unsigned int *Blink; // rax
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *Pool2; // rax
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  ULONG_PTR v17; // r8
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v18; // rdi
  __int64 v19; // rax
  volatile signed __int64 *v20; // rdi
  unsigned int v23; // [rsp+78h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v6 = a3;
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(g_SepSidMapping, 0LL);
  v8 = 0LL;
  if ( !v6 )
    goto LABEL_23;
  v9 = (char *)a1 - (char *)a2;
  v10 = (char *)a2 - (char *)a1;
  while ( 1 )
  {
    *(_DWORD *)((char *)a1 + v10 + 8) = *(_DWORD *)((char *)a1 + v10 + v9 + 8);
    SharedSidEntry = SepFindSharedSidEntry(*a1);
    if ( SharedSidEntry )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)&SharedSidEntry[1]) <= 1 )
        __fastfail(0xEu);
      Blink = (unsigned int *)SharedSidEntry[1].Linkage.Blink;
      goto LABEL_12;
    }
    v23 = 8 * *((unsigned __int8 *)*a1 + 1) + 96;
    Pool2 = (struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *)ExAllocatePool2(256LL, v23, 1934845267LL);
    v14 = Pool2;
    if ( !Pool2 )
      break;
    Pool2[1].Linkage.Blink = (struct _LIST_ENTRY *)&Pool2[1].Signature;
    Pool2[1].Linkage.Flink = (struct _LIST_ENTRY *)1;
    RtlCopySid(v23 - 40, &Pool2[1].Signature, *a1);
    v15 = (unsigned int)*((unsigned __int8 *)*a1 + 1) - 1;
    v16 = (*a1)[v15 + 2];
    v17 = v16 + 1;
    if ( (_DWORD)v16 )
      v17 = (*a1)[v15 + 2];
    if ( !RtlInsertEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(g_SepSidMapping + 8), v14, v17, 0LL) )
    {
      v7 = -1073741823;
      ExFreePoolWithTag(v14, 0x73536553u);
      goto LABEL_16;
    }
    Blink = (unsigned int *)v14[1].Linkage.Blink;
    v6 = a3;
LABEL_12:
    *(unsigned int **)((char *)a1 + v10) = Blink;
    v8 = (unsigned int)(v8 + 1);
    a1 += 2;
    if ( (unsigned int)v8 >= v6 )
      goto LABEL_23;
  }
  v7 = -1073741801;
LABEL_16:
  if ( (_DWORD)v8 )
  {
    do
    {
      v18 = SepFindSharedSidEntry(*a2);
      v19 = _InterlockedDecrement64((volatile signed __int64 *)&v18[1]);
      if ( v19 <= 0 )
      {
        if ( v19 )
          __fastfail(0xEu);
        if ( RtlRemoveEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(g_SepSidMapping + 8), v18, 0LL) )
          ExFreePoolWithTag(v18, 0);
      }
      a2 += 2;
      --v8;
    }
    while ( v8 );
  }
LABEL_23:
  v20 = (volatile signed __int64 *)g_SepSidMapping;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)g_SepSidMapping, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v20);
  KeAbPostRelease((ULONG_PTR)v20);
  KeLeaveCriticalRegion();
  return v7;
}
