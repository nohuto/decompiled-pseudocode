__int64 __fastcall SbpVmbusNotificationHandler(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v1 )
    v1 = *(_QWORD *)(a1 + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v1 )
    KeSetEvent(&SbiVmbusArrivalEvent, 0, 0);
  return 0LL;
}
