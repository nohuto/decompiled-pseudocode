/*
 * XREFs of ?RemoveProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18000A2C8
 * Callers:
 *     ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x180008E5C (-SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 */

void __fastcall CComposition::RemoveProjectedShadowCasterVisual(CComposition *this, struct CVisual *a2)
{
  struct CVisual **v2; // r8
  struct CVisual **v4; // rcx
  struct CVisual **v6; // rdx

  v2 = (struct CVisual **)*((_QWORD *)this + 136);
  v4 = (struct CVisual **)*((_QWORD *)this + 135);
  if ( v4 != v2 )
  {
    while ( 1 )
    {
      v6 = v4 + 1;
      if ( *v4 == a2 )
        break;
      ++v4;
      if ( v6 == v2 )
        return;
    }
    memmove_0(v4, v6, (char *)v2 - (char *)v6);
    *((_QWORD *)this + 136) -= 8LL;
  }
}
