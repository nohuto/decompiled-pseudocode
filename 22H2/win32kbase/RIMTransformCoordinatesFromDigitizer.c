/*
 * XREFs of RIMTransformCoordinatesFromDigitizer @ 0x1C0190540
 * Callers:
 *     <none>
 * Callees:
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C006F118 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C006FBD8 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMTransformPointerDevicePointToPhysical @ 0x1C00E1258 (RIMTransformPointerDevicePointToPhysical.c)
 *     RIMTransformCoordinates @ 0x1C01901F4 (RIMTransformCoordinates.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C0190788 (RIMTransformPhysicalPointToScreen.c)
 */

void __fastcall RIMTransformCoordinatesFromDigitizer(__int64 a1, int *a2, _DWORD *a3, __int64 a4)
{
  int v8; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v9[4]; // [rsp+38h] [rbp-20h] BYREF
  int v10; // [rsp+60h] [rbp+8h] BYREF

  v9[0] = 0LL;
  v8 = 0;
  if ( !a1 )
  {
    v10 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2253);
  }
  if ( (*(_DWORD *)(a1 + 272) & 0x80u) != 0 && *(_QWORD *)(a1 + 544) )
  {
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
      (RIMLOCKExclusiveIfNeeded *)&v10,
      (struct _KTHREAD **)(*(_QWORD *)(a1 + 408) + 104LL));
    if ( a2 )
    {
      RIMTransformCoordinates(*(_QWORD *)(a1 + 544), 0, a2, v9, &v8);
      RIMTransformPointerDevicePointToPhysical(*(_QWORD *)(a1 + 544), *(_QWORD *)a2, a3);
    }
    RIMTransformPhysicalPointToScreen(*(_QWORD *)(a1 + 544), a3, a4);
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v10);
  }
}
