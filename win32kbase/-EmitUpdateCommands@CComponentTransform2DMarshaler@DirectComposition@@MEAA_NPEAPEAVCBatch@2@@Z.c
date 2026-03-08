/*
 * XREFs of ?EmitUpdateCommands@CComponentTransform2DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0061D60
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a426e53e1cc74de2ae842011fff912d3___ @ 0x1C005FADC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a426e53e1cc74de2ae842011fff912d.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e0098fcade8aafb263e245137e45c739___ @ 0x1C005FB54 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e0098fcade8aafb263e245137e45c73.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3fb4fd2fa475976a4c9077d17217d36d___ @ 0x1C005FBCC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_3fb4fd2fa475976a4c9077d17217d36.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1ec7242a182fd7ab52eab4ec75b316de___ @ 0x1C0061958 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_1ec7242a182fd7ab52eab4ec75b316d.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_645b102eff9e887120288b9b65e9f1dc___ @ 0x1C0061C00 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_645b102eff9e887120288b9b65e9f1d.c)
 *     ?EmitSetPropertyIdSet@CPropertyChangeResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00624D8 (-EmitSetPropertyIdSet@CPropertyChangeResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e2e130be531dcf6684c12c56d14076c1___ @ 0x1C0062A84 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e2e130be531dcf6684c12c56d14076c.c)
 *     ?EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A5668 (-EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CComponentTransform2DMarshaler::EmitUpdateCommands(
        DirectComposition::CComponentTransform2DMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CComponentTransform2DMarshaler *v7; // [rsp+50h] [rbp+30h] BYREF

  v4 = 0;
  if ( DirectComposition::CNotificationResourceMarshaler::EmitSetCallbackId(this, a2)
    && DirectComposition::CPropertyChangeResourceMarshaler::EmitSetPropertyIdSet(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x100) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e0098fcade8aafb263e245137e45c739___(
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a426e53e1cc74de2ae842011fff912d3___(
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_645b102eff9e887120288b9b65e9f1dc___(
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1ec7242a182fd7ab52eab4ec75b316de___(
              (__int64)this,
              a2,
              (__int64)&v7) )
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
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3fb4fd2fa475976a4c9077d17217d36d___(
           (__int64)this,
           a2,
           (__int64 *)&v7) )
    {
      *((_DWORD *)this + 4) |= 0x1000u;
      return 1;
    }
  }
  return v4;
}
