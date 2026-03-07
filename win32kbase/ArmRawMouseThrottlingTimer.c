void __fastcall ArmRawMouseThrottlingTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  char v5; // di
  CMouseSensor *v6; // rcx

  v4 = a2;
  v5 = a1;
  v6 = *(CMouseSensor **)(SGDGetUserSessionState(a1, a2, a3, a4) + 3304);
  if ( v6 )
    CMouseSensor::ArmRawMouseThrottlingTimer(v6, v5, v4);
}
