/*
 * XREFs of ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4CompositionReason@@@Z @ 0x1800D96E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0q_EventWriteTransfer @ 0x180129D14 (McTemplateU0q_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::ScheduleCompositionPass(
        __int64 a1,
        unsigned int a2,
        unsigned int a3)
{
  ULONG TolerableDelay; // r8d
  __int64 result; // rax
  void *v6; // rcx
  signed int LastError; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  LARGE_INTEGER DueTime; // [rsp+50h] [rbp+8h] BYREF

  TolerableDelay = *(_DWORD *)(a1 + 88) < a2 ? a2 : 0;
  if ( TolerableDelay < *(_DWORD *)(a1 + 4632) )
  {
    *(_DWORD *)(a1 + 4632) = TolerableDelay;
    v6 = *(void **)(a1 + 24);
    DueTime.QuadPart = -10000LL * TolerableDelay;
    if ( !SetWaitableTimerEx(v6, &DueTime, 0, 0LL, 0LL, 0LL, TolerableDelay) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      ModuleFailFastForHRESULT((unsigned int)LastError, retaddr);
    }
  }
  _m_prefetchw(&dword_1803E3350);
  result = (unsigned int)~_InterlockedOr(&dword_1803E3350, a3);
  if ( ((unsigned int)result & a3) != 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    return McTemplateU0q_EventWriteTransfer(
             &Microsoft_Windows_Dwm_Core_Provider_Context,
             &EVTDESC_SCHEDULED_COMPOSITION_REASON,
             a3);
  return result;
}
