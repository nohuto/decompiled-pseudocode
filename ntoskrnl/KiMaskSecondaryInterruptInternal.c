/*
 * XREFs of KiMaskSecondaryInterruptInternal @ 0x14056F638
 * Callers:
 *     KeMaskInterrupt @ 0x14028E5A8 (KeMaskInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x14039E508 (KiAcquireSecondaryInterruptConnectLock.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiMaskSecondaryInterruptInternal(int a1, unsigned int a2)
{
  unsigned int v3; // esi
  __int64 v4; // rdi
  volatile signed __int64 *v5; // rbx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v7; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v10; // eax
  bool v11; // zf
  __int64 v13; // rax
  __int64 *v14; // rcx
  unsigned __int8 v15; // cl
  unsigned __int8 v16; // bl
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r8
  int v19; // eax
  unsigned __int8 v20; // [rsp+30h] [rbp+8h] BYREF

  v20 = 0;
  v3 = 0;
  v4 = 48LL * (unsigned int)(a1 - 256);
  v5 = (volatile signed __int64 *)(v4 + KiGlobalSecondaryIDT);
  KiAcquireSecondaryInterruptConnectLock((PKSPIN_LOCK)(v4 + KiGlobalSecondaryIDT), &v20);
  if ( *(_BYTE *)(v4 + KiGlobalSecondaryIDT + 32) || (v13 = *(_QWORD *)(v4 + KiGlobalSecondaryIDT + 40)) == 0 )
  {
    KxReleaseSpinLock(v5);
    if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
    {
      v7 = v20;
      if ( v20 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v7 = v20;
        v10 = ~(unsigned __int16)(-1LL << (v20 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    else
    {
      v7 = v20;
    }
    __writecr8(v7);
    return 0LL;
  }
  else
  {
    v14 = (__int64 *)(v13 + 8);
    while ( (v14[12] & 1) != 0 )
    {
      v14 = (__int64 *)*v14;
      if ( v14 == (__int64 *)(v13 + 8) )
      {
        *(_BYTE *)(v4 + KiGlobalSecondaryIDT + 32) = 1;
        goto LABEL_17;
      }
    }
    v3 = 296;
LABEL_17:
    KxReleaseSpinLock(v5);
    if ( KiIrqlFlags && (v15 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v15 <= 0xFu )
    {
      v16 = v20;
      if ( v20 <= 0xFu && v15 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        v16 = v20;
        v19 = ~(unsigned __int16)(-1LL << (v20 + 1));
        v11 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)v17);
      }
    }
    else
    {
      v16 = v20;
    }
    __writecr8(v16);
    if ( !v3 )
      ((void (__fastcall *)(_QWORD, _QWORD))off_140C01B80[0])(a2, 0LL);
    return v3;
  }
}
