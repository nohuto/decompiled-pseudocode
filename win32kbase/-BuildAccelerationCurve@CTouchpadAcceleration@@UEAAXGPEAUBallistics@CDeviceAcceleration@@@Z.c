/*
 * XREFs of ?BuildAccelerationCurve@CTouchpadAcceleration@@UEAAXGPEAUBallistics@CDeviceAcceleration@@@Z @ 0x1C00BE000
 * Callers:
 *     <none>
 * Callees:
 *     ?_BuildAccelerationCurve@CDeviceAcceleration@@IEAAXPEAUCurve@1@GI@Z @ 0x1C00BE068 (-_BuildAccelerationCurve@CDeviceAcceleration@@IEAAXPEAUCurve@1@GI@Z.c)
 */

void __fastcall CTouchpadAcceleration::BuildAccelerationCurve(
        CTouchpadAcceleration *this,
        __int64 a2,
        struct CDeviceAcceleration::Ballistics *a3,
        __int64 a4)
{
  unsigned __int16 v5; // si
  __int64 v7; // rax
  unsigned int v8; // r9d

  v5 = a2;
  if ( *((_BYTE *)this + 8) )
  {
    v7 = SGDGetUserSessionState(this, a2, a3, a4);
    v8 = *(_DWORD *)(v7 + 16816);
    if ( !v8 )
    {
      v8 = *((_DWORD *)this + 24);
      *(_DWORD *)(v7 + 16816) = v8;
    }
    CDeviceAcceleration::_BuildAccelerationCurve(
      this,
      (struct CDeviceAcceleration::Ballistics *)((char *)a3 + 144),
      v5,
      v8);
  }
}
