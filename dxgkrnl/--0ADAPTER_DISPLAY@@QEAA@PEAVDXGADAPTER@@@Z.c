/*
 * XREFs of ??0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C01EA1E0
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C01EC350 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 */

ADAPTER_DISPLAY *__fastcall ADAPTER_DISPLAY::ADAPTER_DISPLAY(char *DeferredContext, struct DXGADAPTER *a2)
{
  ADAPTER_DISPLAY *result; // rax

  *((_QWORD *)DeferredContext + 2) = a2;
  *(_OWORD *)DeferredContext = 0LL;
  *((_QWORD *)DeferredContext + 5) = 0LL;
  *((_QWORD *)DeferredContext + 6) = 0LL;
  *((_QWORD *)DeferredContext + 7) = 0LL;
  *((_DWORD *)DeferredContext + 16) = 0;
  *((_DWORD *)DeferredContext + 17) = 5;
  *((_DWORD *)DeferredContext + 18) = 32;
  *((_QWORD *)DeferredContext + 11) = DeferredContext + 80;
  *((_QWORD *)DeferredContext + 10) = DeferredContext + 80;
  *((_DWORD *)DeferredContext + 34) = -1;
  *((_DWORD *)DeferredContext + 35) = -1;
  *((_DWORD *)DeferredContext + 24) = 0;
  *((_QWORD *)DeferredContext + 13) = 0LL;
  *((_QWORD *)DeferredContext + 14) = 0LL;
  *((_QWORD *)DeferredContext + 15) = 0LL;
  *((_QWORD *)DeferredContext + 16) = 0LL;
  *((_DWORD *)DeferredContext + 36) = 3;
  *((_QWORD *)DeferredContext + 20) = 0LL;
  *((_DWORD *)DeferredContext + 47) = -1;
  *((_QWORD *)DeferredContext + 21) = 0LL;
  *((_QWORD *)DeferredContext + 22) = 0LL;
  *((_DWORD *)DeferredContext + 46) = 0;
  *((_DWORD *)DeferredContext + 48) = 55;
  *((_QWORD *)DeferredContext + 26) = 0LL;
  *((_QWORD *)DeferredContext + 27) = 0LL;
  *((_QWORD *)DeferredContext + 28) = 0LL;
  *((_DWORD *)DeferredContext + 58) = 0;
  *((_DWORD *)DeferredContext + 59) = -1;
  *((_DWORD *)DeferredContext + 60) = 1;
  *((_QWORD *)DeferredContext + 31) = 0LL;
  *((_DWORD *)DeferredContext + 72) = 0;
  DeferredContext[292] = 0;
  *((_QWORD *)DeferredContext + 38) = 0LL;
  *((_QWORD *)DeferredContext + 39) = 0LL;
  *((_QWORD *)DeferredContext + 40) = 0LL;
  *((_DWORD *)DeferredContext + 82) = 0;
  *((_DWORD *)DeferredContext + 83) = -1;
  *((_DWORD *)DeferredContext + 84) = 1;
  *((_QWORD *)DeferredContext + 43) = 0LL;
  *((_QWORD *)DeferredContext + 47) = 0LL;
  *((_QWORD *)DeferredContext + 48) = 0LL;
  *((_QWORD *)DeferredContext + 49) = 0LL;
  *((_DWORD *)DeferredContext + 100) = 0;
  *((_DWORD *)DeferredContext + 101) = 16;
  *((_DWORD *)DeferredContext + 102) = 13;
  *((_QWORD *)DeferredContext + 52) = 0LL;
  *((_QWORD *)DeferredContext + 53) = 1LL;
  *((_QWORD *)DeferredContext + 54) = 0LL;
  *((_DWORD *)DeferredContext + 110) = 0;
  *((_QWORD *)DeferredContext + 56) = 0LL;
  *((_DWORD *)DeferredContext + 114) = 0;
  DeferredContext[460] = 0;
  *((_QWORD *)DeferredContext + 59) = 0LL;
  *((_QWORD *)DeferredContext + 60) = 0LL;
  *((_QWORD *)DeferredContext + 61) = 0LL;
  *((_DWORD *)DeferredContext + 124) = 0;
  *((_DWORD *)DeferredContext + 125) = 75;
  *((_DWORD *)DeferredContext + 126) = 66;
  *((_QWORD *)DeferredContext + 68) = 0LL;
  *((_QWORD *)DeferredContext + 69) = 0LL;
  *((_QWORD *)DeferredContext + 70) = 0LL;
  *((_DWORD *)DeferredContext + 142) = 0;
  *((_DWORD *)DeferredContext + 143) = -1;
  *((_DWORD *)DeferredContext + 144) = 1;
  DeferredContext[584] = 0;
  *((_QWORD *)DeferredContext + 77) = 0LL;
  *((_QWORD *)DeferredContext + 78) = 0LL;
  *((_QWORD *)DeferredContext + 79) = 0LL;
  *((_DWORD *)DeferredContext + 160) = 0;
  *((_DWORD *)DeferredContext + 161) = 76;
  *((_DWORD *)DeferredContext + 162) = 24;
  *((_QWORD *)DeferredContext + 84) = 0LL;
  *((_QWORD *)DeferredContext + 85) = 0LL;
  *((_DWORD *)DeferredContext + 175) = -1;
  *((_QWORD *)DeferredContext + 86) = 0LL;
  *((_DWORD *)DeferredContext + 174) = 0;
  *((_DWORD *)DeferredContext + 176) = 33;
  *((_QWORD *)DeferredContext + 90) = DeferredContext + 712;
  *((_QWORD *)DeferredContext + 89) = DeferredContext + 712;
  *((_QWORD *)DeferredContext + 45) = DeferredContext + 352;
  *((_QWORD *)DeferredContext + 44) = DeferredContext + 352;
  memset(DeferredContext + 864, 0, 0xA0uLL);
  KeInitializeTimerEx((PKTIMER)(DeferredContext + 736), SynchronizationTimer);
  KeInitializeDpc(
    (PRKDPC)(DeferredContext + 800),
    (PKDEFERRED_ROUTINE)ADAPTER_DISPLAY::VSyncTelemetryTimerDpc,
    DeferredContext);
  result = (ADAPTER_DISPLAY *)DeferredContext;
  *(_OWORD *)(DeferredContext + 264) = 0LL;
  return result;
}
