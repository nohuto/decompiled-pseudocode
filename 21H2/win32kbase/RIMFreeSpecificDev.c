/*
 * XREFs of RIMFreeSpecificDev @ 0x1C00A6554
 * Callers:
 *     RIMUnregisterForInput @ 0x1C0053610 (RIMUnregisterForInput.c)
 *     RIMRemoveDevOfInputType @ 0x1C00A644C (RIMRemoveDevOfInputType.c)
 *     RIMFreeDev @ 0x1C014FCC0 (RIMFreeDev.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0156EC4 (RIMIDERemoveInjectionDevice.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x1C00523E4 (rimDoRimDevChange.c)
 *     rimDereferenceDev @ 0x1C00A6610 (rimDereferenceDev.c)
 *     RIMRemoveHoldingFrame @ 0x1C00A6720 (RIMRemoveHoldingFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMFreeSpecificDev(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v5; // eax
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v9; // rdx

  v2 = *(_QWORD *)(a2 + 336);
  if ( !v2 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 550LL);
    v2 = *(_QWORD *)(a2 + 336);
  }
  if ( a1 != v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 551LL);
  if ( !*(_QWORD *)(a1 + 640) || *(_DWORD *)(a1 + 864) )
    v5 = 1;
  else
    v5 = (unsigned __int16)(~(unsigned __int16)*(_DWORD *)(a2 + 184) & 0x2000) >> 13;
  if ( v5 )
    rimDoRimDevChange(a1, a2, 4u);
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
    qword_1C0255428 = 0LL;
    ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( *(_BYTE *)(a2 + 48) == 2 )
    RIMRemoveHoldingFrame(a1, a2);
  return rimDereferenceDev(a2);
}
