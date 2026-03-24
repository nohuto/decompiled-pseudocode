/*
 * XREFs of ?GetCurrentState@CNaturalAnimationScalarForceAdapater@@UEBA?BUIntegrationState@@XZ @ 0x180215DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D42F4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 *     ?GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z @ 0x180215F3C (-GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z.c)
 */

__int64 __fastcall CNaturalAnimationScalarForceAdapater::GetCurrentState(__int64 a1, __int64 a2)
{
  CNaturalAnimation *v3; // rdi
  int v5; // ecx
  struct CVector3Force *v6; // rax
  struct CVector3Force *v7; // rcx
  struct CVector3Force *v9[3]; // [rsp+20h] [rbp-18h] BYREF
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v9[0] = 0LL;
  v3 = *(CNaturalAnimation **)(a1 + 40);
  if ( v3 )
    v3 = (CNaturalAnimation *)*((_QWORD *)v3 + 2);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)v9);
  CNaturalAnimation::GetVector3Force(v3, v9);
  *(_OWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  v5 = *(_DWORD *)(a1 + 24);
  if ( v5 )
  {
    if ( v5 != 1 )
      ModuleFailFastForHRESULT(-2147467259, retaddr);
    v6 = v9[0];
    *(_OWORD *)a2 = *((_OWORD *)v9[0] + 6);
    *(_DWORD *)(a2 + 16) = *((_DWORD *)v6 + 28);
  }
  else
  {
    v7 = v9[0];
    *(_OWORD *)a2 = *(_OWORD *)((char *)v9[0] + 28);
    *(_DWORD *)(a2 + 16) = *((_DWORD *)v7 + 11);
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)v9);
  return a2;
}
