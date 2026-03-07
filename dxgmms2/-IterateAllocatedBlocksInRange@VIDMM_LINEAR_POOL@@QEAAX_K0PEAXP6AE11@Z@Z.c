void __fastcall VIDMM_LINEAR_POOL::IterateAllocatedBlocksInRange(
        VIDMM_LINEAR_POOL *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4)
{
  __int64 v4; // rbx
  char *v5; // rdi
  __int64 v9; // rdx

  v4 = *((_QWORD *)this + 8);
  v5 = (char *)this + 56;
  while ( (char *)v4 != v5 )
  {
    v9 = v4 - 24;
    v4 = *(_QWORD *)(v4 + 8);
    if ( *(_QWORD *)v9 < a3
      && *(_QWORD *)(v9 + 8) + *(_QWORD *)v9 > a2
      && *(_BYTE *)(v9 + 56) == 3
      && !EvictAllocationCallback(a4, *(_QWORD **)(v9 + 16)) )
    {
      break;
    }
  }
}
