/*
 * XREFs of ?EmitUpdateCommands@CSceneMeshRendererComponentMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026E7D0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_157fb6f7c9b3954e06f37738d8d89d79___ @ 0x1C026E59C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_157fb6f7c9b3954e06f37738d8d89d7.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3b53c63c137ebbf4e062e784a6f740c1___ @ 0x1C026E620 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_3b53c63c137ebbf4e062e784a6f740c.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_66f16f058a7148ecab2826ea000753f1___lambda_45b02998bed050691e5b6850ccebf4aa___ @ 0x1C026E6A4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_66f16f058a7148ecab2826ea000753f.c)
 */

char __fastcall DirectComposition::CSceneMeshRendererComponentMarshaler::EmitUpdateCommands(
        DirectComposition::CSceneMeshRendererComponentMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  char v3; // di
  unsigned int v6; // r9d
  __int64 v8; // [rsp+20h] [rbp-18h]
  DirectComposition::CSceneMeshRendererComponentMarshaler *v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v9 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3b53c63c137ebbf4e062e784a6f740c1___(
            (__int64)this,
            a2,
            (__int64)&v9) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  v9 = this;
  if ( (v2 & 0x40) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_157fb6f7c9b3954e06f37738d8d89d79___(
            (__int64)this,
            a2,
            (__int64)&v9) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  v6 = *((_DWORD *)this + 20);
  v9 = this;
  if ( (v2 & 0x80u) == 0 )
    return 1;
  if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_66f16f058a7148ecab2826ea000753f1___lambda_45b02998bed050691e5b6850ccebf4aa___(
         (__int64)this,
         a2,
         (unsigned int *)this + 21,
         v6,
         v8,
         (__int64)&v9) )
  {
    *((_DWORD *)this + 4) &= ~0x80u;
    return 1;
  }
  return v3;
}
