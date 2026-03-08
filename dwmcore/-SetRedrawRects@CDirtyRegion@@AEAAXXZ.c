/*
 * XREFs of ?SetRedrawRects@CDirtyRegion@@AEAAXXZ @ 0x1801CB088
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800664C0 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Optimize@CDirtyRegion@@QEAAXXZ @ 0x180074E70 (-Optimize@CDirtyRegion@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDirtyRegion::SetRedrawRects(CDirtyRegion *this)
{
  __int64 v1; // r9
  unsigned int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int128 v6; // xmm0
  __int64 v7; // rax

  v1 = 0LL;
  if ( !*((_BYTE *)this + 4424) )
  {
    v3 = *((_DWORD *)this + 705);
    if ( v3 )
    {
      do
      {
        v4 = *((unsigned int *)this + v1 + 697);
        *((_DWORD *)this + v1 + 625) = v4;
        v5 = 2LL * (unsigned int)v1;
        v6 = *((_OWORD *)this + v4 + 106);
        v7 = v1 + 148;
        v1 = (unsigned int)(v1 + 1);
        *(_OWORD *)((char *)this + 8 * v5 + 2532) = v6;
        *((_OWORD *)this + v7) = *(_OWORD *)((char *)this + 8 * v5 + 2660);
        v3 = *((_DWORD *)this + 705);
      }
      while ( (unsigned int)v1 < v3 );
    }
    *((_DWORD *)this + 624) = v3;
    *((_BYTE *)this + 4424) = 1;
  }
}
