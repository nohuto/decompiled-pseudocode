/*
 * XREFs of ?EmitUpdateCommands@CSurfaceBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0062B00
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e30ba675ae0f62c08cda61183728c725___ @ 0x1C0062C5C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e30ba675ae0f62c08cda61183728c72.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8ec5a6a25547275f2a5b1adaececd0af___ @ 0x1C00B91E8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_8ec5a6a25547275f2a5b1adaececd0a.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f10f2e51892fa450f1087e8611bbebfe___ @ 0x1C00B9284 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_f10f2e51892fa450f1087e8611bbebf.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_77cdd7c4639e0838e5748d2b6255a80a___ @ 0x1C00B92F8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_77cdd7c4639e0838e5748d2b6255a80.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_25ac4bef281f174ffdf55b86eb4579a1___ @ 0x1C00C1464 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_25ac4bef281f174ffdf55b86eb4579a.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8eccf24eb4594466906122bf3adefc71___ @ 0x1C00C7438 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_8eccf24eb4594466906122bf3adefc7.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a3e89275a4185d5f8da85e7fddd1ae5b___ @ 0x1C0253548 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a3e89275a4185d5f8da85e7fddd1ae5.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d75f8af35902317636c144d0cb43b50d___ @ 0x1C02535BC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d75f8af35902317636c144d0cb43b50.c)
 */

char __fastcall DirectComposition::CSurfaceBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CSurfaceBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  DirectComposition::CSurfaceBrushMarshaler *v7; // [rsp+30h] [rbp+10h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v7 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e30ba675ae0f62c08cda61183728c725___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x40) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_25ac4bef281f174ffdf55b86eb4579a1___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x80u) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f10f2e51892fa450f1087e8611bbebfe___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x100) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_77cdd7c4639e0838e5748d2b6255a80a___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x100u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x200) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8ec5a6a25547275f2a5b1adaececd0af___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x200u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x400) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8eccf24eb4594466906122bf3adefc71___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x400u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x800) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d75f8af35902317636c144d0cb43b50d___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x800u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x1000) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a3e89275a4185d5f8da85e7fddd1ae5b___(
                             this,
                             a2,
                             &v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x1000u;
  }
  return 1;
}
