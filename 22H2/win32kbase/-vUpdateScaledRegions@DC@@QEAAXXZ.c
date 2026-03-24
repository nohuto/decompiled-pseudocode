/*
 * XREFs of ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C00219A0
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003BFE0 (-bCompute@DC@@QEAAHXZ.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0021A1C (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C002CE60 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C0140CD8 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 */

void __fastcall DC::vUpdateScaledRegions(DC *this)
{
  REGION *v2; // rcx
  REGION *v3; // rcx
  int v4; // eax

  if ( (unsigned int)DC::bDpiScaledSurface(this) )
  {
    v4 = *((_DWORD *)this + 130);
    if ( (v4 & 0x10) != 0 )
    {
      vDuplicateAndScaleRegion(
        *((_QWORD *)this + 144),
        (char *)this + 1168,
        _mm_unpacklo_ps((__m128)*((unsigned int *)this + 131), (__m128)*((unsigned int *)this + 132)).m128_u64[0]);
      v4 = *((_DWORD *)this + 130);
    }
    if ( (v4 & 8) != 0 )
      vDuplicateAndScaleRegion(
        *((_QWORD *)this + 145),
        (char *)this + 1176,
        _mm_unpacklo_ps((__m128)*((unsigned int *)this + 131), (__m128)*((unsigned int *)this + 132)).m128_u64[0]);
  }
  else
  {
    v2 = (REGION *)*((_QWORD *)this + 146);
    if ( v2 )
    {
      REGION::vDeleteREGION(v2);
      *((_QWORD *)this + 146) = 0LL;
    }
    v3 = (REGION *)*((_QWORD *)this + 147);
    if ( v3 )
    {
      REGION::vDeleteREGION(v3);
      *((_QWORD *)this + 147) = 0LL;
    }
  }
  *((_DWORD *)this + 130) &= 0xFFFFFFE7;
}
