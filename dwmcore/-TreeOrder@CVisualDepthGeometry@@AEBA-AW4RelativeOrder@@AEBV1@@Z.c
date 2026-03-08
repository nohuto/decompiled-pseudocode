/*
 * XREFs of ?TreeOrder@CVisualDepthGeometry@@AEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x180008C80
 * Callers:
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x180008BB8 (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualDepthGeometry::TreeOrder(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = *(_DWORD *)(a1 + 32);
  if ( v2 == -1 || *(_DWORD *)(a2 + 32) == -1 )
    return 2LL;
  else
    return v2 < *(_DWORD *)(a2 + 32);
}
