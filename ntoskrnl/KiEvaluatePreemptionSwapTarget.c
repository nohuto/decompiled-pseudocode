/*
 * XREFs of KiEvaluatePreemptionSwapTarget @ 0x140574C20
 * Callers:
 *     KiHeteroAttemptPreemptionSwap @ 0x1404591A8 (KiHeteroAttemptPreemptionSwap.c)
 * Callees:
 *     KiGenerateHeteroSets @ 0x1404590A0 (KiGenerateHeteroSets.c)
 *     KiHeteroComputeThreadImportance @ 0x140459632 (KiHeteroComputeThreadImportance.c)
 *     KiHeteroIsSwapBeneficialForPerformance @ 0x140574E70 (KiHeteroIsSwapBeneficialForPerformance.c)
 */

bool __fastcall KiEvaluatePreemptionSwapTarget(__int64 a1, __int64 a2, char *a3)
{
  bool v4; // zf
  char *v7; // rdi
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  _WORD *v12; // rdx
  __int64 v13; // rdx
  unsigned int v14; // r8d
  int v15; // edx
  unsigned int v16; // ecx
  unsigned __int16 v17; // ax
  __int64 v18; // rdx
  __int64 v19; // r9
  unsigned __int8 v20; // r10
  __int64 v22; // [rsp+40h] [rbp-28h] BYREF
  __int64 v23; // [rsp+50h] [rbp-18h]

  v4 = (*(_BYTE *)(a1 + 35) & 8) == 0;
  v23 = 0LL;
  if ( !v4 )
    return 0;
  v7 = *(char **)(a1 + 56);
  if ( *v7 < 0 )
    return 0;
  v8 = *a3;
  v9 = *v7 & 0x7F;
  if ( v9 > v8 )
    return 0;
  if ( v9 == v8 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    if ( !v10 )
      v10 = *(_QWORD *)(a1 + 8);
    v11 = *(unsigned __int8 *)(a2 + 208);
    v12 = *(_WORD **)(v10 + 576);
    v13 = (unsigned __int16)v11 >= *v12 ? 0LL : *(_QWORD *)&v12[4 * v11 + 4];
    if ( (v13 & *(_QWORD *)(a2 + 200)) == 0 )
      return 0;
    v14 = *(unsigned __int8 *)(v10 + 125);
    if ( v14 >= 5 )
      v14 = KiDynamicHeteroCpuPolicy[2 * (v7[64] & 7) + (((unsigned __int64)(unsigned __int8)v7[64] >> 6) & 1)];
    KiGenerateHeteroSets(
      *(_QWORD *)(a2 + 192),
      v13,
      v14,
      ((unsigned __int8)v7[64] >> 3) & 7,
      v7[64] & 7,
      ((unsigned __int8)v7[64] >> 6) & 1,
      &v22);
    if ( (*(_QWORD *)(a2 + 200) & v23) == 0 )
      return 0;
    v15 = 1 << *a3;
    if ( (v15 & *(_DWORD *)(a1 + 32472)) != 0 || (v15 & *(_DWORD *)(*(_QWORD *)(a1 + 34888) + 8LL)) != 0 )
      return 0;
  }
  v16 = v7[64] & 7;
  if ( v16 > 2 && v16 - 5 > 1 )
    return 0;
  v17 = KiHeteroComputeThreadImportance(v16, *v7 & 0x7F);
  if ( v17 > *((_WORD *)a3 + 9) )
    return 0;
  if ( v17 < *((_WORD *)a3 + 9) )
    return 1;
  LOBYTE(v19) = a3[16];
  LOBYTE(v18) = (v20 >> 3) & 7;
  return (unsigned int)KiHeteroIsSwapBeneficialForPerformance(a1, v18, a2, v19) != 0;
}
