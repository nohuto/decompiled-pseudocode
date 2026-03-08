/*
 * XREFs of ?EmitUpdateCommands@CCompositionPointLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0269DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B2970 (-EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0578d7876d071ce6edf465ea00a6a02d___ @ 0x1C026994C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_0578d7876d071ce6edf465ea00a6a02.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0ea873770eab5e6b0c1400c78fd54f4a___ @ 0x1C02699C0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_0ea873770eab5e6b0c1400c78fd54f4.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_14ea704b84f11eaecfdc4930f2564f38___ @ 0x1C0269A50 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_14ea704b84f11eaecfdc4930f2564f3.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2c7e6bcb0bb77934c800df7397a3b024___ @ 0x1C0269AD8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_2c7e6bcb0bb77934c800df7397a3b02.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_919146c8487f8773d97c5c8497a90862___ @ 0x1C0269B50 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_919146c8487f8773d97c5c8497a9086.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9891c3a5e535f658443c7c49e7267728___ @ 0x1C0269BC4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_9891c3a5e535f658443c7c49e726772.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a308fe663ed6b9cebb78f399c139747d___ @ 0x1C0269C38 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a308fe663ed6b9cebb78f399c139747.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c434336bac4c6d448030dca56988c69f___ @ 0x1C0269CAC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_c434336bac4c6d448030dca56988c69.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d574facd86693365a72a838dbbf0e016___ @ 0x1C0269D20 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d574facd86693365a72a838dbbf0e01.c)
 */

char __fastcall DirectComposition::CCompositionPointLightMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionPointLightMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CCompositionPointLightMarshaler *v7; // [rsp+40h] [rbp+20h] BYREF

  v4 = 0;
  if ( DirectComposition::CCompositionLightMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x100) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_919146c8487f8773d97c5c8497a90862___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x200) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d574facd86693365a72a838dbbf0e016___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x200u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x400) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a308fe663ed6b9cebb78f399c139747d___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x400u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x800) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2c7e6bcb0bb77934c800df7397a3b024___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x800u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x1000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_14ea704b84f11eaecfdc4930f2564f38___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x1000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x2000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0ea873770eab5e6b0c1400c78fd54f4a___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x2000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x4000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0578d7876d071ce6edf465ea00a6a02d___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x4000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x8000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9891c3a5e535f658443c7c49e7267728___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x8000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x10000) == 0 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c434336bac4c6d448030dca56988c69f___(
           (__int64)this,
           a2,
           (__int64)&v7) )
    {
      *((_DWORD *)this + 4) &= ~0x10000u;
      return 1;
    }
  }
  return v4;
}
