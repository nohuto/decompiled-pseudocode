BOOL __stdcall PATHOBJ_bPolyBezierTo(PATHOBJ *ppo, POINTFIX *pptfx, ULONG cptfx)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v5; // [rsp+38h] [rbp-10h]

  v4[2] = 0LL;
  v4[0] = pptfx;
  v4[1] = cptfx;
  v5 = 0;
  return EPATHOBJ::bPolyBezierTo((__int64)ppo, 0LL, (__int64)v4, cptfx);
}
