/*
 * XREFs of ?EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02340C0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000FD40 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_96efd4528de628edf8e8c0149ff8f819___ @ 0x1C0233CCC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_96efd4528de628edf8e8c0149ff8f81.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a6d7fc2ff29985745a9cf7d7d53a6cac___ @ 0x1C0233DE0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a6d7fc2ff29985745a9cf7d7d53a6ca.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ac1c59748b96fb69b3ab1183eeae36ef___ @ 0x1C0233E74 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ac1c59748b96fb69b3ab1183eeae36e.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c3550f6b9f18b02d2e39c02f22e868a9___ @ 0x1C0233F34 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_c3550f6b9f18b02d2e39c02f22e868a.c)
 *     ?EmitScenarioGUID@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C023406C (-EmitScenarioGUID@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateMotionParameters@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02341DC (-EmitUpdateMotionParameters@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 */

char __fastcall DirectComposition::CNaturalAnimationMarshaler::EmitUpdateCommands(
        DirectComposition::CNaturalAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v4; // eax
  int v5; // eax
  char v6; // di
  bool v7; // zf
  int v8; // ecx
  DirectComposition::CNaturalAnimationMarshaler *v10; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(this, a2) )
    return 0;
  v4 = *((_DWORD *)this + 4);
  v10 = this;
  if ( (v4 & 0x4000) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a6d7fc2ff29985745a9cf7d7d53a6cac___(
            (__int64)this,
            (struct DirectComposition::CBatch ***)a2,
            (__int64 *)&v10) )
      return 0;
    *((_DWORD *)this + 4) &= ~0x4000u;
    v4 = *((_DWORD *)this + 4);
  }
  v10 = this;
  if ( (v4 & 0x1000) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_96efd4528de628edf8e8c0149ff8f819___(
            (__int64)this,
            (struct DirectComposition::CBatch ***)a2,
            (__int64 *)&v10) )
      return 0;
    *((_DWORD *)this + 4) &= ~0x1000u;
    v4 = *((_DWORD *)this + 4);
  }
  v10 = this;
  if ( (v4 & 0x8000) == 0 )
    goto LABEL_11;
  if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c3550f6b9f18b02d2e39c02f22e868a9___(
          (__int64)this,
          (struct DirectComposition::CBatch ***)a2,
          (__int64 *)&v10) )
    return 0;
  *((_DWORD *)this + 4) &= ~0x8000u;
LABEL_11:
  if ( !DirectComposition::CNaturalAnimationMarshaler::EmitUpdateMotionParameters(this, a2) )
    return 0;
  v5 = *((_DWORD *)this + 4);
  v6 = 1;
  v10 = this;
  if ( (v5 & 0x20000) != 0 )
  {
    v7 = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ac1c59748b96fb69b3ab1183eeae36ef___(
           (__int64)this,
           (struct DirectComposition::CBatch ***)a2,
           (__int64)&v10) == 0;
    v5 = *((_DWORD *)this + 4);
    if ( v7 )
    {
      v8 = 0;
      goto LABEL_16;
    }
    v5 &= ~0x20000u;
  }
  v8 = 1;
LABEL_16:
  *((_DWORD *)this + 4) = v5 | 0x40000;
  if ( !v8
    || !DirectComposition::CNaturalAnimationMarshaler::EmitScenarioGUID(this, (struct DirectComposition::CBatch ***)a2) )
  {
    return 0;
  }
  return v6;
}
