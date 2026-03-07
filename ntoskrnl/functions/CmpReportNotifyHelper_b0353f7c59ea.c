void __fastcall CmpReportNotifyHelper(__int64 a1, __int64 a2, __int64 a3, int a4, __int128 *a5)
{
  volatile signed __int32 *v9; // r15
  __int64 KcbAtLayerHeight; // rsi
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int8 CurrentIrql; // r12
  __int64 i; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int8 v22; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  bool v26; // zf
  __int128 v27; // [rsp+40h] [rbp-38h] BYREF

  *((_QWORD *)&v27 + 1) = &v27;
  *(_QWORD *)&v27 = &v27;
  v9 = (volatile signed __int32 *)(a2 + 1680);
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
  v11 = KeAbPreAcquire((__int64)v9, 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64(v9, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 1680), v11, a2 + 1680);
  if ( v12 )
    *(_BYTE *)(v12 + 18) = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  for ( i = *(_QWORD *)(a2 + 1592); i; i = *(_QWORD *)i )
  {
    v15 = *(_QWORD *)(i + 32);
    if ( (*(_DWORD *)(v15 + 8) & 0x7FE00000u) > (*(_DWORD *)(KcbAtLayerHeight + 8) & 0x7FE00000u) )
      break;
    if ( (a4 & *(_DWORD *)(i + 48) & 0x3FFFFFFF) != 0
      && ((*(_DWORD *)(i + 48) & 0x40000000) != 0 || v15 == KcbAtLayerHeight) )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(i + 40) + 56LL);
      if ( (!a3 || *(_QWORD *)(a3 + 56) == v16) && (!v16 || (unsigned int)CmpTransIsTransActive(v16)) )
      {
        v17 = *(_QWORD *)(i + 32);
        v18 = KcbAtLayerHeight;
        v19 = (*(_DWORD *)(v17 + 8) >> 21) & 0x3FF;
        if ( ((*(_DWORD *)(KcbAtLayerHeight + 8) >> 21) & 0x3FFu) > v19 )
        {
          do
            v18 = *(_QWORD *)(v18 + 72);
          while ( ((*(_DWORD *)(v18 + 8) >> 21) & 0x3FFu) > v19 );
        }
        if ( v18 == v17 && CmpNotifyTriggerCheck(i, a1, a3) )
          CmpPostNotify(i, v20, v21, 268LL, 0, &v27, a5);
      }
    }
  }
  if ( KiIrqlFlags )
  {
    v22 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v26 = (v25 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v25;
      if ( v26 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v9);
  KeAbPostRelease((ULONG_PTR)v9);
  CmpDelayedDerefKeys((void **)&v27);
}
