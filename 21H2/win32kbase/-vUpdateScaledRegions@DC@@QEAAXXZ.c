/*
 * XREFs of ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C0062E20
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C001C600 (-bCompute@DC@@QEAAHXZ.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C016D8A0 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 */

void __fastcall DC::vUpdateScaledRegions(DC *this)
{
  __int64 v1; // rax
  struct _SLIST_ENTRY *v3; // rcx
  struct _SLIST_ENTRY *v4; // rcx
  int v5; // eax

  v1 = *((_QWORD *)this + 62);
  if ( v1 && (*(_DWORD *)(v1 + 116) & 0x800) != 0 )
  {
    v5 = *((_DWORD *)this + 130);
    if ( (v5 & 0x10) != 0 )
    {
      vDuplicateAndScaleRegion(
        *((_QWORD *)this + 143),
        (char *)this + 1160,
        _mm_unpacklo_ps((__m128)*((unsigned int *)this + 131), (__m128)*((unsigned int *)this + 132)).m128_u64[0]);
      v5 = *((_DWORD *)this + 130);
    }
    if ( (v5 & 8) != 0 )
      vDuplicateAndScaleRegion(
        *((_QWORD *)this + 144),
        (char *)this + 1168,
        _mm_unpacklo_ps((__m128)*((unsigned int *)this + 131), (__m128)*((unsigned int *)this + 132)).m128_u64[0]);
  }
  else
  {
    v3 = (struct _SLIST_ENTRY *)*((_QWORD *)this + 145);
    if ( v3 )
    {
      REGION::vDeleteREGION(v3);
      *((_QWORD *)this + 145) = 0LL;
    }
    v4 = (struct _SLIST_ENTRY *)*((_QWORD *)this + 146);
    if ( v4 )
    {
      REGION::vDeleteREGION(v4);
      *((_QWORD *)this + 146) = 0LL;
    }
  }
  *((_DWORD *)this + 130) &= 0xFFFFFFE7;
}
