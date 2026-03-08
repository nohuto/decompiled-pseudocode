/*
 * XREFs of ?EmitUpdateCommands@CLegacyRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00C7900
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0dca58dedee681c2db4143a7d5c4dddd___ @ 0x1C00C79D8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_0dca58dedee681c2db4143a7d5c4ddd.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fbf2c2e72a7ecc86c38497c8671e26fa___ @ 0x1C00C7A84 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_fbf2c2e72a7ecc86c38497c8671e26f.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_445a897ea505adbe0f549939e4f41058___ @ 0x1C00C7B0C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_445a897ea505adbe0f549939e4f4105.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d0f374611bb8dc0ba31b4790b22eca40___ @ 0x1C0265EB8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d0f374611bb8dc0ba31b4790b22eca4.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d7d56ac9f16d14401dfc56dbf06a7cb8___ @ 0x1C0265F2C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d7d56ac9f16d14401dfc56dbf06a7cb.c)
 */

char __fastcall DirectComposition::CLegacyRenderTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CLegacyRenderTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  char v3; // di
  char *v7; // rcx
  void *v8; // [rsp+30h] [rbp+10h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v8 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_445a897ea505adbe0f549939e4f41058___(
                             this,
                             a2,
                             &v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x40) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fbf2c2e72a7ecc86c38497c8671e26fa___(
                             this,
                             a2,
                             &v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x80u) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0dca58dedee681c2db4143a7d5c4dddd___(
                             this,
                             a2,
                             &v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x100) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d0f374611bb8dc0ba31b4790b22eca40___(
                             this,
                             a2,
                             &v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x100u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x200) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d7d56ac9f16d14401dfc56dbf06a7cb8___(
                             this,
                             a2,
                             &v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x200u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x400) != 0 )
  {
    v8 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v8) )
      return v3;
    v7 = (char *)v8;
    *(_DWORD *)v8 = 12;
    *(_QWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 1) = 338;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)this + 4) &= ~0x400u;
  }
  return 1;
}
