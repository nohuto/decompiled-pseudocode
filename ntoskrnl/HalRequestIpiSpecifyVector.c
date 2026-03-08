/*
 * XREFs of HalRequestIpiSpecifyVector @ 0x140230C90
 * Callers:
 *     KiReadyDeferredReadyList @ 0x140226FA0 (KiReadyDeferredReadyList.c)
 *     KiIpiSendRequest @ 0x140233230 (KiIpiSendRequest.c)
 *     KiProcessThreadWaitList @ 0x1402508F0 (KiProcessThreadWaitList.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402B7960 (KiFlushSoftwareInterruptBatch.c)
 *     HalRequestIpi @ 0x1402EF7C0 (HalRequestIpi.c)
 *     HalRequestClockInterrupt @ 0x1402F98D0 (HalRequestClockInterrupt.c)
 *     HalpInterruptResetAllProcessors @ 0x140502DCC (HalpInterruptResetAllProcessors.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x14057E460 (KiIntRedirectQueueRequestOnProcessor.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140230870 (HalpInterruptSendIpi.c)
 *     KeIsEmptyAffinityEx @ 0x140237C30 (KeIsEmptyAffinityEx.c)
 */

__int64 __fastcall HalRequestIpiSpecifyVector(int a1, __int64 a2, unsigned int a3)
{
  int v7; // ebx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+30h] [rbp-18h]

  v9 = 0;
  v8 = 0LL;
  if ( a1 )
  {
    if ( (unsigned int)(a1 - 1) < 2 )
      goto LABEL_4;
    return 3221225485LL;
  }
  if ( !a2 || (unsigned int)KeIsEmptyAffinityEx(a2) )
    return 3221225485LL;
LABEL_4:
  if ( a1 )
  {
    v7 = a1 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        LODWORD(v8) = 3;
    }
    else
    {
      LODWORD(v8) = 4;
    }
  }
  else
  {
    LODWORD(v8) = 2;
    *((_QWORD *)&v8 + 1) = a2;
  }
  return HalpInterruptSendIpi(&v8, a3);
}
