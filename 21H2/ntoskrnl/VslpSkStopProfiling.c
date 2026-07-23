/*
 * XREFs of VslpSkStopProfiling @ 0x1404FE06C
 * Callers:
 *     VslpEtwClassicCallback @ 0x140890930 (VslpEtwClassicCallback.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 *     KeCancelTimer @ 0x1402819B0 (KeCancelTimer.c)
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     VslpUnlockPagesForTransfer @ 0x1403941C4 (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     VslpFlushBufferArray @ 0x1404FDC70 (VslpFlushBufferArray.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 VslpSkStopProfiling()
{
  NTSTATUS v0; // edi
  __int64 v1; // r8
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v8; // r8
  int v9; // eax
  bool v10; // zf
  _BYTE v12[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v12, 0, 0x68uLL);
  v0 = VslpEnterIumSecureMode(2u, 76, 0, (__int64)v12);
  if ( v0 >= 0 )
  {
    VslpUnlockPagesForTransfer((__int64 **)&VslpProfilingTransfer);
    memset(&VslpProfilingTransfer, 0, 0x48uLL);
    KeCancelTimer(&VslpFlushTimer);
    v1 = *((unsigned int *)VslpEventLog + 2);
    v2 = (char *)VslpEventLog + 8 * v1 + 24;
    if ( (_DWORD)v1 )
    {
      v3 = -1 * v1;
      do
      {
        *v2 = ~v2[v3];
        ++v2;
        --v1;
      }
      while ( v1 );
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    VslpFlushBufferArray();
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v6 = KeGetCurrentIrql();
        if ( v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v8 = CurrentPrcb->SchedulerAssist;
          v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v10 = (v9 & v8[5]) == 0;
          v8[5] &= v9;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&VslpBufferFlushRundown);
    if ( VslpEventLog )
    {
      ExFreePoolWithTag(VslpEventLog, 0x54736D56u);
      VslpEventLog = 0LL;
    }
    VslpLoggerId = 0LL;
  }
  else
  {
    KeCancelTimer(&VslpFlushTimer);
  }
  return (unsigned int)v0;
}
