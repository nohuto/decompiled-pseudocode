/*
 * XREFs of ?_BuildAccelerationCurve@CDeviceAcceleration@@IEAAXPEAUCurve@1@GI@Z @ 0x1C00BE068
 * Callers:
 *     ?BuildAccelerationCurve@CMouseAcceleration@@UEAAXGPEAUBallistics@CDeviceAcceleration@@@Z @ 0x1C00BDF70 (-BuildAccelerationCurve@CMouseAcceleration@@UEAAXGPEAUBallistics@CDeviceAcceleration@@@Z.c)
 *     ?BuildAccelerationCurve@CTouchpadAcceleration@@UEAAXGPEAUBallistics@CDeviceAcceleration@@@Z @ 0x1C00BE000 (-BuildAccelerationCurve@CTouchpadAcceleration@@UEAAXGPEAUBallistics@CDeviceAcceleration@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDeviceAcceleration::_BuildAccelerationCurve(
        CDeviceAcceleration *this,
        struct CDeviceAcceleration::Curve *a2,
        unsigned __int16 a3,
        unsigned int a4)
{
  unsigned __int16 v5; // ax
  __int64 *v7; // rcx
  unsigned __int64 v8; // r9
  unsigned int v9; // r8d
  unsigned __int64 v10; // rdx
  __int64 v11; // r10
  __int64 v12; // rax
  unsigned int v13; // r10d
  __int64 *v14; // r8
  __int64 v15; // r11
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r9

  v5 = 96;
  v7 = (__int64 *)((char *)a2 + 40);
  v8 = ((unsigned __int64)a4 << 16) / 0xA;
  if ( a3 >= 0x60u )
    v5 = a3;
  v9 = 0;
  v10 = ((unsigned __int64)v5 << 16) / 0x78;
  v11 = this - a2;
  do
  {
    ++v9;
    *v7 = (__int64)(v8 * ((__int64)(*(__int64 *)((char *)v7 + v11 + 16) * v10) >> 16)) >> 16;
    v12 = 229376 * *(__int64 *)((char *)v7++ + v11 - 24);
    *(v7 - 6) = v12 >> 16;
  }
  while ( v9 < 5 );
  v13 = 1;
  v14 = (__int64 *)((char *)a2 + 80);
  do
  {
    v15 = *(v14 - 10);
    v16 = *(v14 - 9) - v15;
    if ( v16 )
    {
      v17 = *(v14 - 5);
      v18 = ((*(v14 - 4) - v17) << 16) / v16;
      v19 = v17 - ((v15 * v18) >> 16);
    }
    else
    {
      v19 = 0LL;
      v18 = 0LL;
    }
    *v14 = v18;
    ++v13;
    v14[4] = v19;
    ++v14;
  }
  while ( v13 < 5 );
}
