/*
 * XREFs of RIMFreeSpecificDev @ 0x1C0006104
 * Callers:
 *     RIMRemoveDevOfInputType @ 0x1C0005FFC (RIMRemoveDevOfInputType.c)
 *     RIMUnregisterForInput @ 0x1C0054610 (RIMUnregisterForInput.c)
 *     RIMFreeDev @ 0x1C014FBF0 (RIMFreeDev.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0156DF4 (RIMIDERemoveInjectionDevice.c)
 * Callees:
 *     rimDereferenceDev @ 0x1C0006708 (rimDereferenceDev.c)
 *     RIMRemoveHoldingFrame @ 0x1C00082F0 (RIMRemoveHoldingFrame.c)
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x1C00533E4 (rimDoRimDevChange.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMFreeSpecificDev(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  int v5; // eax
  _QWORD *v6; // rax
  __int64 v7; // rcx

  v2 = a2[42];
  v3 = a2;
  if ( !v2 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 550LL);
    v2 = v3[42];
  }
  if ( a1 != v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 551LL);
  if ( !*(_QWORD *)(a1 + 640) || *(_DWORD *)(a1 + 864) )
    v5 = 1;
  else
    v5 = (unsigned __int16)(~(unsigned __int16)*((_DWORD *)v3 + 46) & 0x2000) >> 13;
  if ( v5 )
    rimDoRimDevChange(a1, v3, 4LL);
  v6 = v3 + 13;
  v7 = v3[13];
  if ( (_QWORD *)v7 != v3 + 13 )
  {
    if ( *(_QWORD **)(v7 + 8) != v6 || (a2 = (_QWORD *)v3[14], (_QWORD *)*a2 != v6) )
      __fastfail(3u);
    *a2 = v7;
    *(_QWORD *)(v7 + 8) = a2;
    v3[14] = v3 + 13;
    *v6 = v6;
  }
  if ( (v3[23] & 0x2000) != 0 )
  {
    RIMLockExclusive(&gObListLock, a2);
    *((_DWORD *)v3 + 50) |= 4u;
    qword_1C0254458 = 0LL;
    ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( *((_BYTE *)v3 + 48) == 2 )
    RIMRemoveHoldingFrame(a1, v3);
  return rimDereferenceDev(v3);
}
