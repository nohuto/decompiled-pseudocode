/*
 * XREFs of VfEvtIoStop @ 0x1C00C59F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001A4F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?PerfEvtIoStopStart@@YAEPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x1C0043EC4 (-PerfEvtIoStopStart@@YAEPEAUWDFQUEUE__@@PEAU_GUID@@@Z.c)
 *     ?PerfEvtIoStopStop@@YAXPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x1C0043F78 (-PerfEvtIoStopStop@@YAXPEAUWDFQUEUE__@@PEAU_GUID@@@Z.c)
 *     VerifyCriticalRegionEntry @ 0x1C004406C (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x1C0044098 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1C00440F8 (VerifyIrqlExit.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00C4514 (VfWdfObjectGetTypedContext.c)
 */

void __fastcall VfEvtIoStop(WDFQUEUE__ *Queue, WDFREQUEST__ *Request, unsigned int ActionFlags)
{
  char *TypedContext; // r14
  void (__fastcall *v7)(WDFQUEUE__ *, WDFREQUEST__ *, _QWORD); // rsi
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 critRegion[8]; // [rsp+20h] [rbp-48h] BYREF
  _GUID activityId; // [rsp+28h] [rbp-40h] BYREF

  TypedContext = VfWdfObjectGetTypedContext(Queue, &WDF_VF_WDFIOQUEUECREATE_CONTEXT_TYPE_INFO);
  v7 = (void (__fastcall *)(WDFQUEUE__ *, WDFREQUEST__ *, _QWORD))*((_QWORD *)TypedContext + 8);
  if ( v7 )
  {
    activityId = 0LL;
    if ( PerfEvtIoStopStart(Queue, &activityId) )
    {
      v7(Queue, Request, ActionFlags);
      PerfEvtIoStopStop(Queue, &activityId);
    }
    else
    {
      critRegion[0] = 0;
      CurrentIrql = KeGetCurrentIrql();
      VerifyCriticalRegionEntry(critRegion);
      v7(Queue, Request, ActionFlags);
      VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
      VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion[0], (unsigned __int64)v7);
    }
  }
}
