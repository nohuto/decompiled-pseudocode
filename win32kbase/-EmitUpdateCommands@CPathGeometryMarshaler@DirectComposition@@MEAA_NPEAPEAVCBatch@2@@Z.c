/*
 * XREFs of ?EmitUpdateCommands@CPathGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BB3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005E420 (-EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a31f4c013bbf96eb9a301cb6dcc37814___ @ 0x1C00BB408 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a31f4c013bbf96eb9a301cb6dcc3781.c)
 */

char __fastcall DirectComposition::CPathGeometryMarshaler::EmitUpdateCommands(
        DirectComposition::CPathGeometryMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  bool v5; // zf
  DirectComposition::CPathGeometryMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CGeometryMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = (*((_DWORD *)this + 4) & 0x800) == 0;
    v7 = this;
    if ( v5 )
      return 1;
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a31f4c013bbf96eb9a301cb6dcc37814___(
                            this,
                            a2,
                            &v7) )
    {
      *((_DWORD *)this + 4) &= ~0x800u;
      return 1;
    }
  }
  return v4;
}
