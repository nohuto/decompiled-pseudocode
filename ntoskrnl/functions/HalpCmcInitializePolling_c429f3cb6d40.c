__int64 __fastcall HalpCmcInitializePolling(__int64 a1)
{
  unsigned __int64 v2; // rbx
  int v3; // ecx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&HalpCmcFallbackLock);
  if ( !HalpCmcPollingInitialized )
  {
    HalpCmcErrorPacket = (__int64)&HalpCmcReserveErrorPacket;
    HalpCmcInitializeErrorPacketContents((GUID *)&HalpCmcReserveErrorPacket);
    v3 = *(_DWORD *)(a1 + 52);
    qword_140C6A4E0 = (__int64)HalpCmcDeferredRoutine;
    qword_140C6A518 = (__int64)HalpCmcWorkerRoutine;
    HalpCmcContext = v3;
    qword_140C6A488 = 8LL;
    qword_140C6A498 = (__int64)&qword_140C6A490;
    qword_140C6A490 = (__int64)&qword_140C6A490;
    dword_140C6A4C8 = 275;
    qword_140C6A4E8 = (__int64)&HalpCmcContext;
    qword_140C6A500 = 0LL;
    qword_140C6A4D8 = 0LL;
    qword_140C6A520 = (__int64)&HalpCmcContext;
    qword_140C6A508 = 0LL;
    qword_140C6A4A0 = 0LL;
    dword_140C6A4C4 = 0;
    word_140C6A4C0 = 0;
    HalpCmcPollingInitialized = 1;
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&HalpCmcFallbackLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v7 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  return result;
}
