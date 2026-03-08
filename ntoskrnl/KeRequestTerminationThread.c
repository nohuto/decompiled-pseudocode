/*
 * XREFs of KeRequestTerminationThread @ 0x140354D78
 * Callers:
 *     PspInsertThread @ 0x1406B0F50 (PspInsertThread.c)
 *     PspTerminateThreadByPointer @ 0x1407DA8F0 (PspTerminateThreadByPointer.c)
 *     KeRequestTerminationProcess @ 0x140971344 (KeRequestTerminationProcess.c)
 * Callees:
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KeForceResumeThread @ 0x1403537DC (KeForceResumeThread.c)
 *     KiSignalThreadForApc @ 0x140353F08 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x140354598 (KiInsertQueueApc.c)
 *     KeAlertThread @ 0x140354F40 (KeAlertThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

char __fastcall KeRequestTerminationThread(__int64 a1)
{
  __int64 v1; // rax
  char v3; // r14
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rax
  _DWORD v9[4]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v10[14]; // [rsp+40h] [rbp-98h] BYREF

  v1 = *(_QWORD *)(a1 + 544);
  if ( (*(_BYTE *)(v1 + 992) & 1) != 0 )
  {
    memset(v10, 0, 0x68uLL);
    v10[1] = *(unsigned int *)(a1 + 796);
    v10[2] = a1;
    LOBYTE(v1) = VslpEnterIumSecureMode(2u, 9, 0, (__int64)v10);
  }
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xFu) )
  {
    v3 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      LODWORD(v7) = 4;
      if ( CurrentIrql != 2 )
        v7 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v7;
    }
    v9[0] = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(v9);
      while ( *(_QWORD *)(a1 + 64) );
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
    {
      v3 = 1;
      if ( !*(_BYTE *)(a1 + 730) )
      {
        *(_BYTE *)(a1 + 730) = 1;
        KiInsertQueueApc(a1 + 648);
        KiSignalThreadForApc((__int64)CurrentPrcb, a1 + 648, CurrentIrql);
      }
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    LOBYTE(v1) = KiExitDispatcher((__int64)CurrentPrcb, 0, (struct _PROCESSOR_NUMBER)1, 0, CurrentIrql);
    if ( v3 )
    {
      KeAlertThread(a1, 0LL);
      LOBYTE(v1) = KeForceResumeThread(a1);
    }
  }
  return v1;
}
