void __fastcall DC::vUpdateScaledRegions(DC *this)
{
  __int64 v1; // rax
  void *v3; // rcx
  void *v4; // rcx

  v1 = *((_QWORD *)this + 62);
  if ( v1 && (*(_DWORD *)(v1 + 116) & 0x800) != 0 )
  {
    if ( (*((_DWORD *)this + 130) & 0x10) != 0 )
      vDuplicateAndScaleRegion(
        *((_QWORD *)this + 143),
        (char *)this + 1160,
        _mm_unpacklo_ps((__m128)*((unsigned int *)this + 131), (__m128)*((unsigned int *)this + 132)).m128_u64[0]);
    if ( (*((_DWORD *)this + 130) & 8) != 0 )
      vDuplicateAndScaleRegion(
        *((_QWORD *)this + 144),
        (char *)this + 1168,
        _mm_unpacklo_ps((__m128)*((unsigned int *)this + 131), (__m128)*((unsigned int *)this + 132)).m128_u64[0]);
  }
  else
  {
    v3 = (void *)*((_QWORD *)this + 145);
    if ( v3 )
    {
      REGION::vDeleteREGION(v3);
      *((_QWORD *)this + 145) = 0LL;
    }
    v4 = (void *)*((_QWORD *)this + 146);
    if ( v4 )
    {
      REGION::vDeleteREGION(v4);
      *((_QWORD *)this + 146) = 0LL;
    }
  }
  *((_DWORD *)this + 130) &= 0xFFFFFFE7;
}
