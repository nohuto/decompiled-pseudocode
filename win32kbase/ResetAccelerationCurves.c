void __fastcall ResetAccelerationCurves(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax

  v4 = (int)a1;
  v5 = SGDGetUserSessionState(a1, a2, a3, a4);
  CDeviceAcceleration::ResetAccelerationCurves(*(CDeviceAcceleration **)(v5 + 24 * (v4 + 667)));
}
