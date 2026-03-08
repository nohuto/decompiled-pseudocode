/*
 * XREFs of ?EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005E020
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bb34648711a931ab5ad1c149860d250a___ @ 0x1C005D8D4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_bb34648711a931ab5ad1c149860d250.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1c1a09fe0a8665e2e9f0d097516b5cc3___ @ 0x1C005D948 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_1c1a09fe0a8665e2e9f0d097516b5cc.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_17e7e5f163a05a9809000ff61a5037c8___ @ 0x1C005D9BC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_17e7e5f163a05a9809000ff61a5037c.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1e021b8262ef7ca9dfd23d962b3a4e29___ @ 0x1C005DA30 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_1e021b8262ef7ca9dfd23d962b3a4e2.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_adea4d0abd8eda5f6785acddb97df7f7___ @ 0x1C005DEE4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_adea4d0abd8eda5f6785acddb97df7f.c)
 *     ?EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005E420 (-EmitUpdateCommands@CGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_43b8043df50856006a6ed6aa1fc2f146___ @ 0x1C00C7CC8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_43b8043df50856006a6ed6aa1fc2f14.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_434462f31b25e0468172fd3eb5297425___ @ 0x1C00C7D3C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_434462f31b25e0468172fd3eb529742.c)
 */

char __fastcall DirectComposition::CRectangleClipMarshaler::EmitUpdateCommands(
        DirectComposition::CRectangleClipMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v2; // di
  int v5; // eax
  int v6; // esi
  char updated; // al
  int v9; // eax
  DirectComposition::CRectangleClipMarshaler *v10; // [rsp+40h] [rbp+20h] BYREF

  v2 = 0;
  if ( *((_BYTE *)this + 145) )
  {
    if ( !DirectComposition::CGeometryMarshaler::EmitUpdateCommands(this, a2) )
      return v2;
    v9 = *((_DWORD *)this + 4);
    v10 = this;
    if ( (v9 & 0x800) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_adea4d0abd8eda5f6785acddb97df7f7___(
              (__int64)this,
              a2,
              (__int64)&v10) )
        return v2;
      *((_DWORD *)this + 4) |= 0x800u;
      v9 = *((_DWORD *)this + 4);
    }
    v10 = this;
    if ( (v9 & 0x1000) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_434462f31b25e0468172fd3eb5297425___(
                               this,
                               a2,
                               &v10) )
        return v2;
      *((_DWORD *)this + 4) |= 0x1000u;
      v9 = *((_DWORD *)this + 4);
    }
    v6 = 0x4000;
    v10 = this;
    if ( (v9 & 0x4000) != 0 )
      return 1;
    updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_43b8043df50856006a6ed6aa1fc2f146___(
                this,
                a2,
                &v10);
  }
  else
  {
    if ( !DirectComposition::CGeometryMarshaler::EmitUpdateCommands(this, a2) )
      return v2;
    v5 = *((_DWORD *)this + 4);
    v10 = this;
    if ( (v5 & 0x800) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_adea4d0abd8eda5f6785acddb97df7f7___(
              (__int64)this,
              a2,
              (__int64)&v10) )
        return v2;
      *((_DWORD *)this + 4) |= 0x800u;
      v5 = *((_DWORD *)this + 4);
    }
    v10 = this;
    if ( (v5 & 0x1000) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bb34648711a931ab5ad1c149860d250a___(
              (__int64)this,
              a2,
              (__int64)&v10) )
        return v2;
      *((_DWORD *)this + 4) |= 0x1000u;
      v5 = *((_DWORD *)this + 4);
    }
    v10 = this;
    if ( (v5 & 0x2000) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1c1a09fe0a8665e2e9f0d097516b5cc3___(
              (__int64)this,
              a2,
              (__int64)&v10) )
        return v2;
      *((_DWORD *)this + 4) |= 0x2000u;
      v5 = *((_DWORD *)this + 4);
    }
    v10 = this;
    if ( (v5 & 0x4000) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_17e7e5f163a05a9809000ff61a5037c8___(
              (__int64)this,
              a2,
              (__int64)&v10) )
        return v2;
      *((_DWORD *)this + 4) |= 0x4000u;
      v5 = *((_DWORD *)this + 4);
    }
    v6 = 0x8000;
    v10 = this;
    if ( (v5 & 0x8000) != 0 )
      return 1;
    updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1e021b8262ef7ca9dfd23d962b3a4e29___(
                (__int64)this,
                a2,
                (__int64)&v10);
  }
  if ( updated )
  {
    *((_DWORD *)this + 4) |= v6;
    return 1;
  }
  return v2;
}
