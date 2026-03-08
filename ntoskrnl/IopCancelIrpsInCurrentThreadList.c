/*
 * XREFs of IopCancelIrpsInCurrentThreadList @ 0x1402E4DC4
 * Callers:
 *     IopCancelIrpsInThreadList @ 0x1407701C8 (IopCancelIrpsInThreadList.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x140770310 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     IoCancelIrp @ 0x1402E4F50 (IoCancelIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopCancelIrpsInCurrentThreadList(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  volatile signed __int64 *v4; // rdi
  unsigned int v8; // r13d
  KIRQL v9; // si
  __int64 *i; // r14
  unsigned __int8 v12; // cl
  _DWORD *v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v19; // zf
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r10
  _DWORD *v22; // r9
  int v23; // edx

  v4 = (volatile signed __int64 *)(a2 + 1496);
  v8 = 0;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 1496));
  for ( i = *(__int64 **)(a2 + 1280); (__int64 *)(a2 + 1280) != i; i = (__int64 *)*i )
  {
    if ( *((char *)i + 35) < *((char *)i + 34) + 2 )
    {
      if ( a4 )
      {
        if ( (!a1 || i[20] == a1) && (!a3 || i[5] == a3) )
        {
          v15 = *((_DWORD *)i - 4);
          if ( (v15 & 0x402) == 0 && ((v15 & 0x84) != 0 || (*((_BYTE *)i + 39) & 2) != 0) )
          {
LABEL_12:
            v8 = 1;
            KxReleaseSpinLock(v4);
            if ( KiIrqlFlags )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v19 = (SchedulerAssist[5] & 0xFFFF0003) == 0;
                SchedulerAssist[5] &= 0xFFFF0003;
                if ( v19 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            __writecr8(1uLL);
            IoCancelIrp((PIRP)(i - 4));
            v12 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v12 <= 0xFu )
            {
              v13 = KeGetCurrentPrcb()->SchedulerAssist;
              if ( v12 == 2 )
                LODWORD(v14) = 4;
              else
                v14 = (-1LL << (v12 + 1)) & 4;
              v13[5] |= v14;
            }
            KxAcquireSpinLock((PKSPIN_LOCK)v4);
          }
        }
      }
      else if ( (*(_DWORD *)(i - 2) & 2) == 0 && (!a1 || i[20] == a1) && (!a3 || i[5] == a3) )
      {
        goto LABEL_12;
      }
    }
  }
  KxReleaseSpinLock(v4);
  if ( KiIrqlFlags )
  {
    v20 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && v9 <= 0xFu && v20 >= 2u )
    {
      v21 = KeGetCurrentPrcb();
      v22 = v21->SchedulerAssist;
      v23 = ~(unsigned __int16)(-1LL << (v9 + 1));
      v19 = (v23 & v22[5]) == 0;
      v22[5] &= v23;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(v21);
    }
  }
  __writecr8(v9);
  return v8;
}
