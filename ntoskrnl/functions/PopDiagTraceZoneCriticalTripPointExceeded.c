void __fastcall PopDiagTraceZoneCriticalTripPointExceeded(__int64 a1, __int64 a2)
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
            *(_DWORD *)(a1 + 28) / 0xAu,
            &POP_ETW_EVENT_CRITICAL_TRIP_POINT_DIAGNOSTIC);
          PopDiagTraceTripPointExceeded(
            *(_WORD *)(v7 + 128) >> 1,
            *(_QWORD *)(v7 + 136),
            *(_DWORD *)(a1 + 28) / 0xAu,
            &POP_ETW_EVENT_CRITICAL_TRIP_POINT_SYSTEM);
        }
        ObfDereferenceObjectWithTag(v6, 0x67446F50u);
      }
    }
  }
}
