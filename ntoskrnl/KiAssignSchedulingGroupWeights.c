/*
 * XREFs of KiAssignSchedulingGroupWeights @ 0x1402F1A84
 * Callers:
 *     KeSetSchedulingGroupWeights @ 0x140200CE0 (KeSetSchedulingGroupWeights.c)
 *     KeRemoveSchedulingGroup @ 0x1402F1480 (KeRemoveSchedulingGroup.c)
 *     KeInsertSchedulingGroup @ 0x1402F161C (KeInsertSchedulingGroup.c)
 *     KeSetSchedulingGroupCpuRates @ 0x1402F19B4 (KeSetSchedulingGroupCpuRates.c)
 *     KeUpdateGroupSchedulingConstants @ 0x1403AA794 (KeUpdateGroupSchedulingConstants.c)
 * Callees:
 *     KiUpdateCpuTargetByWeight @ 0x1402F1C6C (KiUpdateCpuTargetByWeight.c)
 */

__int64 __fastcall KiAssignSchedulingGroupWeights(int a1, char a2, __int64 a3)
{
  unsigned int v5; // edi
  __int64 *v6; // rbx
  __int64 *v7; // rsi
  __int64 *v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdx

  if ( a1 )
  {
    if ( !a3 )
    {
      v5 = KiGroupSchedulingMinimumRate;
LABEL_6:
      v6 = (__int64 *)KiSchedulingGroupList;
      v7 = &KiSchedulingGroupList;
      goto LABEL_7;
    }
    v5 = *(_DWORD *)(a3 + 12);
  }
  else
  {
    if ( a3 )
    {
      if ( !*(_DWORD *)(a3 + 20) )
        return result;
      v5 = *(_DWORD *)(a3 + 16);
    }
    else
    {
      if ( !KiGroupSchedulingTotalWeight )
        return result;
      v5 = KiGroupSchedulingMinimumWeight;
    }
    if ( !a3 )
      goto LABEL_6;
  }
  v7 = (__int64 *)(a3 + 80);
  v6 = *(__int64 **)(a3 + 80);
  do
  {
LABEL_7:
    v8 = v6 - 7;
    result = *((_DWORD *)v6 - 13) & 1;
    if ( (_DWORD)result == a1 )
    {
      v10 = (*(unsigned __int16 *)v8 << 7) % v5;
      result = (*(unsigned __int16 *)v8 << 7) / v5;
      *((_DWORD *)v8 + 2) = result;
      if ( !a1 )
      {
        LOBYTE(v10) = a2;
        result = KiUpdateCpuTargetByWeight(v8, v10);
      }
    }
    v6 = (__int64 *)*v6;
  }
  while ( v6 != v7 );
  return result;
}
