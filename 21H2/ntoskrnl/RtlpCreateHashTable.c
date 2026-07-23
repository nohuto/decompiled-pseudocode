/*
 * XREFs of RtlpCreateHashTable @ 0x140376330
 * Callers:
 *     RtlCreateHashTable @ 0x140376310 (RtlCreateHashTable.c)
 *     RtlCreateHashTableEx @ 0x14039B160 (RtlCreateHashTableEx.c)
 *     SepBuildCapPolicyTable @ 0x1403CBCDC (SepBuildCapPolicyTable.c)
 *     SepInitializeSingletonAttributesStructures @ 0x140A48A00 (SepInitializeSingletonAttributesStructures.c)
 * Callees:
 *     RtlpAllocateSecondLevelDir @ 0x140250FEC (RtlpAllocateSecondLevelDir.c)
 *     RtlpInitializeSecondLevelDir @ 0x1403764A0 (RtlpInitializeSecondLevelDir.c)
 *     RtlDeleteHashTable @ 0x140378F00 (RtlDeleteHashTable.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char __fastcall RtlpCreateHashTable(PVOID *a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // esi
  char *PoolWithTag; // rbx
  int v10; // eax
  PVOID v11; // rax
  __int64 v12; // r8
  unsigned int v14; // ebp
  char v15; // cl
  unsigned int v16; // ebp
  int v17; // r15d
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  __int64 v20; // rdi
  PVOID SecondLevelDir; // rax
  __int64 v22; // rdx
  __int64 v23; // r8

  v4 = a2 - 1;
  if ( ((a2 - 1) & a2) != 0 || a2 - 128 > 0x7FFF00 )
    return 0;
  PoolWithTag = (char *)*a1;
  v10 = 0;
  if ( !*a1 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x62615448u);
    if ( !PoolWithTag )
      return 0;
    v10 = 1;
  }
  *(_QWORD *)(PoolWithTag + 20) = 0LL;
  *(_QWORD *)(PoolWithTag + 28) = 0LL;
  *((_DWORD *)PoolWithTag + 9) = 0;
  *((_DWORD *)PoolWithTag + 3) = 0;
  *(_DWORD *)PoolWithTag = a4 | v10;
  *((_DWORD *)PoolWithTag + 2) = a2;
  *((_DWORD *)PoolWithTag + 4) = v4;
  *((_DWORD *)PoolWithTag + 1) = a3;
  if ( a2 > 0x80 )
  {
    _BitScanReverse(&v14, a2 + 127);
    v15 = v14;
    v16 = v14 - 7;
    v17 = (a2 + 127) ^ (1 << v15);
    v18 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x62615448u);
    v19 = v18;
    if ( v18 )
    {
      memset(v18, 0, 0x80uLL);
      v20 = 0LL;
      *((_QWORD *)PoolWithTag + 4) = v19;
      while ( 1 )
      {
        SecondLevelDir = RtlpAllocateSecondLevelDir(v20);
        if ( !SecondLevelDir )
          break;
        if ( (unsigned int)v20 >= v16 )
          v22 = (unsigned int)(v17 + 1);
        else
          v22 = (unsigned int)(1 << (v20 + 7));
        RtlpInitializeSecondLevelDir(SecondLevelDir, v22);
        v19[v20] = v23;
        v20 = (unsigned int)(v20 + 1);
        if ( (unsigned int)v20 > v16 )
          goto LABEL_7;
      }
    }
    goto LABEL_18;
  }
  v11 = RtlpAllocateSecondLevelDir(0);
  if ( !v11 )
  {
LABEL_18:
    RtlDeleteHashTable((PRTL_DYNAMIC_HASH_TABLE)PoolWithTag);
    return 0;
  }
  RtlpInitializeSecondLevelDir(v11, *((unsigned int *)PoolWithTag + 2));
  *((_QWORD *)PoolWithTag + 4) = v12;
LABEL_7:
  *a1 = PoolWithTag;
  return 1;
}
