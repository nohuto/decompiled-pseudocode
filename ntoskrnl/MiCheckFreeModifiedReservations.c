/*
 * XREFs of MiCheckFreeModifiedReservations @ 0x1406368F0
 * Callers:
 *     MiModifiedPageWriter @ 0x1403AD2B0 (MiModifiedPageWriter.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     MiInitializePagefileBitmapsCache @ 0x1403926D0 (MiInitializePagefileBitmapsCache.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeModifiedReservations @ 0x140637B1C (MiFreeModifiedReservations.c)
 */

__int64 __fastcall MiCheckFreeModifiedReservations(__int64 a1)
{
  unsigned __int64 v1; // r9
  __int64 result; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned int v6; // ecx
  BOOL v7; // ebp
  __int64 *v8; // rsi
  __int64 v9; // r15
  __int64 v10; // rdi
  KIRQL v11; // al
  char v12; // dl
  unsigned __int64 v13; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  signed __int32 v19[14]; // [rsp+0h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 3648);
  result = *(_QWORD *)(a1 + 17280);
  v4 = *(_QWORD *)(a1 + 17824);
  v5 = 0LL;
  if ( result >= 0 )
    v5 = result;
  if ( *(_QWORD *)(a1 + 872) < 0x800uLL )
  {
    result = *(_QWORD *)(a1 + 17040) >> 2;
    if ( v4 > result || v4 > v5 >> 2 )
    {
      v6 = *(_DWORD *)(a1 + 888);
      if ( v6 >= 0x40 )
      {
        result = *(_DWORD *)(a1 + 880) / v6;
        if ( (unsigned int)result < (unsigned int)dword_140D1D1DC >> 3 )
        {
          result = *(unsigned int *)(a1 + 17048);
          v7 = v1 > 3 * (v4 >> 2);
          if ( (_DWORD)result )
          {
            v8 = (__int64 *)(a1 + 17056);
            v9 = (unsigned int)result;
            do
            {
              v10 = *v8;
              result = *(unsigned __int16 *)(*v8 + 204);
              if ( (result & 0x60) == 0 )
              {
                if ( v7 )
                {
                  v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 232));
                  v12 = *(_BYTE *)(v10 + 207);
                  v13 = v11;
                  if ( (v12 & 1) == 0 )
                  {
                    *(_BYTE *)(v10 + 207) = v12 | 1;
                    MiInitializePagefileBitmapsCache(v10);
                    *(_DWORD *)(v10 + 124) = dword_140D1D1DC;
                  }
                  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 232));
                  if ( KiIrqlFlags )
                  {
                    CurrentIrql = KeGetCurrentIrql();
                    if ( (KiIrqlFlags & 1) != 0
                      && CurrentIrql <= 0xFu
                      && (unsigned __int8)v13 <= 0xFu
                      && CurrentIrql >= 2u )
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      SchedulerAssist = CurrentPrcb->SchedulerAssist;
                      v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
                      v18 = (v17 & SchedulerAssist[5]) == 0;
                      SchedulerAssist[5] &= v17;
                      if ( v18 )
                        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                    }
                  }
                  __writecr8(v13);
                }
                result = MiFreeModifiedReservations(v10, 0LL);
              }
              ++v8;
              --v9;
            }
            while ( v9 );
          }
          ++*(_DWORD *)(a1 + 896);
          if ( v7 )
          {
            result = KiQueryUnbiasedInterruptTime();
            *(_QWORD *)(a1 + 904) = result;
            _InterlockedOr(v19, 0);
            *(_WORD *)(a1 + 916) |= 1u;
            ++*(_DWORD *)(a1 + 892);
          }
          *(_DWORD *)(a1 + 888) = 0;
          *(_QWORD *)(a1 + 880) = 0LL;
        }
      }
    }
  }
  return result;
}
