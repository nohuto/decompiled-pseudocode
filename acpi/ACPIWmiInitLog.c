int __fastcall ACPIWmiInitLog(struct _DEVICE_OBJECT *a1)
{
  _UNKNOWN **v1; // rax
  int v2; // edx

  LODWORD(v1) = IoWMIRegistrationControl(a1, 1u);
  if ( (int)v1 < 0 )
  {
    v1 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      LODWORD(v1) = WPP_RECORDER_SF_(
                      WPP_GLOBAL_Control->DeviceExtension,
                      v2,
                      1,
                      10,
                      (__int64)&WPP_3ad0379a4aff33c3a6e5470e3717ea43_Traceguids);
    }
  }
  return (int)v1;
}
