/*
 * XREFs of ?EmitUpdateCommands@CShapeVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00ABBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0063B90 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitShapes@CShapeVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00ABC04 (-EmitShapes@CShapeVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_296a34529ed03e363818ddfecdea776d___ @ 0x1C02533EC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_296a34529ed03e363818ddfecdea776.c)
 */

char __fastcall DirectComposition::CShapeVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CShapeVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v4; // eax
  char v5; // di
  DirectComposition::CShapeVisualMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) )
    return 0;
  v4 = *((_DWORD *)this + 100);
  v5 = 1;
  v7 = this;
  if ( (v4 & 1) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_296a34529ed03e363818ddfecdea776d___(
                             this,
                             a2,
                             &v7) )
      return 0;
    *((_DWORD *)this + 100) &= ~1u;
  }
  if ( !DirectComposition::CShapeVisualMarshaler::EmitShapes(this, (struct DirectComposition::CBatch **)a2) )
    return 0;
  return v5;
}
