/*
 * XREFs of ?DxgkCddAdapterDereference@@YAXQEAX_K@Z @ 0x1C01DD9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 */

void __fastcall DxgkCddAdapterDereference(DXGADAPTER *a1)
{
  DXGADAPTER::ReleaseReference(a1);
}
