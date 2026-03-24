/*
 * XREFs of ?EmitUpdateCommands@CDDisplayRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01EEC30
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_12f150912ddd18f93fcd065575f25c24___ @ 0x1C01EE934 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_12f150912ddd18f93fcd065575f25c2.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_22efc74504cb8895f58d97a59d20f195___ @ 0x1C01EE9D8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_22efc74504cb8895f58d97a59d20f19.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_86a70588145588370e1570fe6666648c___ @ 0x1C01EEA60 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_86a70588145588370e1570fe6666648.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d4572c77d854595aef475aa9bde9dcaf___ @ 0x1C01EEAD4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d4572c77d854595aef475aa9bde9dca.c)
 *     ?EmitCreate@CDDisplayRenderTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01EEB48 (-EmitCreate@CDDisplayRenderTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CDDisplayRenderTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CDDisplayRenderTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CDDisplayRenderTargetMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CDDisplayRenderTargetMarshaler::EmitCreate(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x40) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_22efc74504cb8895f58d97a59d20f195___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x40u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x80u) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_12f150912ddd18f93fcd065575f25c24___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x100) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_86a70588145588370e1570fe6666648c___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x200) == 0 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d4572c77d854595aef475aa9bde9dcaf___(
           (__int64)this,
           a2,
           (__int64)&v7) )
    {
      *((_DWORD *)this + 4) &= ~0x200u;
      return 1;
    }
  }
  return v4;
}
