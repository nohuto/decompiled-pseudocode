__int64 __fastcall PpmCapturePerformanceDistribution(_DWORD *a1, unsigned int a2, int a3, __int64 a4, int *a5)
{
  unsigned __int16 *v9; // rcx
  __int64 Prcb; // rsi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // rdx
  int v14; // edi
  unsigned __int8 v15; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v17; // r9
  int v18; // eax
  bool v19; // zf
  __int64 result; // rax
  unsigned int v21; // eax
  unsigned int v22; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD *v23; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v24; // [rsp+30h] [rbp-D0h]
  int v25; // [rsp+34h] [rbp-CCh]
  __int64 v26; // [rsp+38h] [rbp-C8h]
  unsigned __int16 *v27[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v28; // [rsp+50h] [rbp-B0h]
  int v29; // [rsp+52h] [rbp-AEh]
  __int16 v30; // [rsp+56h] [rbp-AAh]
  _DWORD v31[68]; // [rsp+60h] [rbp-A0h] BYREF

  memset(v31, 0, 0x108uLL);
  v9 = *(unsigned __int16 **)a4;
  v25 = 4 * a3 + 4;
  v28 = *(_WORD *)(a4 + 8);
  v29 = 0;
  v30 = 0;
  v22 = 0;
  v26 = 0LL;
  v23 = a1;
  v24 = a2;
  v27[1] = v9;
  v27[0] = 0LL;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v22, v27) )
  {
    Prcb = KeGetPrcb(v22);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v13) = 4;
      else
        v13 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v13;
    }
    v14 = PpmCapturePerformanceDistributionCallback(Prcb);
    if ( KiIrqlFlags )
    {
      v15 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v17 = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    if ( v14 < 0 )
    {
      v31[0] = 2097153;
      memset(&v31[1], 0, 0x104uLL);
      KeAddProcessorAffinityEx((unsigned __int16 *)v31, *(_DWORD *)(Prcb + 36));
      result = PopExecuteOnTargetProcessors(
                 (__int64)v31,
                 (__int64)PpmCapturePerformanceDistributionCallback,
                 (__int64)&v23,
                 0LL);
      if ( (int)result < 0 )
        return result;
    }
  }
  v21 = v25;
  *a5 = v25;
  if ( v21 > a2 )
    return 3221225476LL;
  *v23 = a3;
  return 0LL;
}
