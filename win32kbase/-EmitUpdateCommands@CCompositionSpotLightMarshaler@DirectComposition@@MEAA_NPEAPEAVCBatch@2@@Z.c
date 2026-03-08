/*
 * XREFs of ?EmitUpdateCommands@CCompositionSpotLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B27F0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B2970 (-EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_59df19cd82aa0b5274acc14f57ff20e8___ @ 0x1C00B2C38 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_59df19cd82aa0b5274acc14f57ff20e.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2c1f8eac7d0908e063a225be70820b55___ @ 0x1C00B2CAC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_2c1f8eac7d0908e063a225be70820b5.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5a7aae95d2af49f4475e794f2d9a8b36___ @ 0x1C00B2D20 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_5a7aae95d2af49f4475e794f2d9a8b3.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fc5b1090fc775d57472a3a4f064e3e29___ @ 0x1C00B2D94 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_fc5b1090fc775d57472a3a4f064e3e2.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0503b74597bbb46fe98aa01bfe88c823___ @ 0x1C026A2E8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_0503b74597bbb46fe98aa01bfe88c82.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1bdcdfffebc9fe8f51a48372c463eebc___ @ 0x1C026A364 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_1bdcdfffebc9fe8f51a48372c463eeb.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_249b8acf533f0295f6f6f7663953ea49___ @ 0x1C026A3D8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_249b8acf533f0295f6f6f7663953ea4.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2d20ccaa8a8d57dcc22f8d29f876525b___ @ 0x1C026A44C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_2d20ccaa8a8d57dcc22f8d29f876525.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_424ce2d8855ecd62da796686cbff57ab___ @ 0x1C026A4D8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_424ce2d8855ecd62da796686cbff57a.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5950affea281d9aa891b31250703d620___ @ 0x1C026A54C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_5950affea281d9aa891b31250703d62.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_85b3d6b2ee95012b0f566bc6f33b2e3e___ @ 0x1C026A5C0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_85b3d6b2ee95012b0f566bc6f33b2e3.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b92ccbfeaa32366b54a2c61627a3da6e___ @ 0x1C026A650 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_b92ccbfeaa32366b54a2c61627a3da6.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_caaf1d60fb47a0f58dfb02792837cd37___ @ 0x1C026A6C4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_caaf1d60fb47a0f58dfb02792837cd3.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_cbe1f1ca23dcd7a08c8005c5fef17d5a___ @ 0x1C026A740 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_cbe1f1ca23dcd7a08c8005c5fef17d5.c)
 */

char __fastcall DirectComposition::CCompositionSpotLightMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionSpotLightMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CCompositionSpotLightMarshaler *v7; // [rsp+40h] [rbp+20h] BYREF

  v4 = 0;
  if ( DirectComposition::CCompositionLightMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x100) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b92ccbfeaa32366b54a2c61627a3da6e___(
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
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5a7aae95d2af49f4475e794f2d9a8b36___(
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
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_cbe1f1ca23dcd7a08c8005c5fef17d5a___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x400u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x1000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_85b3d6b2ee95012b0f566bc6f33b2e3e___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x1000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x800) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fc5b1090fc775d57472a3a4f064e3e29___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x800u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x2000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2c1f8eac7d0908e063a225be70820b55___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x2000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x4000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_caaf1d60fb47a0f58dfb02792837cd37___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x4000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x8000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_249b8acf533f0295f6f6f7663953ea49___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x8000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x10000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2d20ccaa8a8d57dcc22f8d29f876525b___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x10000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x20000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_59df19cd82aa0b5274acc14f57ff20e8___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x20000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x40000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0503b74597bbb46fe98aa01bfe88c823___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x40000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x80000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1bdcdfffebc9fe8f51a48372c463eebc___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x100000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_424ce2d8855ecd62da796686cbff57ab___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x200000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5950affea281d9aa891b31250703d620___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x200000u;
    }
    return 1;
  }
  return v4;
}
