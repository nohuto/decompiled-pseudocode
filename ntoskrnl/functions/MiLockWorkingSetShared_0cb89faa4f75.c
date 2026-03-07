__int64 __fastcall MiLockWorkingSetShared(__int64 a1)
{
  unsigned __int8 v1; // al
  volatile __int32 *v2; // rbx
  unsigned __int8 v3; // di
  unsigned __int8 CurrentIrql; // dl
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // r8
  _DWORD *v8; // r9
  __int64 v9; // r8
  signed __int32 v10; // [rsp+30h] [rbp+8h]
  signed __int32 v11; // [rsp+30h] [rbp+8h]
  signed __int32 v12; // [rsp+38h] [rbp+10h]

  v1 = *(_BYTE *)(a1 + 184) & 7;
  if ( v1 > 4u )
  {
    if ( v1 != 5 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v7) = 4;
        else
          v7 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v7;
      }
      return CurrentIrql;
    }
    goto LABEL_3;
  }
  if ( v1 != 2 )
  {
LABEL_3:
    v2 = (volatile __int32 *)(a1 + 192);
    goto LABEL_4;
  }
  v2 = (volatile __int32 *)&unk_140C69E00;
LABEL_4:
  v3 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v3 <= 0xFu )
  {
    v8 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v3 == 2 )
      LODWORD(v9) = 4;
    else
      v9 = (-1LL << (v3 + 1)) & 4;
    v8[5] |= v9;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v2, v3);
  }
  else
  {
    _m_prefetchw((const void *)v2);
    v10 = *v2 & 0x7FFFFFFF;
    v12 = _InterlockedCompareExchange(v2, v10 + 1, v10);
    if ( v12 != v10 )
    {
      while ( v12 >= 0 )
      {
        v11 = v12;
        v12 = _InterlockedCompareExchange(v2, v12 + 1, v12);
        if ( v12 == v11 )
          goto LABEL_7;
      }
      ExpWaitForSpinLockSharedAndAcquire((unsigned __int64)v2, v3);
    }
  }
LABEL_7:
  if ( *((_DWORD *)v2 + 1) )
    _InterlockedExchange(v2 + 1, 0);
  return v3;
}
