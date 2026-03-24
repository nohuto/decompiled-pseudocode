/*
 * XREFs of ?EmitUpdateCommands@CMaskBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0064330
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bc9c2540e4708ef61e34fe7efc9ad18a___ @ 0x1C00642A8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_bc9c2540e4708ef61e34fe7efc9ad18.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8cf1b8f9f0a0ba0dc723af16ce30a7f3___ @ 0x1C0064918 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_8cf1b8f9f0a0ba0dc723af16ce30a7f.c)
 */

char __fastcall DirectComposition::CMaskBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CMaskBrushMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  char v3; // di
  DirectComposition::CMaskBrushMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v7 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bc9c2540e4708ef61e34fe7efc9ad18a___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x40) == 0 )
    return 1;
  if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8cf1b8f9f0a0ba0dc723af16ce30a7f3___(
                          this,
                          a2,
                          &v7) )
  {
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  return v3;
}
