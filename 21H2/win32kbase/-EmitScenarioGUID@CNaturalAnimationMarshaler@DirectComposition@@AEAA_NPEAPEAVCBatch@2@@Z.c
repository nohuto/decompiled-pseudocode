/*
 * XREFs of ?EmitScenarioGUID@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C023406C
 * Callers:
 *     ?EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02340C0 (-EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a3c21ae4c6733aad084bb2d6850419ab___ @ 0x1C0233D60 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a3c21ae4c6733aad084bb2d6850419a.c)
 */

char __fastcall DirectComposition::CNaturalAnimationMarshaler::EmitScenarioGUID(
        DirectComposition::CNaturalAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v2; // di
  bool v4; // zf
  DirectComposition::CNaturalAnimationMarshaler *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !*((_QWORD *)this + 24) )
    return 1;
  v4 = (*((_DWORD *)this + 4) & 0x80000) == 0;
  v6 = this;
  if ( v4 )
    return 1;
  if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a3c21ae4c6733aad084bb2d6850419ab___(
         (__int64)this,
         a2,
         (__int64)&v6) )
  {
    *((_DWORD *)this + 4) &= ~0x80000u;
    return 1;
  }
  return v2;
}
