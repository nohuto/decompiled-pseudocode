/*
 * XREFs of PopDiagTraceZoneS4TripPointExceeded @ 0x1408EBF90
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403C4D58 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BEF0 (EtwEventEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14034C53C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopDiagTraceTripPointExceeded @ 0x1408EBBA0 (PopDiagTraceTripPointExceeded.c)
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
        v7 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
      else
        v7 = 0LL;
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
      if ( v6 )
        ObfDereferenceObjectWithTag(v6, 0x67446F50u);
    }
  }
}
