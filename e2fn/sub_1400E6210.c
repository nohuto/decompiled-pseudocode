void sub_1400E6210()
{
  struct _DEVICE_OBJECT *v0; // rbx

  if ( DeviceObject != &stru_1400DF410 )
  {
    DeviceObject = &stru_1400DF410;
    if ( dword_1400DF408 == 4 )
    {
      v0 = &stru_1400DF410;
      do
      {
        v0->Vpb = 0LL;
        ((void (__fastcall *)(struct _DRIVER_OBJECT *, _QWORD, __int64 (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *, PVPB *))qword_1400DF3F8)(
          v0->DriverObject,
          0LL,
          sub_1400A1F40,
          v0,
          &v0->Vpb);
        v0 = v0->NextDevice;
      }
      while ( v0 );
    }
    else if ( dword_1400DF408 == 2 )
    {
      *(_QWORD *)&stru_1400DF410.Type = sub_1400E63F0;
      IoWMIRegistrationControl(&stru_1400DF410, 0x80010001);
    }
    WppAutoLogStart();
    off_1400DF038 = &stru_1400DF410;
  }
}
