/*
 * XREFs of HalpDmaAllocateMapRegistersAtHighLevel @ 0x14050E094
 * Callers:
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403A9AD0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalAllocateCrashDumpRegisters @ 0x1404FF170 (HalAllocateCrashDumpRegisters.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x1403B4514 (HalpDmaGetAdapterVersion.c)
 *     HalpDmaPrependTranslations @ 0x1404541B6 (HalpDmaPrependTranslations.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3 @ 0x1404FD200 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel @ 0x1404FF010 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel @ 0x1404FF094 (HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel.c)
 *     HalpDmaForceAllocation @ 0x14050EBC0 (HalpDmaForceAllocation.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x140513794 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2.c)
 */

__int64 __fastcall HalpDmaAllocateMapRegistersAtHighLevel(__int64 a1, int *a2)
{
  char v2; // al
  char v3; // r13
  int v4; // r14d
  __int64 v6; // r15
  int v8; // esi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 result; // rax
  __int64 ScatterPagesFromScatterPoolAtHighLevel; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 ScatterPagesFromContiguousPoolAtHighLevelV3; // rax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // r8
  __int64 v24; // rax
  int v25; // [rsp+70h] [rbp+40h] BYREF
  int v26; // [rsp+78h] [rbp+48h] BYREF

  v2 = *(_BYTE *)(a1 + 442);
  v3 = 0;
  v4 = *a2;
  v6 = *(_QWORD *)(a1 + 160);
  v25 = 0;
  v8 = 0;
  v26 = 0;
  v9 = 0LL;
  if ( v2 )
  {
    if ( *(_QWORD *)(a1 + 112) )
      goto LABEL_32;
    v10 = *(_DWORD *)(a1 + 120) == 0;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 96) )
      goto LABEL_32;
    v10 = *(_DWORD *)(a1 + 104) == 0;
  }
  if ( v10 )
  {
    if ( !*(_BYTE *)(a1 + 345) )
    {
      if ( v2 )
      {
        result = HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel(a1);
        v8 = v26;
        v9 = result;
        if ( v26 == v4 )
          return result;
      }
      else
      {
        result = HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel(a1);
        v9 = result;
        if ( result )
          return result;
      }
    }
    if ( *(_BYTE *)(a1 + 442) )
    {
      ScatterPagesFromScatterPoolAtHighLevel = HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel(a1);
      if ( ScatterPagesFromScatterPoolAtHighLevel )
      {
        v13 = HalpDmaPrependTranslations(ScatterPagesFromScatterPoolAtHighLevel, v25, v9);
        v8 += v25;
        v9 = v13;
        v26 = v8;
      }
      if ( v8 == v4 )
        return v9;
      if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
        ScatterPagesFromContiguousPoolAtHighLevelV3 = HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2(
                                                        v14,
                                                        v6,
                                                        v15,
                                                        &v25);
      else
        ScatterPagesFromContiguousPoolAtHighLevelV3 = HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3(
                                                        v14,
                                                        v6,
                                                        v15,
                                                        (unsigned int *)&v25);
      if ( ScatterPagesFromContiguousPoolAtHighLevelV3 )
      {
        v17 = HalpDmaPrependTranslations(ScatterPagesFromContiguousPoolAtHighLevelV3, v25, v9);
        v8 += v25;
        v9 = v17;
        v26 = v8;
      }
      if ( v8 == v4 )
        return v9;
    }
    else
    {
      result = HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel(a1);
      v9 = result;
      if ( result )
        return result;
    }
    if ( HalpHiberInProgress )
    {
      if ( *(_BYTE *)(a1 + 442) )
      {
        *a2 = v26;
      }
      else if ( !v9 )
      {
        *a2 = 0;
      }
      return v9;
    }
    v8 = v26;
  }
LABEL_32:
  if ( *(_BYTE *)(a1 + 442) )
  {
    v18 = a1 + 112;
    while ( 1 )
    {
      if ( *(_BYTE *)(a1 + 345) )
      {
        v9 = 0LL;
      }
      else
      {
        result = HalpDmaForceAllocation((unsigned int)&v26, *(_QWORD *)(a1 + 56), v18, v4, 0, (__int64)&v26);
        v8 = v26;
        v9 = result;
        if ( v26 == v4 )
          return result;
      }
      v19 = HalpDmaForceAllocation((unsigned int)&v25, *(_QWORD *)(v6 + 56), (int)v6 + 112, v4 - v8, 0, (__int64)&v25);
      if ( v19 )
      {
        v21 = HalpDmaPrependTranslations(v19, v25, v9);
        v8 += v25;
        v9 = v21;
        v26 = v8;
      }
      if ( v8 == v4 )
        return v9;
      v22 = HalpDmaForceAllocation(v20, *(_QWORD *)(v6 + 48), (int)v6 + 96, v4 - v8, 0, (__int64)&v25);
      if ( v22 )
      {
        v24 = HalpDmaPrependTranslations(v22, v25, v9);
        v8 += v25;
        v23 = (_QWORD *)(v6 + 96);
        v26 = v8;
        v9 = v24;
      }
      if ( v8 == v4 )
        return v9;
      if ( v3 )
        goto LABEL_50;
      *(_DWORD *)(a1 + 120) = 0;
      v18 = a1 + 112;
      *(_QWORD *)(a1 + 112) = 0LL;
      v3 = 1;
      *(_QWORD *)(v6 + 112) = 0LL;
      *(_DWORD *)(v6 + 120) = 0;
      *v23 = 0LL;
      *(_DWORD *)(v6 + 104) = 0;
    }
  }
  if ( *(_BYTE *)(a1 + 345)
    || (result = HalpDmaForceAllocation(a1, *(_QWORD *)(a1 + 48), (int)a1 + 96, v4, 1, 0LL)) == 0 )
  {
    result = HalpDmaForceAllocation(a1, *(_QWORD *)(v6 + 48), (int)v6 + 96, v4, 1, 0LL);
    if ( !result )
    {
LABEL_50:
      *a2 = 0;
      return 0LL;
    }
  }
  return result;
}
