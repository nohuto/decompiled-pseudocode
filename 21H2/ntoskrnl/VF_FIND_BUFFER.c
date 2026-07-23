/*
 * XREFs of VF_FIND_BUFFER @ 0x1409CB1E8
 * Callers:
 *     ViSpecialFreeCommonBuffer @ 0x1409D08A8 (ViSpecialFreeCommonBuffer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int16 *__fastcall VF_FIND_BUFFER(_QWORD *a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v5; // al
  _QWORD *v6; // r8
  unsigned __int64 v7; // rdi
  unsigned __int16 *v8; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  _DWORD *v17; // r8
  int v18; // eax

  v2 = a1 + 2;
  v5 = KeAcquireSpinLockRaiseToDpc(a1 + 2);
  v6 = (_QWORD *)*a1;
  v7 = v5;
  v8 = (unsigned __int16 *)(*a1 - 48LL);
  while ( 1 )
  {
    if ( a1 == v6 )
    {
      KxReleaseSpinLock(v2);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v13 = (v12 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v12;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      v8 = 0LL;
      goto LABEL_13;
    }
    if ( *((_QWORD *)v8 + 2) + *v8 == a2 )
      break;
    v8 = (unsigned __int16 *)(*v6 - 48LL);
    v6 = (_QWORD *)*v6;
  }
  KxReleaseSpinLock(v2);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v13 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)v16);
      }
    }
  }
LABEL_13:
  __writecr8(v7);
  return v8;
}
