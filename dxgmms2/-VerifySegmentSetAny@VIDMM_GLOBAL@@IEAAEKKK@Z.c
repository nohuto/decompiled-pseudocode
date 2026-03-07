unsigned __int8 __fastcall VIDMM_GLOBAL::VerifySegmentSetAny(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3,
        int a4)
{
  __int64 v4; // rdx
  unsigned int v5; // r10d

  v4 = *((_QWORD *)this + 5028) + 1616LL * a2;
  v5 = *(_DWORD *)(v4 + 28);
  if ( (~*(_DWORD *)(v4 + 24) & a3) != 0 || !a3 )
    return 0;
  while ( (a3 & 1) == 0 || a4 != (a4 & *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v5) + 80LL)) )
  {
    ++v5;
    a3 >>= 1;
    if ( !a3 )
      return 0;
  }
  return 1;
}
