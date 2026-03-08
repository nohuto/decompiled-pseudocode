/*
 * XREFs of RtlpCreateHashTable @ 0x1402B8550
 * Callers:
 *     RtlCreateHashTable @ 0x1402B8530 (RtlCreateHashTable.c)
 *     SepBuildCapPolicyTable @ 0x1403A918C (SepBuildCapPolicyTable.c)
 *     RtlCreateHashTableEx @ 0x1403C1A20 (RtlCreateHashTableEx.c)
 *     SepInitializeSingletonAttributesStructures @ 0x140B49204 (SepInitializeSingletonAttributesStructures.c)
 * Callees:
 *     RtlpAllocateSecondLevelDir @ 0x1402B86BC (RtlpAllocateSecondLevelDir.c)
 *     RtlpInitializeSecondLevelDir @ 0x1402B86E8 (RtlpInitializeSecondLevelDir.c)
 *     RtlDeleteHashTable @ 0x1403BBB80 (RtlDeleteHashTable.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

char __fastcall RtlpCreateHashTable(__int64 *a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // esi
  __int64 Pool2; // rbx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned int v14; // ebp
  char v15; // cl
  unsigned int v16; // ebp
  int v17; // r15d
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  __int64 v20; // rdi
  __int64 SecondLevelDir; // rax
  __int64 v22; // rdx
  __int64 v23; // r8

  v4 = a2 - 1;
  if ( ((a2 - 1) & a2) != 0 || a2 - 128 > 0x7FFF00 )
    return 0;
  Pool2 = *a1;
  v10 = 0;
  if ( !*a1 )
  {
    Pool2 = ExAllocatePool2(64LL, 40LL, 1650545736LL);
    if ( !Pool2 )
      return 0;
    v10 = 1;
  }
  *(_QWORD *)(Pool2 + 20) = 0LL;
  *(_QWORD *)(Pool2 + 28) = 0LL;
  *(_DWORD *)(Pool2 + 36) = 0;
  *(_DWORD *)(Pool2 + 12) = 0;
  *(_DWORD *)Pool2 = a4 | v10;
  *(_DWORD *)(Pool2 + 8) = a2;
  *(_DWORD *)(Pool2 + 16) = v4;
  *(_DWORD *)(Pool2 + 4) = a3;
  if ( a2 > 0x80 )
  {
    _BitScanReverse(&v14, a2 + 127);
    v15 = v14;
    v16 = v14 - 7;
    v17 = (a2 + 127) ^ (1 << v15);
    v18 = (_QWORD *)ExAllocatePool2(64LL, 128LL, 1650545736LL);
    v19 = v18;
    if ( v18 )
    {
      memset(v18, 0, 0x80uLL);
      v20 = 0LL;
      *(_QWORD *)(Pool2 + 32) = v19;
      while ( 1 )
      {
        SecondLevelDir = RtlpAllocateSecondLevelDir((unsigned int)v20);
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
  v11 = RtlpAllocateSecondLevelDir(0LL);
  if ( !v11 )
  {
LABEL_18:
    RtlDeleteHashTable((PRTL_DYNAMIC_HASH_TABLE)Pool2);
    return 0;
  }
  RtlpInitializeSecondLevelDir(v11, *(unsigned int *)(Pool2 + 8));
  *(_QWORD *)(Pool2 + 32) = v12;
LABEL_7:
  *a1 = Pool2;
  return 1;
}
