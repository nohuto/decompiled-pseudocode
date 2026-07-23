/*
 * XREFs of ExAllocatePool3 @ 0x1409B4270
 * Callers:
 *     VerifierExAllocatePool3 @ 0x1409D4B20 (VerifierExAllocatePool3.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x1402BC770 (ExAllocatePoolWithTagPriority.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x1402BC810 (ExpAllocatePoolWithTagFromNode.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402D37D0 (ExAllocatePoolWithQuotaTag.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     ExpPoolFlagsToPoolType @ 0x1409B4010 (ExpPoolFlagsToPoolType.c)
 */

PVOID __fastcall ExAllocatePool3(__int64 a1, SIZE_T a2, ULONG a3, __int64 a4, unsigned int a5)
{
  char v5; // bp
  char v9; // r15
  EX_POOL_PRIORITY v10; // edi
  NTSTATUS v11; // eax
  unsigned int i; // edx
  _BYTE v14[4]; // [rsp+30h] [rbp-28h] BYREF
  POOL_TYPE PoolType[9]; // [rsp+34h] [rbp-24h] BYREF
  char v16; // [rsp+70h] [rbp+18h] BYREF

  PoolType[0] = NonPagedPool;
  v5 = 0;
  v16 = 0;
  v14[0] = 0;
  v9 = a1;
  v10 = NormalPoolPriority;
  if ( !a3 )
  {
LABEL_2:
    v11 = -1073741811;
LABEL_3:
    if ( (v9 & 0x20) != 0 )
      RtlRaiseStatus(v11);
    return 0LL;
  }
  v11 = ExpPoolFlagsToPoolType(a1, 0, (int *)PoolType, &v16, v14);
  if ( v11 < 0 )
    goto LABEL_3;
  for ( i = 0; i < a5; a4 += 16LL )
  {
    if ( (unsigned __int8)*(_QWORD *)a4 == 1 && !v16 )
    {
      v10 = *(_DWORD *)(a4 + 8);
      if ( (v10 & 0xFFFFFFCF) != 0 || v10 == (HighPoolPriority|NormalPoolPriority) )
        goto LABEL_2;
      v5 = 1;
    }
    else if ( (*(_QWORD *)a4 & 0x100LL) == 0 )
    {
      goto LABEL_2;
    }
    ++i;
  }
  if ( v16 )
    return ExAllocatePoolWithQuotaTag(PoolType[0], a2, a3);
  if ( v5 )
    return ExAllocatePoolWithTagPriority(PoolType[0], a2, a3, v10);
  return (PVOID)ExpAllocatePoolWithTagFromNode(
                  PoolType[0],
                  a2,
                  a3,
                  KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0] | 0x80000000,
                  v14[0] != 0);
}
