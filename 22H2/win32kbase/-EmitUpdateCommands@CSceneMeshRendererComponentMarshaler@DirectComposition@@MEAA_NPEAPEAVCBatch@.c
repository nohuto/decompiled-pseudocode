/*
 * XREFs of ?EmitUpdateCommands@CSceneMeshRendererComponentMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01F75B0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_66ebe00854328af6b3d1a155e0a6dd52___ @ 0x1C01F737C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_66ebe00854328af6b3d1a155e0a6dd5.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_66f16f058a7148ecab2826ea000753f1___lambda_45b02998bed050691e5b6850ccebf4aa___ @ 0x1C01F7400 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_66f16f058a7148ecab2826ea000753f.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6724f6a5706e547093db9ce485c17012___ @ 0x1C01F7520 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_6724f6a5706e547093db9ce485c1701.c)
 */

char __fastcall DirectComposition::CSceneMeshRendererComponentMarshaler::EmitUpdateCommands(
        DirectComposition::CSceneMeshRendererComponentMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  char v3; // di
  __int64 v7; // [rsp+20h] [rbp-18h]
  DirectComposition::CSceneMeshRendererComponentMarshaler *v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v8 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6724f6a5706e547093db9ce485c17012___(
            (__int64)this,
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x40) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_66ebe00854328af6b3d1a155e0a6dd52___(
            (__int64)this,
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x80u) == 0 )
    return 1;
  if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_66f16f058a7148ecab2826ea000753f1___lambda_45b02998bed050691e5b6850ccebf4aa___(
         (__int64)this,
         a2,
         (unsigned int *)this + 21,
         *((_DWORD *)this + 20),
         v7,
         (__int64)&v8) )
  {
    *((_DWORD *)this + 4) &= ~0x80u;
    return 1;
  }
  return v3;
}
