/*
 * XREFs of ?InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z @ 0x18026B5D4
 * Callers:
 *     ?AdvanceInertiaToTimeDefault@CMotion@@MEAAMXZ @ 0x18026B200 (-AdvanceInertiaToTimeDefault@CMotion@@MEAAMXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F1F6C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z @ 0x180272844 (-Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z.c)
 */

void __fastcall CMotion::InitializeDefaultBoundaryInertiaModifier(CMotion *this, float a2, float a3, float a4)
{
  __int64 v4; // rdx
  int v6; // eax
  bool v7; // zf
  __int64 (__fastcall ***v8)(_QWORD); // rbx
  __int64 (__fastcall ***v9)(_QWORD); // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v6 = (*((float *)this + 16) >= a2) + 2;
  if ( a2 < *((float *)this + 9) )
    v6 = *((float *)this + 16) >= a2;
  v7 = *((_DWORD *)this + 3) == 2;
  *((_DWORD *)this + 18) = v6;
  LOBYTE(v4) = v7;
  CScalarForce::Initialize(*((_QWORD *)this + 10), v4);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 32LL))(*((_QWORD *)this + 11));
  v9 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this + 10);
  v8 = v9;
  *((_DWORD *)this + 26) = 1114636288;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v9);
  v9 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this + 12);
  *((_QWORD *)this + 12) = v8;
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v9);
}
