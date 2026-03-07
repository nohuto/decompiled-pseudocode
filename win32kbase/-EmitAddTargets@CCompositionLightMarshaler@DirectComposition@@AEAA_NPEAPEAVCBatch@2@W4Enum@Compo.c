__int64 __fastcall DirectComposition::CCompositionLightMarshaler::EmitAddTargets(__int64 a1, __int64 a2, int a3)
{
  if ( a3 )
    return DirectComposition::CCompositionLightMarshaler::EmitAddTargets<tagMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS>(
             a1,
             a2,
             *(_QWORD *)(a1 + 72),
             a1 + 80,
             a1 + 84);
  else
    return DirectComposition::CCompositionLightMarshaler::EmitAddTargets<tagMILCMD_COMPOSITIONLIGHT_ADDTARGETS>(
             a1,
             a2,
             *(_QWORD *)(a1 + 56),
             a1 + 64,
             a1 + 68);
}
