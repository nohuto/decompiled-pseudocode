unsigned __int8 __fastcall VIDMM_GLOBAL::CheckForCpuVisibleMemorySegment(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v3; // rdx
  unsigned int v4; // r9d
  int v5; // eax

  v3 = *((_QWORD *)this + 5028) + 1616LL * a2;
  v4 = *(_DWORD *)(v3 + 28);
  if ( (~*(_DWORD *)(v3 + 24) & a3) != 0 || !a3 )
    return 0;
  while ( 1 )
  {
    if ( (a3 & 1) != 0 )
    {
      v5 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v4) + 80LL);
      if ( (v5 & 0x1001) == 0 && (v5 & 0x6004) != 0 )
        break;
    }
    ++v4;
    a3 >>= 1;
    if ( !a3 )
      return 0;
  }
  return 1;
}
