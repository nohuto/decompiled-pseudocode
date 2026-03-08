/*
 * XREFs of MmAllocateMemoryRanges @ 0x140A2B5D0
 * Callers:
 *     IopLiveDumpAllocateIoSpaceRanges @ 0x14094AAB0 (IopLiveDumpAllocateIoSpaceRanges.c)
 *     MiAllocateUserPhysicalRanges @ 0x140A3E4C0 (MiAllocateUserPhysicalRanges.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x140236884 (MiPartitionObjectToPartition.c)
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     MmGetNextNode @ 0x1402AB0A0 (MmGetNextNode.c)
 *     MiGetHugeRangeFromNode @ 0x1403BF1C4 (MiGetHugeRangeFromNode.c)
 *     MiReleaseMemoryRuns @ 0x14061FEB0 (MiReleaseMemoryRuns.c)
 *     MiAddRun @ 0x140A2AED0 (MiAddRun.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmAllocateMemoryRanges(ULONG_PTR a1)
{
  bool v1; // zf
  unsigned int v3; // r15d
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // r15d
  void ***v7; // rax
  int v8; // r14d
  __int64 v9; // r12
  unsigned int NextNode; // edi
  int HugeRangeFromNode; // eax
  __int64 v12; // r13
  __int128 v14; // [rsp+20h] [rbp-38h] BYREF
  PVOID P; // [rsp+30h] [rbp-28h]
  __int64 v16[4]; // [rsp+38h] [rbp-20h] BYREF
  char v17; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+50h] BYREF
  int v19; // [rsp+B0h] [rbp+58h] BYREF
  void ***v20; // [rsp+B8h] [rbp+60h]

  v17 = 0;
  v1 = *(_DWORD *)a1 == 1;
  P = 0LL;
  v14 = 0LL;
  if ( !v1 )
    return 3221225485LL;
  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 >= 8 || !*(_QWORD *)(a1 + 16) )
    return 3221225485LL;
  v4 = *(_DWORD *)(a1 + 32);
  if ( v4 >= 0 )
    LODWORD(v18) = 1;
  else
    LODWORD(v18) = (unsigned __int16)KeNumberNodes;
  v5 = v4 & 0x7FFFFFFF;
  if ( v4 >= 0 )
    v5 = v4;
  if ( v5 >= (unsigned __int16)KeNumberNodes )
    return 3221225485LL;
  if ( KeGetCurrentIrql() )
    return 3221225485LL;
  if ( (v3 & 1) == 0 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 24) != 0x40000000LL )
    return 3221225485LL;
  v6 = (v3 >> 1) & 1;
  v7 = MiPartitionObjectToPartition(*(void ***)(a1 + 8), 0, &v17);
  v20 = v7;
  if ( !v7 )
    return 3221225485LL;
  v19 = 0;
  v8 = 0;
  v9 = 0LL;
  if ( !*(_QWORD *)(a1 + 16) )
    goto LABEL_30;
  NextNode = v5;
  while ( 1 )
  {
    HugeRangeFromNode = MiGetHugeRangeFromNode((__int64)v7, NextNode, v6, 0LL);
    v12 = HugeRangeFromNode & 0x3FFFFF;
    if ( (HugeRangeFromNode & 0x3FFFFF) != 0 )
      break;
    LODWORD(v18) = v18 - 1;
    if ( !(_DWORD)v18 )
    {
      v8 = -1073741670;
      goto LABEL_25;
    }
    NextNode = MmGetNextNode(v5, &v19);
    --v9;
LABEL_20:
    if ( (unsigned __int64)++v9 >= *(_QWORD *)(a1 + 16) )
      goto LABEL_29;
    v7 = v20;
  }
  v8 = MiAddRun(a1, (__int64 *)&v14, HugeRangeFromNode);
  if ( v8 >= 0 )
    goto LABEL_20;
  v16[1] = 0LL;
  v18 = v12 << 30;
  v16[2] = (__int64)&v18;
  v16[0] = 1LL;
  MiReleaseMemoryRuns(a1, v16, 0);
LABEL_25:
  if ( (*(_DWORD *)(a1 + 4) & 4) == 0 )
  {
    MiReleaseMemoryRuns(a1, (__int64 *)&v14, 0);
LABEL_29:
    v7 = v20;
    goto LABEL_30;
  }
  v7 = v20;
  if ( (_QWORD)v14 )
    v8 = 0;
LABEL_30:
  if ( v17 )
    PsDereferencePartition((__int64)v7[25]);
  if ( v8 >= 0 )
  {
    *(_QWORD *)(a1 + 48) = P;
    *(_QWORD *)(a1 + 40) = v14;
    return 0LL;
  }
  else
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    return 3221225626LL;
  }
}
