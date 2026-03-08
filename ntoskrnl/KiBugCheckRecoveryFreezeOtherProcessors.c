/*
 * XREFs of KiBugCheckRecoveryFreezeOtherProcessors @ 0x14057833C
 * Callers:
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x1405786C8 (KiBugCheckRecoveryPrepareForCrashDump.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405793F8 (KiUpdateBugcheckRecoveryProgress.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x14022B710 (KeStallExecutionProcessor.c)
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeRemoveProcessorAffinityEx @ 0x140237640 (KeRemoveProcessorAffinityEx.c)
 *     KeRemoveQueueDpcEx @ 0x14028DB50 (KeRemoveQueueDpcEx.c)
 *     KiSetDebuggerOwner @ 0x14036B4E0 (KiSetDebuggerOwner.c)
 *     KiSendFreeze @ 0x14036B528 (KiSendFreeze.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KeFrozenProcessorCount @ 0x140574598 (KeFrozenProcessorCount.c)
 */

__int64 __fastcall KiBugCheckRecoveryFreezeOtherProcessors(unsigned int a1)
{
  unsigned int v2; // edx
  struct _KPRCB *CurrentPrcb; // rbx
  signed int v4; // edi
  unsigned int i; // ebx
  unsigned int v6; // ebx
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 *v9; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+40h] [rbp-C0h]
  __int16 v11; // [rsp+48h] [rbp-B8h]
  int v12; // [rsp+4Ah] [rbp-B6h]
  __int16 v13; // [rsp+4Eh] [rbp-B2h]
  _QWORD v14[34]; // [rsp+50h] [rbp-B0h] BYREF

  v12 = 0;
  v13 = 0;
  memset(&v14[1], 0, 0x100uLL);
  v2 = KeNumberProcessors_0;
  v8 = 0;
  if ( (_DWORD)KeNumberProcessors_0 != 1 && !KiHypervisorInitiatedCrashDump )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    KiSetDebuggerOwner((__int64)CurrentPrcb);
    LODWORD(v14[0]) = 2097153;
    memset((char *)v14 + 4, 0, 0x104uLL);
    KiCopyAffinityEx((__int64)v14, 0x20u, (unsigned __int16 *)KeActiveProcessors);
    KeRemoveProcessorAffinityEx((unsigned __int16 *)v14, CurrentPrcb->Number);
    KiFreezeInDpc = 1;
    KiFreezeInDpcCount = 0;
    v4 = 0;
    v10 = v14[1];
    v9 = (unsigned __int16 *)v14;
    v11 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v8, &v9) )
    {
      KiInsertQueueDpc(KiProcessorBlock[v8] + 38352, 0LL, 0LL, 0LL, 0);
      ++v4;
    }
    for ( i = 0; i < 0xF4240; i += 50 )
    {
      if ( KiFreezeInDpcCount >= v4 )
        break;
      KeStallExecutionProcessor(0x32u);
    }
    if ( KiFreezeInDpcCount < v4 )
    {
      v10 = v14[1];
      v9 = (unsigned __int16 *)v14;
      v11 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v8, &v9) )
        KeRemoveQueueDpcEx(KiProcessorBlock[v8] + 38352, 0);
    }
    KiSendFreeze((__int64)v14, a1 == 0);
    if ( a1 )
    {
      v6 = 0;
      do
      {
        if ( (unsigned int)KeFrozenProcessorCount() >= v4 )
          break;
        KeStallExecutionProcessor(0x32u);
        v6 += 50;
      }
      while ( v6 < a1 );
    }
    KiFreezeInDpc = 0;
    return (unsigned int)KeNumberProcessors_0 - (unsigned int)KeFrozenProcessorCount();
  }
  return v2;
}
