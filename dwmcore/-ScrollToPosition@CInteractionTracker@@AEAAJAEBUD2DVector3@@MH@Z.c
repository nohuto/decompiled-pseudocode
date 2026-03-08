/*
 * XREFs of ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x180230B20
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x180230098 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@QEAA@XZ @ 0x180193C60 (--1-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCScrollPositionKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollPositionKeyframeAnimation@@@Z @ 0x18022DC94 (-Attach@-$ComPtr@VCScrollPositionKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollPositionKeyf.c)
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x18022E820 (-CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18022EAB4 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1802326B8 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 */

__int64 __fastcall CInteractionTracker::ScrollToPosition(
        CInteractionTracker *this,
        const struct D2DVector3 *a2,
        float a3)
{
  unsigned int v5; // xmm1_4
  int v6; // xmm0_4
  int started; // eax
  unsigned int v8; // ebx
  struct CResource *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi
  struct CResource *v13; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+38h] [rbp-30h] BYREF
  __int64 v15; // [rsp+3Ch] [rbp-2Ch]
  int v16; // [rsp+44h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !(unsigned __int8)CInteractionTracker::TransitionToInertia(this, 1LL) )
    return 0LL;
  *((_DWORD *)this + 47) = 0;
  CInteractionTracker::DestroyDefaultAnimations(this, 1);
  v5 = *((_DWORD *)a2 + 1);
  v16 = 0;
  v6 = *(_DWORD *)a2;
  v13 = 0LL;
  v14 = v6;
  v15 = v5;
  started = CInteractionTracker::CreateAndStartKeyframeAnimation(
              (struct CComposition **)this,
              1u,
              0x34u,
              (const char *)&v14,
              SLODWORD(a3),
              (__int64 *)&v13);
  v8 = started;
  if ( started < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18C9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
      (const char *)(unsigned int)started);
    Microsoft::WRL::ComPtr<ID2D1Bitmap1>::~ComPtr<ID2D1Bitmap1>((__int64 *)&v13);
    return v8;
  }
  v10 = v13;
  v11 = CResource::RegisterNotifier(this, v13);
  v12 = v11;
  if ( v11 >= 0 )
  {
    Microsoft::WRL::ComPtr<CScrollPositionKeyframeAnimation>::Attach((__int64 *)this + 58, (__int64)v10);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x18D0,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
    (const char *)(unsigned int)v11);
  if ( v10 )
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v10 + 16LL))(v10);
  return v12;
}
