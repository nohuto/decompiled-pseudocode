void *__fastcall ExpAllocatePoolWithQuotaTag(POOL_TYPE a1, ULONG_PTR a2, __int64 a3, int a4)
{
  POOL_TYPE v4; // edi
  struct _KTHREAD *CurrentThread; // rax
  int v6; // r14d
  ULONG v7; // esi
  struct _KPROCESS *Process; // rbp
  ULONG_PTR PoolWithTagFromNode; // rax
  void *v10; // rbx
  ULONG_PTR HeapFromVA; // rax
  ULONG_PTR Amount[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  LODWORD(v14) = 0;
  Amount[0] = 0LL;
  v4 = a1 & 0xFFFFFFF7;
  CurrentThread = KeGetCurrentThread();
  v6 = a1 & 8;
  v7 = a3;
  if ( (a1 & 8) == 0 )
    v4 = a1;
  Process = CurrentThread->ApcState.Process;
  if ( Process != PsInitialSystemProcess )
    v4 += 8;
  PoolWithTagFromNode = ExpAllocatePoolWithTagFromNode(v4, a2, a3, a4, 0);
  v10 = (void *)PoolWithTagFromNode;
  if ( PoolWithTagFromNode )
  {
    if ( (v4 & 8) == 0 )
      return v10;
    if ( ExpSpecialAllocations )
    {
      HeapFromVA = ExGetHeapFromVA(PoolWithTagFromNode);
      if ( (unsigned int)ExpHpIsSpecialPoolHeap(HeapFromVA) )
        return v10;
    }
    ExpStampPoolWithQuotaProcess((ULONG_PTR)v10, (unsigned int)v4, 0LL, 1, Amount, &v14);
    if ( PsChargeProcessPoolQuota(Process, (POOL_TYPE)(v4 & 1), Amount[0]) >= 0 )
    {
      ExpStampPoolWithQuotaProcess((ULONG_PTR)v10, (unsigned int)v4, (__int64)Process, 0, Amount, &v14);
      ObfReferenceObjectWithTag(Process, v7);
      return v10;
    }
    ExFreePoolWithTag(v10, v7);
    v10 = 0LL;
  }
  if ( !v6 )
    RtlRaiseStatus(-1073741670);
  return v10;
}
