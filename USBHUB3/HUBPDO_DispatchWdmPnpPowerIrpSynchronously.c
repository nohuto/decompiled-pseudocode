NTSTATUS __fastcall HUBPDO_DispatchWdmPnpPowerIrpSynchronously(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v4 = *(_QWORD *)(a2 + 184);
  *(_OWORD *)(v4 - 72) = *(_OWORD *)v4;
  *(_OWORD *)(v4 - 56) = *(_OWORD *)(v4 + 16);
  *(_OWORD *)(v4 - 40) = *(_OWORD *)(v4 + 32);
  *(_QWORD *)(v4 - 24) = *(_QWORD *)(v4 + 48);
  *(_BYTE *)(v4 - 69) = 0;
  v5 = *(_QWORD *)(a2 + 184);
  *(_QWORD *)(v5 - 16) = USBD_SyncCompletionRoutine;
  *(_QWORD *)(v5 - 8) = &Event;
  *(_BYTE *)(v5 - 69) = -32;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 272))(WdfDriverGlobals, a1, a2);
  return KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
}
