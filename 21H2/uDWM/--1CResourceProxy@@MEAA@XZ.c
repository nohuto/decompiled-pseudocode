/*
 * XREFs of ??1CResourceProxy@@MEAA@XZ @ 0x1800245D4
 * Callers:
 *     ??_ECRotateTransformProxy@@UEAAPEAXI@Z @ 0x180009970 (--_ECRotateTransformProxy@@UEAAPEAXI@Z.c)
 *     ??1CImageLegacyMilBrushProxy@@MEAA@XZ @ 0x18003CAD8 (--1CImageLegacyMilBrushProxy@@MEAA@XZ.c)
 *     ??_GCRedirectVisualProxy@@MEAAPEAXI@Z @ 0x18003FF20 (--_GCRedirectVisualProxy@@MEAAPEAXI@Z.c)
 *     ??_ECRemoteAppRenderTargetProxy@@MEAAPEAXI@Z @ 0x1800BE450 (--_ECRemoteAppRenderTargetProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CResourceProxy::~CResourceProxy(CResourceProxy *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CTransform3dGroupProxy::`vftable';
  v2 = *((_QWORD *)this + 2);
  if ( v2 && _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v2)(v2, 1LL);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
