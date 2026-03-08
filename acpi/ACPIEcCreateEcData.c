/*
 * XREFs of ACPIEcCreateEcData @ 0x1C00250B4
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x1C00251B0 (ACPIEcInitOpRegionHandler.c)
 *     ACPIEcStartDevice @ 0x1C0025450 (ACPIEcStartDevice.c)
 * Callees:
 *     <none>
 */

__int64 ACPIEcCreateEcData()
{
  __int64 result; // rax
  __int64 v1; // rbx
  int v2; // eax
  bool v3; // zf

  result = ExAllocatePool2(64LL, 904LL, 1164993345LL);
  v1 = result;
  if ( result )
  {
    *(_QWORD *)(result + 8) = _InterlockedExchange64(&EcExtensionList, result);
    *(_DWORD *)(result + 68) = 10;
    v2 = *(_DWORD *)(result + 68);
    *(_DWORD *)(v1 + 64) = 50;
    v3 = (AcpiOverrideAttributes & 0x1000000) == 0;
    *(_WORD *)(v1 + 121) = 0;
    if ( !v3 )
      v2 = 50;
    *(_BYTE *)(v1 + 488) = 0;
    *(_DWORD *)(v1 + 68) = v2;
    *(_BYTE *)(v1 + 458) = 1;
    *(_BYTE *)(v1 + 504) = 0;
    KeQueryPerformanceCounter((PLARGE_INTEGER)(v1 + 512));
    *(_QWORD *)(v1 + 472) = v1 + 464;
    *(_QWORD *)(v1 + 464) = v1 + 464;
    KeInitializeEvent((PRKEVENT)(v1 + 96), NotificationEvent, 0);
    KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 88));
    KeInitializeTimer((PKTIMER)(v1 + 520));
    KeInitializeDpc((PRKDPC)(v1 + 584), ACPIEcWatchdogDpc, (PVOID)v1);
    return v1;
  }
  return result;
}
