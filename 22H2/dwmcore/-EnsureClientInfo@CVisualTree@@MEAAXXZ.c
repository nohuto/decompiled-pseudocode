/*
 * XREFs of ?EnsureClientInfo@CVisualTree@@MEAAXXZ @ 0x1800C6030
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateClientBounds@CVisualTree@@IEAAXXZ @ 0x1800C6060 (-UpdateClientBounds@CVisualTree@@IEAAXXZ.c)
 */

void __fastcall CVisualTree::EnsureClientInfo(CVisualTree *this)
{
  if ( *((_BYTE *)this + 5893) )
  {
    CVisualTree::UpdateClientBounds(this);
    *((_BYTE *)this + 5893) = 0;
  }
}
