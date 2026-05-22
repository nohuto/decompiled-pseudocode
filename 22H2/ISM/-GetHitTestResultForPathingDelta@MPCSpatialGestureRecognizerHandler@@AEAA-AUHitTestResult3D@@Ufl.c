/*
 * XREFs of ?GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUHitTestResult3D@@Ufloat3@Numerics@Foundation@Windows@@@Z @ 0x180081220
 * Callers:
 *     ?OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationStartedEventArgs@3456@@Z @ 0x180081570 (-OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogn.c)
 *     ?OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationUpdatedEventArgs@3456@@Z @ 0x180081710 (-OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011A40 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180075E0C (-GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z @ 0x180078C5C (-TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void *__fastcall MPCSpatialGestureRecognizerHandler::GetHitTestResultForPathingDelta(__int64 a1, void *a2, float *a3)
{
  MPCHolographicInputManager *Instance; // rax
  MPCHolographicInputManager *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  struct IMPCInputPostProcessor *PostProcessor; // rax
  struct IMPCInputPostProcessor *v12; // rbx
  int v13; // eax
  struct IMPCInputPostProcessor *v15; // [rsp+20h] [rbp-29h] BYREF
  _DWORD v16[10]; // [rsp+30h] [rbp-19h] BYREF
  __int128 v17; // [rsp+58h] [rbp+Fh] BYREF
  int v18; // [rsp+68h] [rbp+1Fh]
  int v19; // [rsp+6Ch] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  memset_0(v16, 0, 0x44uLL);
  memset_0(a2, 0, 0x148uLL);
  v16[0] = *(_DWORD *)(a1 + 8);
  v17 = *(_OWORD *)(a1 + 136);
  v18 = *(_DWORD *)(a1 + 152);
  v19 = *(_DWORD *)(a1 + 156);
  Instance = MPCHolographicInputManager::GetInstance();
  MPCHolographicInputManager::TransformRayToHeadFromWorld(Instance, (struct TargetingRay *)&v17);
  *(float *)&v17 = *(float *)&v17 + *a3;
  *((float *)&v17 + 1) = *((float *)&v17 + 1) + a3[1];
  *((float *)&v17 + 2) = *((float *)&v17 + 2) + a3[2];
  v7 = MPCHolographicInputManager::GetInstance();
  PostProcessor = MPCHolographicInputManager::GetPostProcessor(v7, v8, v9, v10);
  v12 = PostProcessor;
  v15 = PostProcessor;
  if ( PostProcessor )
    (*(void (__fastcall **)(struct IMPCInputPostProcessor *))(*(_QWORD *)PostProcessor + 8LL))(PostProcessor);
  v13 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, _DWORD *, void *))(*(_QWORD *)v12 + 40LL))(
          v12,
          v16,
          a2);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      647LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v13);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v15);
  return a2;
}
