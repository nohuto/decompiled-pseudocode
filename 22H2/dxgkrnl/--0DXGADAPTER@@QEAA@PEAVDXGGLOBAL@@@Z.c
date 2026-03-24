/*
 * XREFs of ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1C0195738
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C019450C (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ??0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z @ 0x1C0195B64 (--0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z.c)
 */

DXGADAPTER *__fastcall DXGADAPTER::DXGADAPTER(char *DeferredContext, struct DXGGLOBAL *a2)
{
  KSPIN_LOCK *v3; // rcx
  __int64 v4; // rcx
  EVENT_TYPE v5; // edx
  DXGADAPTER *result; // rax

  *((_QWORD *)DeferredContext + 2) = a2;
  *(_OWORD *)DeferredContext = 0LL;
  *((_QWORD *)DeferredContext + 3) = 0LL;
  *((_DWORD *)DeferredContext + 24) = -1;
  *((_QWORD *)DeferredContext + 9) = 0LL;
  *((_QWORD *)DeferredContext + 10) = 0LL;
  *((_DWORD *)DeferredContext + 22) = 0;
  *((_DWORD *)DeferredContext + 23) = 26;
  *((_DWORD *)DeferredContext + 32) = -1;
  *((_QWORD *)DeferredContext + 13) = 0LL;
  *((_QWORD *)DeferredContext + 14) = 0LL;
  *((_DWORD *)DeferredContext + 30) = 0;
  *((_DWORD *)DeferredContext + 31) = 53;
  *((_QWORD *)DeferredContext + 17) = 0LL;
  *((_QWORD *)DeferredContext + 18) = 0LL;
  *((_DWORD *)DeferredContext + 38) = 0;
  *(_QWORD *)(DeferredContext + 156) = 30LL;
  *((_DWORD *)DeferredContext + 58) = -1;
  *((_DWORD *)DeferredContext + 737) = -1;
  *((_DWORD *)DeferredContext + 738) = -1;
  *((_QWORD *)DeferredContext + 21) = 0LL;
  *((_DWORD *)DeferredContext + 44) = 2;
  *((_DWORD *)DeferredContext + 50) = 0;
  DeferredContext[205] = 0;
  *(_DWORD *)(DeferredContext + 206) = 256;
  *((_WORD *)DeferredContext + 105) = 0;
  DeferredContext[212] = 0;
  *((_QWORD *)DeferredContext + 27) = 0LL;
  *((_QWORD *)DeferredContext + 28) = 0LL;
  *((_QWORD *)DeferredContext + 33) = 0LL;
  *((_DWORD *)DeferredContext + 649) = 1000;
  *((_QWORD *)DeferredContext + 325) = 0LL;
  DeferredContext[2609] = 0;
  *((_WORD *)DeferredContext + 1307) = 0;
  *((_DWORD *)DeferredContext + 656) = 0;
  *((_DWORD *)DeferredContext + 658) = 0;
  *((_WORD *)DeferredContext + 1323) = 256;
  *(_WORD *)(DeferredContext + 2651) = 0;
  *((_QWORD *)DeferredContext + 337) = 0LL;
  *((_QWORD *)DeferredContext + 338) = 0LL;
  *((_QWORD *)DeferredContext + 339) = 0LL;
  *((_DWORD *)DeferredContext + 698) = 0;
  *((_QWORD *)DeferredContext + 350) = 0LL;
  *((_QWORD *)DeferredContext + 351) = 0LL;
  *((_DWORD *)DeferredContext + 736) = 0;
  *(_QWORD *)(DeferredContext + 2956) = 0LL;
  *((_QWORD *)DeferredContext + 395) = 0LL;
  *(_DWORD *)(DeferredContext + 3237) = 0;
  *(_WORD *)(DeferredContext + 3241) = 256;
  *((_DWORD *)DeferredContext + 811) = 0;
  v3 = (KSPIN_LOCK *)(DeferredContext + 3264);
  v3[1] = 0LL;
  KeInitializeSpinLock(v3);
  *((_QWORD *)DeferredContext + 410) = 0LL;
  *((_DWORD *)DeferredContext + 870) = 0;
  *((_DWORD *)DeferredContext + 892) = 0;
  *((_QWORD *)DeferredContext + 452) = 0LL;
  DeferredContext[3624] = 0;
  *((_QWORD *)DeferredContext + 486) = 0LL;
  *((_QWORD *)DeferredContext + 487) = 0LL;
  *((_QWORD *)DeferredContext + 488) = 0LL;
  *((_QWORD *)DeferredContext + 489) = 0LL;
  *((_QWORD *)DeferredContext + 490) = 0LL;
  *((_QWORD *)DeferredContext + 491) = 0LL;
  *((_DWORD *)DeferredContext + 990) = -1;
  *((_QWORD *)DeferredContext + 492) = 0LL;
  *((_QWORD *)DeferredContext + 493) = 0LL;
  *((_DWORD *)DeferredContext + 988) = 0;
  *((_DWORD *)DeferredContext + 989) = 53;
  *((_QWORD *)DeferredContext + 497) = 0LL;
  *((_QWORD *)DeferredContext + 498) = 0LL;
  *((_QWORD *)DeferredContext + 500) = 0LL;
  *((_DWORD *)DeferredContext + 1002) = 0;
  DeferredContext[4208] = 0;
  *((_DWORD *)DeferredContext + 1053) = 0;
  DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE(DeferredContext + 4240, 0LL);
  *(_QWORD *)(v4 + 64) = 0LL;
  *((_DWORD *)DeferredContext + 1102) = -1;
  *((_DWORD *)DeferredContext + 1120) = -1;
  *((_QWORD *)DeferredContext + 550) = 0LL;
  *((_QWORD *)DeferredContext + 545) = 32LL;
  DeferredContext[4368] = 0;
  *((_DWORD *)DeferredContext + 1093) = 0;
  *((_QWORD *)DeferredContext + 547) = 0LL;
  *((_QWORD *)DeferredContext + 552) = 0LL;
  *((_QWORD *)DeferredContext + 553) = 0LL;
  *((_QWORD *)DeferredContext + 558) = 0LL;
  *((_QWORD *)DeferredContext + 559) = 0LL;
  *((_QWORD *)DeferredContext + 561) = 0LL;
  KeInitializeEvent((PRKEVENT)DeferredContext + 2, v5, 1u);
  KeInitializeEvent((PRKEVENT)DeferredContext + 10, NotificationEvent, 1u);
  memset(DeferredContext + 272, 0, 0x640uLL);
  memset(DeferredContext + 1880, 0, 0x70uLL);
  memset(DeferredContext + 1992, 0, 0x248uLL);
  *(_OWORD *)(DeferredContext + 184) = 0LL;
  memset(DeferredContext + 2728, 0, 0x40uLL);
  KeInitializeEvent((PRKEVENT)(DeferredContext + 2672), NotificationEvent, 0);
  KeInitializeTimer((PKTIMER)(DeferredContext + 3352));
  KeInitializeDpc((PRKDPC)(DeferredContext + 3416), (PKDEFERRED_ROUTINE)DxgkpComponentIdleListTimerDpc, DeferredContext);
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 496);
  KeInitializeTimer((PKTIMER)(DeferredContext + 4072));
  KeInitializeDpc((PRKDPC)(DeferredContext + 4136), (PKDEFERRED_ROUTINE)DxgkpFirstFrameTimerDpc, DeferredContext);
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 525);
  *((_QWORD *)DeferredContext + 506) = DeferredContext;
  *((_QWORD *)DeferredContext + 505) = DxgkpProcessPowerPStateWork;
  *((_QWORD *)DeferredContext + 503) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 507);
  *((_QWORD *)DeferredContext + 557) = DeferredContext;
  *((_QWORD *)DeferredContext + 414) = DeferredContext + 3304;
  *((_QWORD *)DeferredContext + 413) = DeferredContext + 3304;
  *((_QWORD *)DeferredContext + 416) = DeferredContext + 3320;
  *((_QWORD *)DeferredContext + 415) = DeferredContext + 3320;
  *((_QWORD *)DeferredContext + 556) = ProcessDeadlockThread;
  result = (DXGADAPTER *)DeferredContext;
  *((_QWORD *)DeferredContext + 554) = 0LL;
  return result;
}
