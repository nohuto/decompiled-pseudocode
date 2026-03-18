/*
 * XREFs of PopDiagTraceZoneS4TripPointExceeded @ 0x14099237C
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140373610 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x140258300 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140302A88 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopDiagTraceTripPointExceeded @ 0x140991F94 (PopDiagTraceTripPointExceeded.c)
 */

void __fastcall PopDiagTraceZoneS4TripPointExceeded(__int64 a1, __int64 a2)
{
  REGHANDLE v4; // rbx
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v6; // rbx
  __int64 v7; // rdi

  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CRITICAL_TRIP_POINT_DIAGNOSTIC)
      || EtwEventEnabled(v4, &POP_ETW_EVENT_CRITICAL_TRIP_POINT_SYSTEM) )
    {
      DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(a2, 0x67446F50u);
      v6 = DeviceAttachmentBaseRefWithTag;
      if ( DeviceAttachmentBaseRefWithTag )
      {
        v7 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
        if ( v7 )
        {
          PopDiagTraceTripPointExceeded(
            *(_WORD *)(v7 + 128) >> 1,
            *(_QWORD *)(v7 + 136),
            *(_DWORD *)(a1 + 76) / 0xAu,
            (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_S4_TRIP_POINT_DIAGNOSTIC);
          PopDiagTraceTripPointExceeded(
            *(_WORD *)(v7 + 128) >> 1,
            *(_QWORD *)(v7 + 136),
            *(_DWORD *)(a1 + 76) / 0xAu,
            (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_S4_TRIP_POINT_SYSTEM);
        }
        ObfDereferenceObjectWithTag(v6, 0x67446F50u);
      }
    }
  }
}
