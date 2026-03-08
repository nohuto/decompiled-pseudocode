/*
 * XREFs of IsValidAxisAlignedRect @ 0x180049BD0
 * Callers:
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18004A01C (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsValidAxisAlignedRect(__int64 a1)
{
  float *v1; // rdx
  __int64 v2; // r8
  float v3; // xmm1_4
  float v4; // xmm2_4

  v1 = *(float **)a1;
  v2 = *(int *)(a1 + 8);
  v3 = **(float **)a1;
  v4 = *(float *)(v2 + *(_QWORD *)a1);
  if ( v3 == v4 )
  {
    if ( *(float *)((char *)v1 + v2 + 4) != *(float *)((char *)v1 + 2 * (int)v2 + 4)
      || *(float *)((char *)v1 + 2 * (int)v2) != *(float *)((char *)v1 + 3 * (int)v2) )
    {
      return 0;
    }
    return *(float *)((char *)v1 + 3 * (int)v2 + 4) == v1[1];
  }
  else
  {
    if ( v1[1] != *(float *)((char *)v1 + v2 + 4)
      || v4 != *(float *)((char *)v1 + 2 * (int)v2)
      || *(float *)((char *)v1 + 2 * (int)v2 + 4) != *(float *)((char *)v1 + 3 * (int)v2 + 4) )
    {
      return 0;
    }
    return *(float *)((char *)v1 + 3 * (int)v2) == v3;
  }
}
