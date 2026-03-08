/*
 * XREFs of PsAddProcessEnergyValues @ 0x14023820C
 * Callers:
 *     PspFoldProcessAccountingIntoJob @ 0x1406F8590 (PspFoldProcessAccountingIntoJob.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x1406F92F0 (PspQueryProcessAccountingInformationCallback.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1406FAE20 (PspQueryJobHierarchyAccountingInformation.c)
 *     PopEtEnergyTrackerUpdateAggregate @ 0x140702020 (PopEtEnergyTrackerUpdateAggregate.c)
 * Callees:
 *     RtlTimelineBitmapMerge @ 0x14023840C (RtlTimelineBitmapMerge.c)
 */

__int64 __fastcall PsAddProcessEnergyValues(_QWORD *a1, __int64 a2)
{
  __int64 v5; // r9
  __int64 v6; // rax
  _DWORD *v7; // rdx
  __int64 v8; // rbx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  _DWORD *v11; // rdx
  __int64 v12; // r9
  unsigned int v13; // ecx
  unsigned int v14; // eax
  int v15; // r9d
  int *v16; // rdx
  int v17; // ecx
  int v18; // eax
  int *v19; // rdx
  int v20; // r9d
  int v21; // eax
  int *v22; // rdx
  int v23; // r9d
  int v24; // eax
  int *v25; // rdx
  int v26; // r9d
  int v27; // eax
  int *v28; // rdx
  int v29; // r9d
  _QWORD *v30; // r11
  __int64 v31; // rdi
  _QWORD *v32; // r10
  __int64 v33; // r11
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 result; // rax

  a1[8] += *(_QWORD *)(a2 + 64);
  a1[9] += *(_QWORD *)(a2 + 72);
  v5 = 3LL;
  a1[10] += *(_QWORD *)(a2 + 80);
  a1[11] += *(_QWORD *)(a2 + 88);
  v6 = *(_QWORD *)(a2 + 96);
  v7 = (_DWORD *)a1 + 27;
  a1[12] += v6;
  v8 = a2 - (_QWORD)a1;
  do
  {
    *v7 ^= (*v7 ^ (*v7 + *(_DWORD *)((char *)v7 + v8))) & 0x7FFFFFFF;
    v9 = *(v7 - 1);
    v10 = *(_DWORD *)((char *)v7 + v8 - 4);
    v7 += 2;
    if ( v9 <= v10 )
      v9 = v10;
    *(v7 - 3) = v9;
    --v5;
  }
  while ( v5 );
  v11 = (_DWORD *)a1 + 97;
  v12 = 5LL;
  do
  {
    *v11 ^= (*v11 ^ (*v11 + *(_DWORD *)((char *)v11 + v8))) & 0x7FFFFFFF;
    v13 = *(v11 - 1);
    v14 = *(_DWORD *)((char *)v11 + v8 - 4);
    v11 += 2;
    if ( v13 <= v14 )
      v13 = v14;
    *(v11 - 3) = v13;
    --v12;
  }
  while ( v12 );
  v15 = *(_DWORD *)(a2 + 128);
  v16 = (int *)(a1 + 16);
  v17 = -1;
  if ( v15 == -1 || (v18 = *v16 + v15, ~v15 < (unsigned int)*v16) )
    v18 = -1;
  *v16 = v18;
  v19 = (int *)a1 + 33;
  v20 = *(_DWORD *)(a2 + 132);
  if ( v20 == -1 || (v21 = *v19 + v20, ~v20 < (unsigned int)*v19) )
    v21 = -1;
  *v19 = v21;
  v22 = (int *)(a1 + 17);
  v23 = *(_DWORD *)(a2 + 136);
  if ( v23 == -1 || (v24 = *v22 + v23, ~v23 < (unsigned int)*v22) )
    v24 = -1;
  *v22 = v24;
  v25 = (int *)(a1 + 53);
  v26 = *(_DWORD *)(a2 + 424);
  if ( v26 == -1 || (v27 = *v25 + v26, ~v26 < (unsigned int)*v25) )
    v27 = -1;
  *v25 = v27;
  v28 = (int *)a1 + 107;
  v29 = *(_DWORD *)(a2 + 428);
  if ( v29 != -1 && ~v29 >= (unsigned int)*v28 )
    v17 = *v28 + v29;
  *v28 = v17;
  v30 = a1 + 34;
  v31 = 14LL;
  do
  {
    RtlTimelineBitmapMerge(v30, (char *)v30 + v8);
    v30 = (_QWORD *)(v33 + 8);
    --v31;
  }
  while ( v31 );
  v34 = 4LL;
  do
  {
    v35 = 2LL;
    do
    {
      *v32 += *(_QWORD *)((char *)v32 + v8);
      v32[18] += *(_QWORD *)((char *)v32 + v8 + 144);
      result = *(_QWORD *)((char *)v32 + v8 + 208);
      v32[26] += result;
      ++v32;
      --v35;
    }
    while ( v35 );
    --v34;
  }
  while ( v34 );
  return result;
}
