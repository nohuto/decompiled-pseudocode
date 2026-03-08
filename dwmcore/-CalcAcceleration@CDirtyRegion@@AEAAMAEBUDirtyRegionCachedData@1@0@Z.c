/*
 * XREFs of ?CalcAcceleration@CDirtyRegion@@AEAAMAEBUDirtyRegionCachedData@1@0@Z @ 0x1800E9090
 * Callers:
 *     ?Optimize@CDirtyRegion@@QEAAXXZ @ 0x180074E70 (-Optimize@CDirtyRegion@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CDirtyRegion::CalcAcceleration(
        CDirtyRegion *this,
        const struct CDirtyRegion::DirtyRegionCachedData *a2,
        const struct CDirtyRegion::DirtyRegionCachedData *a3)
{
  float v3; // xmm1_4
  float v4; // xmm2_4

  v3 = 0.0;
  if ( !*((_BYTE *)a3 + 12) )
  {
    if ( *((_BYTE *)a2 + 12) )
    {
      return FLOAT_3_4028235e38;
    }
    else
    {
      v4 = (float)((float)(*((float *)a2 + 1) - *((float *)a3 + 1)) * (float)(*((float *)a2 + 1) - *((float *)a3 + 1)))
         + (float)((float)(*(float *)a2 - *(float *)a3) * (float)(*(float *)a2 - *(float *)a3));
      if ( v4 != 0.0 )
        return (float)(*((float *)a2 + 2) + *((float *)a3 + 2)) / v4;
    }
  }
  return v3;
}
