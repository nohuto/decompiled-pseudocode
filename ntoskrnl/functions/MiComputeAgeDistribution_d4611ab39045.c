__int16 __fastcall MiComputeAgeDistribution(__int64 a1, int a2)
{
  _QWORD *v4; // rdi
  _QWORD **v5; // rsi
  _QWORD *i; // rbx
  unsigned __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  unsigned __int64 OldIrql; // rsi
  int v11; // ecx
  unsigned int j; // edx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-78h] BYREF
  _BYTE Src[64]; // [rsp+40h] [rbp-58h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(Src, 0, sizeof(Src));
  v4 = *(_QWORD **)(a1 + 16920);
  if ( a2 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
    v5 = (_QWORD **)(a1 + 16928);
    for ( i = *v5; i != v5; i = (_QWORD *)*i )
      MiUpdateClaimDistribution(i - 3, Src);
    memmove(v4 + 302, Src, 0x40uLL);
    v7 = 0LL;
    v8 = v4 + 308;
    v9 = 2LL;
    do
    {
      v7 += *v8++;
      --v9;
    }
    while ( v9 );
    v4[301] = v7;
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v19 = (v18 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
  }
  else
  {
    v7 = v4[301];
  }
  v11 = 0;
  for ( j = 5; v7 < 4LL * v4[298]; --j )
  {
    ++v11;
    v7 += v4[j + 302];
    if ( j == 1 )
      break;
  }
  v13 = v4[294];
  if ( v13 )
  {
    v14 = (unsigned int)(1000 * v11) / v13;
    if ( (unsigned __int16)v14 > 0x3E8u )
      LOWORD(v14) = 1000;
  }
  else
  {
    LOWORD(v14) = v11 != 0 ? 0x3E8 : 0;
  }
  return v14;
}
