/*
 * XREFs of ?EmitUpdateMotionParameters@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026B52C
 * Callers:
 *     ?EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026B430 (-EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_82a12b1bd6d405ea304fb103b341a057___ @ 0x1C026B088 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_82a12b1bd6d405ea304fb103b341a05.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f8795bc2ab0d14603e3171119bdacd19___ @ 0x1C026B388 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_f8795bc2ab0d14603e3171119bdacd1.c)
 */

char __fastcall DirectComposition::CNaturalAnimationMarshaler::EmitUpdateMotionParameters(
        DirectComposition::CNaturalAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // bl
  int v4; // ecx
  char updated; // al
  DirectComposition::CNaturalAnimationMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x10000) != 0 )
  {
    v4 = *((_DWORD *)this + 41) - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
        return 0;
      v7 = this;
      updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f8795bc2ab0d14603e3171119bdacd19___(
                  (__int64)this,
                  a2,
                  (__int64)&v7);
    }
    else
    {
      v7 = this;
      updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_82a12b1bd6d405ea304fb103b341a057___(
                  (__int64)this,
                  a2,
                  (__int64)&v7);
    }
    if ( updated )
    {
      *((_DWORD *)this + 4) &= ~0x10000u;
      return v3;
    }
    return 0;
  }
  return v3;
}
