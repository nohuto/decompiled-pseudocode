/*
 * XREFs of KiUpdateMinimumWeight @ 0x1402F1B38
 * Callers:
 *     KeSetSchedulingGroupWeights @ 0x140200CE0 (KeSetSchedulingGroupWeights.c)
 *     KeRemoveSchedulingGroup @ 0x1402F1480 (KeRemoveSchedulingGroup.c)
 *     KeSetSchedulingGroupCpuRates @ 0x1402F19B4 (KeSetSchedulingGroupCpuRates.c)
 * Callees:
 *     <none>
 */

char __fastcall KiUpdateMinimumWeight(int a1, char a2, _DWORD *a3)
{
  int v5; // r9d
  unsigned int v6; // ecx
  __int64 *v7; // rbx
  __int64 *v8; // rdx
  int v9; // r10d
  int v10; // r11d
  unsigned int v11; // eax

  if ( a1 )
  {
    if ( a3 )
      v5 = a3[3];
    else
      v5 = KiGroupSchedulingMinimumRate;
    v6 = 10000;
  }
  else
  {
    if ( a3 )
      v5 = a3[4];
    else
      v5 = KiGroupSchedulingMinimumWeight;
    v6 = 9;
  }
  v7 = (__int64 *)(a3 + 20);
  if ( !a3 )
    v7 = &KiSchedulingGroupList;
  v8 = (__int64 *)*v7;
  v9 = 0;
  v10 = 0;
  do
  {
    if ( (*((_DWORD *)v8 - 13) & 1) == a1 )
    {
      if ( !a2 && *((unsigned __int16 *)v8 - 28) == v5 )
        return 0;
      v11 = *((unsigned __int16 *)v8 - 28);
      ++v10;
      v9 += v11;
      if ( v11 >= v6 )
        v11 = v6;
      v6 = v11;
    }
    v8 = (__int64 *)*v8;
  }
  while ( v8 != v7 );
  if ( a1 )
  {
    if ( v10 )
    {
      if ( a3 )
        a3[3] = v6;
      else
        KiGroupSchedulingMinimumRate = v6;
    }
    else if ( a3 )
    {
      a3[3] = 0;
    }
    else
    {
      KiGroupSchedulingMinimumRate = 0;
    }
  }
  else if ( v10 )
  {
    if ( a3 )
    {
      a3[4] = v6;
      if ( a2 )
        a3[5] = v9;
    }
    else
    {
      KiGroupSchedulingMinimumWeight = v6;
      if ( a2 )
        KiGroupSchedulingTotalWeight = v9;
    }
  }
  else if ( a3 )
  {
    a3[4] = 0;
    a3[5] = 0;
  }
  else
  {
    KiGroupSchedulingMinimumWeight = 0;
    KiGroupSchedulingTotalWeight = 0;
  }
  return 1;
}
