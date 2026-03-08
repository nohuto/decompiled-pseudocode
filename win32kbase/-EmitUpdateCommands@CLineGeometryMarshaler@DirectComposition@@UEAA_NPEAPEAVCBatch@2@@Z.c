/*
 * XREFs of ?EmitUpdateCommands@CLineGeometryMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02547F0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005E420 (-EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_12bdc2525042d1beee710f192f1f0697___ @ 0x1C0254704 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_12bdc2525042d1beee710f192f1f069.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8e1029071930d5873310be8659e04745___ @ 0x1C0254778 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_8e1029071930d5873310be8659e0474.c)
 */

char __fastcall DirectComposition::CLineGeometryMarshaler::EmitUpdateCommands(
        DirectComposition::CLineGeometryMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CLineGeometryMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CGeometryMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x800) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8e1029071930d5873310be8659e04745___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x800u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x1000) == 0 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_12bdc2525042d1beee710f192f1f0697___(
           (__int64)this,
           a2,
           (__int64)&v7) )
    {
      *((_DWORD *)this + 4) &= ~0x1000u;
      return 1;
    }
  }
  return v4;
}
