/*
 * XREFs of ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001EBD8
 * Callers:
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x18000967C (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?EnsureNoInvalidIntermediates@CProjectedShadowCaster@@QEAAXXZ @ 0x18021659C (-EnsureNoInvalidIntermediates@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180216A40 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEBVCVisualTree@@UVisualPropertyData@CProjec.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEBVCVisualTree@@@Z @ 0x180216D00 (-erase@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$l.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>>,std::_Iterator_base0>::operator++(
        __int64 **a1)
{
  __int64 *v1; // rax
  __int64 *i; // rdx
  __int64 *v4; // r8

  v1 = *a1;
  i = (__int64 *)(*a1)[2];
  if ( *((_BYTE *)i + 25) )
  {
    for ( i = (__int64 *)v1[1]; !*((_BYTE *)i + 25) && v1 == (__int64 *)i[2]; i = (__int64 *)i[1] )
    {
      *a1 = i;
      v1 = i;
    }
  }
  else
  {
    v4 = (__int64 *)*i;
    if ( !*(_BYTE *)(*i + 25) )
    {
      do
      {
        i = v4;
        v4 = (__int64 *)*v4;
      }
      while ( !*((_BYTE *)v4 + 25) );
    }
  }
  *a1 = i;
  return a1;
}
