/*
 * XREFs of PiProcessStartSystemDevices @ 0x140860040
 * Callers:
 *     PnpDeviceActionWorker @ 0x140203020 (PnpDeviceActionWorker.c)
 * Callees:
 *     PnpDiagnosticTrace @ 0x1402B1760 (PnpDiagnosticTrace.c)
 *     PipProcessDevNodeTree @ 0x1406CCD80 (PipProcessDevNodeTree.c)
 */

__int64 __fastcall PiProcessStartSystemDevices(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  PnpDiagnosticTrace(&KMPnPEvt_SystemStartPnPEnum_Start, 0, 0LL);
  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 312LL) + 40LL);
  LODWORD(v4) = 3;
  BYTE4(v4) = PnPBootDriversInitialized;
  PipProcessDevNodeTree(v2, a1, (__int64)&v4, 0, 0, 0, 0);
  PnpDiagnosticTrace(&KMPnPEvt_SystemStartPnPEnum_Stop, 0, 0LL);
  return 0LL;
}
