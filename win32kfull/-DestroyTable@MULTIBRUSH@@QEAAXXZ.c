void __fastcall MULTIBRUSH::DestroyTable(MULTIBRUSH *this)
{
  unsigned int *v2; // rax
  unsigned int v3; // esi
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rcx
  volatile signed __int32 *v6; // rcx

  if ( *((_QWORD *)this + 1) )
  {
    v2 = (unsigned int *)*((_QWORD *)this + 4);
    if ( v2 )
    {
      v3 = *v2;
      while ( v3 )
      {
        v4 = *(_QWORD *)&v2[4 * --v3 + 2];
        if ( v4 )
        {
          v5 = (volatile signed __int32 *)(v4 - 16);
          if ( _InterlockedExchangeAdd(v5, 0xFFFFFFFF) == 1 )
            RBRUSH::vFreeOrCacheRBrush(v5, 0LL);
          *(_QWORD *)(*((_QWORD *)this + 4) + 16LL * v3 + 8) = 0LL;
        }
        v2 = (unsigned int *)*((_QWORD *)this + 4);
        v6 = *(volatile signed __int32 **)&v2[4 * v3 + 4];
        if ( v6 )
        {
          if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
            RBRUSH::vFreeOrCacheRBrush(v6, 1LL);
          *(_QWORD *)(*((_QWORD *)this + 4) + 16LL * v3 + 16) = 0LL;
          v2 = (unsigned int *)*((_QWORD *)this + 4);
        }
      }
    }
  }
}
