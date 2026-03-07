_QWORD *__fastcall MiReleaseSystemCacheView(__int64 a1, unsigned __int64 a2)
{
  _QWORD *result; // rax
  __int64 v3; // rbx
  __int64 SystemCacheReverseMap; // rdi
  unsigned __int8 CurrentIrql; // dl
  int v6; // esi
  unsigned __int64 v7; // rdi
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // r10
  unsigned __int8 v10; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf
  signed __int32 v15[8]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v16[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v17; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-18h]

  result = 0LL;
  v18 = 0LL;
  v3 = a1;
  v17 = 0LL;
  if ( a2 )
  {
    SystemCacheReverseMap = MiGetSystemCacheReverseMap(a2);
    v3 = *(_QWORD *)(qword_140C67048 + 8LL * ((*(_DWORD *)(SystemCacheReverseMap + 32) >> 6) & 0x3FF));
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 17052) )
      return result;
    SystemCacheReverseMap = 0LL;
  }
  v16[1] = v16;
  *((_QWORD *)&v17 + 1) = qword_140C66D30;
  v16[0] = v16;
  *(_QWORD *)&v17 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v9) = 4;
    else
      v9 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v9;
  }
  LOBYTE(v18) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v17, qword_140C66D30);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)qword_140C66D30, (__int64)&v17) )
  {
    KxWaitForLockOwnerShip(&v17);
  }
  _InterlockedOr(v15, 0);
  v6 = KiTbFlushTimeStamp;
  MiRebalanceSystemCacheFreedViews(v3, (unsigned int)KiTbFlushTimeStamp, 0LL);
  if ( SystemCacheReverseMap )
    MiFreeSystemCacheView(v3, v6, (__int64 *)SystemCacheReverseMap);
  else
    MiGetSystemCacheRegionsToFree(v3, v16);
  KxReleaseQueuedSpinLock(&v17);
  v7 = (unsigned __int8)v18;
  if ( KiIrqlFlags )
  {
    v10 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v10 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
      v14 = (v13 & v12[5]) == 0;
      v12[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v7);
  result = v16;
  if ( (_QWORD *)v16[0] != v16 )
    return (_QWORD *)MiReturnSystemCacheRegionsToKva(v3, v16);
  return result;
}
