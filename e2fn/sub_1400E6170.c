void sub_1400E6170()
{
  PDEVICE_OBJECT v0; // rbx

  v0 = DeviceObject;
  if ( DeviceObject != (PDEVICE_OBJECT)&DeviceObject )
  {
    if ( dword_1400DF408 == 4 )
    {
      while ( v0 )
      {
        if ( v0->Vpb )
        {
          ((void (*)(void))qword_1400DF3F0)();
          v0->Vpb = 0LL;
        }
        v0 = v0->NextDevice;
      }
    }
    else if ( dword_1400DF408 == 2 )
    {
      IoWMIRegistrationControl(DeviceObject, 0x80000002);
    }
    WppAutoLogStop();
    DeviceObject = (PDEVICE_OBJECT)&DeviceObject;
    off_1400DF038 = &off_1400DF038;
  }
}
