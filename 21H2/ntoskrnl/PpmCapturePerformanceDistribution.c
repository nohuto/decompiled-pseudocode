/*
 * XREFs of PpmCapturePerformanceDistribution @ 0x140576E5C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14026977C (PopExecuteOnTargetProcessors.c)
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     KeAddProcessorAffinityEx @ 0x1402CDC80 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     PpmCapturePerformanceDistributionCallback @ 0x140577080 (PpmCapturePerformanceDistributionCallback.c)
 */

__int64 __fastcall PpmCapturePerformanceDistribution(_DWORD *a1, unsigned int a2, int a3, __int64 a4, int *a5)
{
  unsigned __int16 *v9; // rcx
  __int64 Prcb; // rsi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v13; // edi
  unsigned __int8 v14; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v16; // r9
  int v17; // eax
  bool v18; // zf
  __int64 result; // rax
  unsigned int v20; // eax
  unsigned int v21; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD *v22; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v23; // [rsp+30h] [rbp-D0h]
  int v24; // [rsp+34h] [rbp-CCh]
  __int64 v25; // [rsp+38h] [rbp-C8h]
  unsigned __int16 *v26[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v27; // [rsp+50h] [rbp-B0h]
  int v28; // [rsp+52h] [rbp-AEh]
  __int16 v29; // [rsp+56h] [rbp-AAh]
  _DWORD v30[44]; // [rsp+60h] [rbp-A0h] BYREF

  memset(v30, 0, 0xA8uLL);
  v9 = *(unsigned __int16 **)a4;
  v24 = 4 * a3 + 4;
  v27 = *(_WORD *)(a4 + 8);
  v28 = 0;
  v29 = 0;
  v21 = 0;
  v25 = 0LL;
  v22 = a1;
  v23 = a2;
  v26[1] = v9;
  v26[0] = 0LL;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v21, v26) )
  {
    Prcb = KeGetPrcb(v21);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v13 = PpmCapturePerformanceDistributionCallback(Prcb);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v16 = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v18 = (v17 & v16[5]) == 0;
          v16[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v13 < 0 )
    {
      v30[0] = 1310721;
      memset(&v30[1], 0, 0xA4uLL);
      KeAddProcessorAffinityEx(v30, *(_DWORD *)(Prcb + 36));
      result = PopExecuteOnTargetProcessors(
                 (__int64)v30,
                 (__int64)PpmCapturePerformanceDistributionCallback,
                 (__int64)&v22,
                 0LL);
      if ( (int)result < 0 )
        return result;
    }
  }
  v20 = v24;
  *a5 = v24;
  if ( v20 > a2 )
    return 3221225476LL;
  *v22 = a3;
  return 0LL;
}
