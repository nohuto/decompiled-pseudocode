__int64 __fastcall CCompositionLight::ProcessAddTargets(
        CCompositionLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONLIGHT_ADDTARGETS *a3,
        const void *a4)
{
  return CCompositionLight::AddTargets(this, a2, *((unsigned int *)a3 + 2), a4);
}
