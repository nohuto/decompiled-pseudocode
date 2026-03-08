/*
 * XREFs of ?GetFinalValue@CNaturalAnimationScalarForceAdapater@@UEBAMM@Z @ 0x180273E00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 *     ?GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z @ 0x180273E9C (-GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z.c)
 */

float __fastcall CNaturalAnimationScalarForceAdapater::GetFinalValue(
        CNaturalAnimationScalarForceAdapater *this,
        float a2)
{
  __int64 v3; // rax
  CNaturalAnimation *v4; // rdi
  int v5; // ecx
  float v6; // xmm6_4
  const void *retaddr; // [rsp+38h] [rbp+0h]
  struct CVector3Force *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    v4 = *(CNaturalAnimation **)(v3 + 16);
  else
    v4 = 0LL;
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v9);
  CNaturalAnimation::GetVector3Force(v4, &v9);
  v5 = *((_DWORD *)this + 4);
  if ( v5 )
  {
    if ( v5 != 1 )
      ModuleFailFastForHRESULT(-2147467259, retaddr);
    v6 = *((float *)v9 + 86);
  }
  else
  {
    v6 = *((float *)v9 + 85);
  }
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v9);
  return v6;
}
