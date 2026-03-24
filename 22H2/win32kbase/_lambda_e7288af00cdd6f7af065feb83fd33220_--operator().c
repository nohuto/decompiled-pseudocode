/*
 * XREFs of _lambda_e7288af00cdd6f7af065feb83fd33220_::operator() @ 0x1C01E3E0C
 * Callers:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e7288af00cdd6f7af065feb83fd33220___ @ 0x1C01E3D90 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e7288af00cdd6f7af065feb83fd3322.c)
 * Callees:
 *     ?GetSourceModifierHandle@CManipulationMarshaler@DirectComposition@@IEBAII@Z @ 0x1C01E4294 (-GetSourceModifierHandle@CManipulationMarshaler@DirectComposition@@IEBAII@Z.c)
 */

unsigned int __fastcall lambda_e7288af00cdd6f7af065feb83fd33220_::operator()(
        DirectComposition::CManipulationMarshaler **a1,
        _DWORD *a2)
{
  unsigned int SourceModifierHandle; // eax
  __int64 v3; // r10
  DirectComposition::CManipulationMarshaler **v4; // r9
  unsigned int v5; // eax
  __int64 v6; // r10
  DirectComposition::CManipulationMarshaler **v7; // r9
  unsigned int v8; // eax
  __int64 v9; // r10
  DirectComposition::CManipulationMarshaler **v10; // r9
  unsigned int v11; // eax
  __int64 v12; // r10
  DirectComposition::CManipulationMarshaler **v13; // r9
  unsigned int result; // eax
  __int64 v15; // r10

  *a2 = 259;
  a2[1] = *((_DWORD *)*a1 + 6);
  SourceModifierHandle = DirectComposition::CManipulationMarshaler::GetSourceModifierHandle(*a1, 0);
  *(_DWORD *)(v3 + 8) = SourceModifierHandle;
  v5 = DirectComposition::CManipulationMarshaler::GetSourceModifierHandle(*v4, 1u);
  *(_DWORD *)(v6 + 12) = v5;
  v8 = DirectComposition::CManipulationMarshaler::GetSourceModifierHandle(*v7, 2u);
  *(_DWORD *)(v9 + 16) = v8;
  v11 = DirectComposition::CManipulationMarshaler::GetSourceModifierHandle(*v10, 3u);
  *(_DWORD *)(v12 + 20) = v11;
  result = DirectComposition::CManipulationMarshaler::GetSourceModifierHandle(*v13, 4u);
  *(_DWORD *)(v15 + 24) = result;
  return result;
}
