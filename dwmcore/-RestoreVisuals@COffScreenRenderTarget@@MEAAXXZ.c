/*
 * XREFs of ?RestoreVisuals@COffScreenRenderTarget@@MEAAXXZ @ 0x18012CDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x180021EDC (-RestoreCursors@CComposition@@QEAAXXZ.c)
 */

void __fastcall COffScreenRenderTarget::RestoreVisuals(CComposition **this)
{
  if ( *((_DWORD *)this + 438) )
    CComposition::RestoreCursors(this[2]);
}
