void __fastcall ReadDefaultAccelerationCurves(__int64 a1, struct _UNICODE_STRING *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rax

  v5 = (int)a1;
  v6 = SGDGetUserSessionState(a1, a2, a3, a4);
  CDeviceAcceleration::CreateDefaultAcceleratorCurve(*(CDeviceAcceleration **)(v6 + 24 * (v5 + 667)), a2);
}
