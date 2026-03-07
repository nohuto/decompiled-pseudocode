__int64 __fastcall KiUnmaskSecondaryInterruptInternal(int a1, unsigned int a2)
{
  __int64 v3; // r14
  volatile signed __int64 *v4; // rsi
  unsigned int v5; // edi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v9; // eax
  bool v10; // zf
  __int64 v11; // rax
  unsigned __int8 v12; // cl
  struct _KPRCB *v13; // r10
  _DWORD *v14; // r8
  int v15; // eax
  __int64 *v16; // rcx
  __int64 *v17; // rax
  int v18; // ebx
  unsigned __int8 v19; // cl
  unsigned __int8 v20; // si
  struct _KPRCB *v21; // r10
  _DWORD *v22; // r8
  int v23; // eax
  unsigned __int8 v25; // [rsp+40h] [rbp+8h] BYREF

  v3 = 48LL * (unsigned int)(a1 - 256);
  v4 = (volatile signed __int64 *)(v3 + KiGlobalSecondaryIDT);
  v5 = 0;
  v25 = 0;
  KiAcquireSecondaryInterruptConnectLock((PKSPIN_LOCK)(v3 + KiGlobalSecondaryIDT), &v25);
  if ( !*(_BYTE *)(v3 + KiGlobalSecondaryIDT + 32) )
  {
    KxReleaseSpinLock(v4);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v25 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << (v25 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    v5 = 296;
LABEL_18:
    __writecr8(v25);
    return v5;
  }
  v11 = *(_QWORD *)(v3 + KiGlobalSecondaryIDT + 40);
  if ( !v11 )
  {
    KxReleaseSpinLock(v4);
    if ( KiIrqlFlags )
    {
      v12 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu && v25 <= 0xFu && v12 >= 2u )
      {
        v13 = KeGetCurrentPrcb();
        v14 = v13->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (v25 + 1));
        v10 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)v13);
      }
    }
    goto LABEL_18;
  }
  v16 = (__int64 *)(v11 + 8);
  v17 = (__int64 *)(v11 + 8);
  while ( 1 )
  {
    v18 = -(v17[12] & 1);
    if ( (v17[12] & 1) == 0 )
      break;
    v17 = (__int64 *)*v17;
    if ( v17 == v16 )
      goto LABEL_24;
  }
  *(_BYTE *)(v3 + KiGlobalSecondaryIDT + 32) = 0;
LABEL_24:
  KxReleaseSpinLock(v4);
  if ( KiIrqlFlags && (v19 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v19 <= 0xFu )
  {
    v20 = v25;
    if ( v25 <= 0xFu && v19 >= 2u )
    {
      v21 = KeGetCurrentPrcb();
      v22 = v21->SchedulerAssist;
      v20 = v25;
      v23 = ~(unsigned __int16)(-1LL << (v25 + 1));
      v10 = (v23 & v22[5]) == 0;
      v22[5] &= v23;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick((__int64)v21);
    }
  }
  else
  {
    v20 = v25;
  }
  __writecr8(v20);
  if ( !v18 )
    return ((unsigned int (__fastcall *)(_QWORD, _QWORD))off_140C01B88[0])(a2, 0LL);
  return v5;
}
