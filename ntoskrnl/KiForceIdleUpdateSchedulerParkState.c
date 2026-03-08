/*
 * XREFs of KiForceIdleUpdateSchedulerParkState @ 0x14057AB44
 * Callers:
 *     KiForceIdleStartDpcRoutine @ 0x14057A9E0 (KiForceIdleStartDpcRoutine.c)
 *     KiForceIdleStopDpcRoutine @ 0x14057AAA0 (KiForceIdleStopDpcRoutine.c)
 * Callees:
 *     KiOrAffinityEx @ 0x14022B190 (KiOrAffinityEx.c)
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     KeCheckProcessorAffinityEx @ 0x140234B10 (KeCheckProcessorAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x140237550 (KeCountSetBitsAffinityEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiForceIdleParkUnparkProcessor @ 0x14057A918 (KiForceIdleParkUnparkProcessor.c)
 */

__int64 __fastcall KiForceIdleUpdateSchedulerParkState(unsigned __int8 a1)
{
  __int64 v1; // rbx
  struct _KPRCB *CurrentPrcb; // rsi
  int v3; // edi
  __int64 result; // rax
  struct _KPRCB *Prcb; // rax
  unsigned int v6; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v7; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v8; // [rsp+50h] [rbp-B8h]
  _QWORD v9[34]; // [rsp+58h] [rbp-B0h] BYREF

  v1 = a1;
  v8 = 0LL;
  v7 = 0LL;
  memset(v9, 0, 0x108uLL);
  v6 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  while ( KiForceIdlePendingDpcCount )
    _mm_pause();
  LODWORD(v9[0]) = 2097153;
  memset((char *)v9 + 4, 0, 0x104uLL);
  if ( (_BYTE)v1 )
  {
    KiCopyAffinityEx((__int64)v9, 0x20u, (unsigned __int16 *)KeActiveProcessors);
  }
  else
  {
    KiCopyAffinityEx((__int64)v9, 0x20u, KiForceIdleUnparkRestoreMask);
    KiOrAffinityEx((char *)v9, KiForceIdleSoftParkRestoreMask, v9, WORD1(v9[0]));
  }
  v3 = KeCountSetBitsAffinityEx((unsigned __int16 *)v9);
  if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)v9, CurrentPrcb->Number) )
    KiForceIdlePendingDpcCount = v3 - 1;
  else
    KiForceIdlePendingDpcCount = v3;
  *((_QWORD *)&v7 + 1) = v9[1];
  *(_QWORD *)&v7 = v9;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v6, (unsigned __int16 **)&v7);
    if ( (_DWORD)result )
      break;
    Prcb = (struct _KPRCB *)KeGetPrcb(v6);
    if ( Prcb == KeGetCurrentPrcb() )
      KiForceIdleParkUnparkProcessor((__int64)Prcb, v1);
    else
      KiInsertQueueDpc((ULONG_PTR)&Prcb->ForceIdleDpc, v1, 0LL, 0LL, 0);
  }
  return result;
}
