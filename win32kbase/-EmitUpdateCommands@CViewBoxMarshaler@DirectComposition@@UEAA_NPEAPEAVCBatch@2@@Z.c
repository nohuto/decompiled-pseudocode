/*
 * XREFs of ?EmitUpdateCommands@CViewBoxMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0253EE0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_510ad0fdc6a4a65631513f99199301c6___ @ 0x1C0253C94 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_510ad0fdc6a4a65631513f99199301c.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_656fcd5762369dd788581355f3f7a4ef___ @ 0x1C0253D08 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_656fcd5762369dd788581355f3f7a4e.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_74d20138f35096ed876432e29420d709___ @ 0x1C0253D7C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_74d20138f35096ed876432e29420d70.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_dd862a133fbcf6820f5014d20e4036af___ @ 0x1C0253DF0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_dd862a133fbcf6820f5014d20e4036a.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e6a0e39a3eeee7e539b4e5382bb69da0___ @ 0x1C0253E64 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e6a0e39a3eeee7e539b4e5382bb69da.c)
 */

char __fastcall DirectComposition::CViewBoxMarshaler::EmitUpdateCommands(
        DirectComposition::CViewBoxMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  char v3; // di
  DirectComposition::CViewBoxMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v7 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_510ad0fdc6a4a65631513f99199301c6___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x40) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_dd862a133fbcf6820f5014d20e4036af___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x80u) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_656fcd5762369dd788581355f3f7a4ef___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x100) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e6a0e39a3eeee7e539b4e5382bb69da0___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x100u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x200) == 0 )
    return 1;
  if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_74d20138f35096ed876432e29420d709___(
         (__int64)this,
         a2,
         (__int64)&v7) )
  {
    *((_DWORD *)this + 4) &= ~0x200u;
    return 1;
  }
  return v3;
}
