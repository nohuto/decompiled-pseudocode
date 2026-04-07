/*
 * XREFs of ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x18000CF34
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x180004A24 (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@@@Z @ 0x180006328 (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18000CCA4 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180012584 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAccent::s_IsPolicyActive(const struct ACCENT_POLICY *a1)
{
  bool result; // al

  result = 0;
  if ( *(_DWORD *)a1 )
    return *(_DWORD *)a1 != 6;
  return result;
}
