/*
 * XREFs of ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0076738
 * Callers:
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C00765F4 (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 *     RIMReadInput @ 0x1C0077620 (RIMReadInput.c)
 *     InputInitialize @ 0x1C00814D4 (InputInitialize.c)
 *     InputUnInitialize @ 0x1C00B72FC (InputUnInitialize.c)
 *     rimDeviceResetApc @ 0x1C01B4D80 (rimDeviceResetApc.c)
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01E2680 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EDE40 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EE140 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ApiSetEditionCrit::~ApiSetEditionCrit(ApiSetEditionCrit *this)
{
  if ( *(_DWORD *)this && !*((_DWORD *)this + 1) && qword_1C0296218 && (int)qword_1C0296218() >= 0 )
  {
    if ( qword_1C0296220 )
      qword_1C0296220();
  }
}
