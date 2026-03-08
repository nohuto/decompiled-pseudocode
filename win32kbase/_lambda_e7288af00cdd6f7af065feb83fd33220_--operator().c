/*
 * XREFs of _lambda_e7288af00cdd6f7af065feb83fd33220_::operator() @ 0x1C025165C
 * Callers:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e7288af00cdd6f7af065feb83fd33220___ @ 0x1C02515E0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e7288af00cdd6f7af065feb83fd3322.c)
 * Callees:
 *     ?GetSourceModifierHandle@CManipulationMarshaler@DirectComposition@@IEBAII@Z @ 0x1C0251C40 (-GetSourceModifierHandle@CManipulationMarshaler@DirectComposition@@IEBAII@Z.c)
 */

unsigned int __fastcall lambda_e7288af00cdd6f7af065feb83fd33220_::operator()(
        DirectComposition::CManipulationMarshaler **a1,
        _DWORD *a2)
{
  DirectComposition::CManipulationMarshaler *v2; // r8
  unsigned int SourceModifierHandle; // eax
  __int64 v4; // r9
  DirectComposition::CManipulationMarshaler *v5; // r8
  unsigned int v6; // eax
  __int64 v7; // r9
  DirectComposition::CManipulationMarshaler *v8; // r8
  unsigned int v9; // eax
  __int64 v10; // r9
  DirectComposition::CManipulationMarshaler *v11; // r8
  unsigned int v12; // eax
  __int64 v13; // r9
  DirectComposition::CManipulationMarshaler *v14; // r8
  unsigned int result; // eax
  __int64 v16; // r9

  v2 = *a1;
  *a2 = 250;
  a2[1] = *((_DWORD *)v2 + 8);
  SourceModifierHandle = DirectComposition::CManipulationMarshaler::GetSourceModifierHandle(v2, 0);
  *(_DWORD *)(v4 + 8) = SourceModifierHandle;
  v6 = DirectComposition::CManipulationMarshaler::GetSourceModifierHandle(v5, 1u);
  *(_DWORD *)(v7 + 12) = v6;
  v9 = DirectComposition::CManipulationMarshaler::GetSourceModifierHandle(v8, 2u);
  *(_DWORD *)(v10 + 16) = v9;
  v12 = DirectComposition::CManipulationMarshaler::GetSourceModifierHandle(v11, 3u);
  *(_DWORD *)(v13 + 20) = v12;
  result = DirectComposition::CManipulationMarshaler::GetSourceModifierHandle(v14, 4u);
  *(_DWORD *)(v16 + 24) = result;
  return result;
}
