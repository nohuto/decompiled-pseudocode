__int64 __fastcall RIMRegisterForDeviceChangeNotifications(
        __int64 a1,
        struct _DRIVER_OBJECT *a2,
        __int64 a3,
        void *a4,
        PVOID *a5)
{
  void *v5; // r8
  NTSTATUS v7; // ebx
  char v9; // r11
  char v10; // r11
  int v11; // edx
  __int64 v12; // r10
  int v13; // r8d
  int v14; // [rsp+20h] [rbp-48h]
  int v15; // [rsp+28h] [rbp-40h]
  int v16; // [rsp+30h] [rbp-38h]

  v5 = *(void **)(a1 + 232);
  v7 = -1073741823;
  if ( v5 )
  {
    v7 = IoRegisterPlugPlayNotification(
           EventCategoryTargetDeviceChange,
           0,
           v5,
           a2,
           (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)RIMDeviceNotify,
           a4,
           a5);
    if ( v7 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (v9 = 1, (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v9 = 0;
      }
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
        LOBYTE(v11) = v10;
        WPP_RECORDER_AND_TRACE_SF_DSd(*(_QWORD *)(v12 + 24), v11, v13, (_DWORD)gRimLog, v14, v15, v16);
      }
    }
  }
  return (unsigned int)v7;
}
