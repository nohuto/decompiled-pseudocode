/*
 * XREFs of HalpMceHandlerWithRendezvous @ 0x140503DD0
 * Callers:
 *     HalpHandleMachineCheck @ 0x140502FF0 (HalpHandleMachineCheck.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140222070 (KeQueryActiveProcessorCountEx.c)
 *     HalpMcaReportError @ 0x140503858 (HalpMcaReportError.c)
 *     HalpMceBarrierWait @ 0x140503A4C (HalpMceBarrierWait.c)
 *     HalpMceHandler @ 0x140503B14 (HalpMceHandler.c)
 */

__int64 __fastcall HalpMceHandlerWithRendezvous(__int64 a1)
{
  __int64 v2; // rdx
  ULONG ActiveProcessorCount; // ebx
  __int64 result; // rax
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  while ( HalpMceRendezvousInProgress )
    _mm_pause();
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( _InterlockedIncrement(&HalpMceProcessorCount) == ActiveProcessorCount )
    HalpMceRendezvousInProgress = 1;
  if ( HalpMcaRecoverySupported )
  {
    LOBYTE(v2) = 1;
    if ( HalpMceHandler(a1, v2) )
      HalpMceErrorFound = 1;
    if ( _InterlockedIncrement(&HalpMceRendezvousSrarOnlyCount) == 1 )
    {
      if ( !HalpMceBarrierWait(&HalpMceRendezvousSrarOnlyCount, ActiveProcessorCount, 5000) )
        HalpMcaReportError(0LL, 0LL, 0x80000002);
      _InterlockedAdd(&HalpMceRendezvousSrarOnlyCount, 1u);
    }
    else
    {
      HalpMceBarrierWait(&HalpMceRendezvousSrarOnlyCount, ActiveProcessorCount + 1, 0);
    }
  }
  if ( HalpMceHandler(a1, 0LL) )
    HalpMceErrorFound = 1;
  if ( _InterlockedIncrement(&HalpMceRendezvousCount) == 1 )
  {
    if ( !HalpMceBarrierWait(&HalpMceRendezvousCount, ActiveProcessorCount, 5000) || !HalpMceErrorFound )
      HalpMcaReportError(0LL, 0LL, 0x80000001);
    _InterlockedAdd(&HalpMceRendezvousCount, 1u);
  }
  else
  {
    HalpMceBarrierWait(&HalpMceRendezvousCount, ActiveProcessorCount + 1, 0);
  }
  result = (unsigned int)_InterlockedExchangeAdd(&HalpMceProcessorCount, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    HalpMceErrorFound = 0;
    HalpMceRendezvousSrarOnlyCount = 0;
    HalpMceRendezvousCount = 0;
    _InterlockedOr(v5, 0);
    HalpMceRendezvousInProgress = 0;
  }
  return result;
}
