/*
 * XREFs of ?EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005F700
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8f8eaaa443f4d57e360267fa81872f2d___ @ 0x1C005EAB4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_8f8eaaa443f4d57e360267fa81872f2.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4608421e3dffebbed1687b8cfdb32f5c___ @ 0x1C005EB44 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_4608421e3dffebbed1687b8cfdb32f5.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c82def0c45eadc858292c7e51b36fedf___ @ 0x1C005EBD0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_c82def0c45eadc858292c7e51b36fed.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7904d34c7dcc9cd646f961a8a094f72f___ @ 0x1C005EC48 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_7904d34c7dcc9cd646f961a8a094f72.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_100444f1bbe895c3caf8fab599ba1503___ @ 0x1C005ECD0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_100444f1bbe895c3caf8fab599ba150.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5dc89212d77cc2b3abfa0526dfd9dff5___ @ 0x1C005EF78 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_5dc89212d77cc2b3abfa0526dfd9dff.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f9cb1e8b9b5e6ac5546427baa34cdba9___ @ 0x1C005F000 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_f9cb1e8b9b5e6ac5546427baa34cdba.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bae9fe91ffe7d2a32ffd5f56c8eed0c9___ @ 0x1C005F64C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_bae9fe91ffe7d2a32ffd5f56c8eed0c.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0061EBC (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CComponentTransform3DMarshaler::EmitUpdateCommands(
        DirectComposition::CComponentTransform3DMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CComponentTransform3DMarshaler *v7; // [rsp+50h] [rbp+30h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x100) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c82def0c45eadc858292c7e51b36fedf___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x80u) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5dc89212d77cc2b3abfa0526dfd9dff5___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x80u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x200) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7904d34c7dcc9cd646f961a8a094f72f___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x200u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x400) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8f8eaaa443f4d57e360267fa81872f2d___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x400u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x1000) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4608421e3dffebbed1687b8cfdb32f5c___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x1000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x800) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_100444f1bbe895c3caf8fab599ba1503___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x800u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x2000) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f9cb1e8b9b5e6ac5546427baa34cdba9___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x2000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x4000) != 0 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bae9fe91ffe7d2a32ffd5f56c8eed0c9___(
           (__int64)this,
           a2,
           (__int64 *)&v7) )
    {
      *((_DWORD *)this + 4) |= 0x4000u;
      return 1;
    }
  }
  return v4;
}
