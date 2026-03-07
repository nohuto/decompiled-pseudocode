__int64 __fastcall CCompositionLight::ProcessAddExclusions(
        CCompositionLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS *a3,
        unsigned int *a4)
{
  __int64 v5; // [rsp+20h] [rbp-18h]

  return CCompositionLight::AddTargets((__int64)this, a2, *((_DWORD *)a3 + 2), a4, v5, 1u);
}
