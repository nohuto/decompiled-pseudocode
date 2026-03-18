/*
 * XREFs of ?EmitUpdateCommands@CComponentTransform2DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00072B0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3fb4fd2fa475976a4c9077d17217d36d___ @ 0x1C00073F8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_3fb4fd2fa475976a4c9077d17217d36.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e2e130be531dcf6684c12c56d14076c1___ @ 0x1C000747C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e2e130be531dcf6684c12c56d14076c.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1ec7242a182fd7ab52eab4ec75b316de___ @ 0x1C00074F4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_1ec7242a182fd7ab52eab4ec75b316d.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_645b102eff9e887120288b9b65e9f1dc___ @ 0x1C0007568 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_645b102eff9e887120288b9b65e9f1d.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e0098fcade8aafb263e245137e45c739___ @ 0x1C00075E0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e0098fcade8aafb263e245137e45c73.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a426e53e1cc74de2ae842011fff912d3___ @ 0x1C0007658 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a426e53e1cc74de2ae842011fff912d.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0010F54 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CComponentTransform2DMarshaler::EmitUpdateCommands(
        DirectComposition::CComponentTransform2DMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CComponentTransform2DMarshaler *v7; // [rsp+50h] [rbp+30h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x100) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e0098fcade8aafb263e245137e45c739___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x80u) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a426e53e1cc74de2ae842011fff912d3___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x80u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x200) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_645b102eff9e887120288b9b65e9f1dc___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x200u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x400) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1ec7242a182fd7ab52eab4ec75b316de___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x400u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x800) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e2e130be531dcf6684c12c56d14076c1___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x800u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x1000) != 0 )
      return 1;
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3fb4fd2fa475976a4c9077d17217d36d___(
                            this,
                            a2,
                            &v7) )
    {
      *((_DWORD *)this + 4) |= 0x1000u;
      return 1;
    }
  }
  return v4;
}
