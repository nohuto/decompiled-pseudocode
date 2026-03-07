bool __fastcall VIDMM_GLOBAL::VerifySegmentSetAtLeastOneInMask(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int *a5)
{
  char v5; // r11
  unsigned int v6; // ebx
  unsigned int v7; // edx

  v5 = 0;
  v6 = *(_DWORD *)(1616LL * a2 + *((_QWORD *)this + 5028) + 28);
  v7 = 0;
  if ( a5 )
    *a5 = 0;
  if ( (~*(_DWORD *)(*((_QWORD *)this + 5028) + 24LL) & a3) != 0 )
    return 0;
  for ( ; a3; a3 >>= 1 )
  {
    if ( (a3 & 1) != 0 && (a4 & *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v6) + 80LL)) == 0 )
      v7 |= 1 << v5;
    ++v5;
    ++v6;
  }
  if ( a5 )
    *a5 = v7;
  return v7 == 0;
}
