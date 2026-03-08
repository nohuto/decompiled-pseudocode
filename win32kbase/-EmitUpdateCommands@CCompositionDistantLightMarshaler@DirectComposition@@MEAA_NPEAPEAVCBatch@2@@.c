/*
 * XREFs of ?EmitUpdateCommands@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B26B0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7c1155b577671b4183af86193a0eea7b___ @ 0x1C00B2760 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_7c1155b577671b4183af86193a0eea7.c)
 *     ?EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B2970 (-EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fd91b4abd68bd97237f627bc67b00df7___ @ 0x1C00B2E18 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_fd91b4abd68bd97237f627bc67b00df.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_29f3df4b6d104115088d420d25cd3508___ @ 0x1C0269768 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_29f3df4b6d104115088d420d25cd350.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_67bb4783cf1ad34147e83603bdc876e1___ @ 0x1C02697DC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_67bb4783cf1ad34147e83603bdc876e.c)
 */

char __fastcall DirectComposition::CCompositionDistantLightMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionDistantLightMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CCompositionDistantLightMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CCompositionLightMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x100) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_67bb4783cf1ad34147e83603bdc876e1___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x200) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7c1155b577671b4183af86193a0eea7b___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x200u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x400) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fd91b4abd68bd97237f627bc67b00df7___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x400u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x800) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_29f3df4b6d104115088d420d25cd3508___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x800u;
    }
    return 1;
  }
  return v4;
}
