void __fastcall DoAccel(__int64 a1, int *a2, int *a3, struct _SUBPIXELS *a4)
{
  __int64 v5; // rbx
  __int64 v8; // rax

  v5 = (int)a1;
  v8 = SGDGetUserSessionState(a1, a2, a3, a4);
  CDeviceAcceleration::Accelerate(*(CDeviceAcceleration **)(v8 + 24 * (v5 + 667)), a2, a3, a4);
}
