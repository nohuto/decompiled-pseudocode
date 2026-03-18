/*
 * XREFs of RIMFreeSpecificDev @ 0x1C00A0F40
 * Callers:
 *     RIMUnregisterForInput @ 0x1C0047ED0 (RIMUnregisterForInput.c)
 *     RIMRemoveDevOfInputType @ 0x1C00B713C (RIMRemoveDevOfInputType.c)
 *     RIMFreeDev @ 0x1C017C8C0 (RIMFreeDev.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01846E4 (RIMIDERemoveInjectionDevice.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     rimDereferenceDev @ 0x1C00A12A0 (rimDereferenceDev.c)
 *     rimDoRimDevChange @ 0x1C00A1F28 (rimDoRimDevChange.c)
 *     RIMRemoveHoldingFrame @ 0x1C01A6A7C (RIMRemoveHoldingFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFreeSpecificDev(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v9; // rdx

  v3 = *(_QWORD *)(a2 + 336);
  if ( !v3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v3 = *(_QWORD *)(a2 + 336);
  }
  if ( a1 != v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !*(_QWORD *)(a1 + 864) || *(_DWORD *)(a1 + 1088) || (*(_DWORD *)(a2 + 184) & 0x2000) == 0 )
    rimDoRimDevChange(a1, a2, 4LL);
  v6 = (_QWORD *)(a2 + 104);
  v7 = *(_QWORD *)(a2 + 104);
  if ( v7 != a2 + 104 )
  {
    if ( *(_QWORD **)(v7 + 8) != v6 || (v9 = *(_QWORD **)(a2 + 112), (_QWORD *)*v9 != v6) )
      __fastfail(3u);
    *v9 = v7;
    *(_QWORD *)(v7 + 8) = v9;
    *(_QWORD *)(a2 + 112) = a2 + 104;
    *v6 = v6;
  }
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
  {
    RIMLockExclusive((__int64)&gObListLock);
    *(_DWORD *)(a2 + 200) |= 4u;
    qword_1C029A118 = 0LL;
    ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( *(_BYTE *)(a2 + 48) == 2 )
    RIMRemoveHoldingFrame(a1, a2);
  return rimDereferenceDev(a2);
}
