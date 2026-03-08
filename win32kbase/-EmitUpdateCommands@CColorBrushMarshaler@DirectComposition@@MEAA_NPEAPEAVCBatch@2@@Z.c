/*
 * XREFs of ?EmitUpdateCommands@CColorBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00AE010
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a8f1926a06d95cad46304dfafce056fe___ @ 0x1C00AE04C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a8f1926a06d95cad46304dfafce056f.c)
 */

char __fastcall DirectComposition::CColorBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CColorBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char updated; // al
  char v5; // dl
  DirectComposition::CColorBrushMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v7 = this;
  if ( (v2 & 0x20) == 0 )
    return 1;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a8f1926a06d95cad46304dfafce056fe___(
              this,
              a2,
              &v7);
  v5 = 0;
  if ( updated )
  {
    *((_DWORD *)this + 4) &= ~0x20u;
    return 1;
  }
  return v5;
}
