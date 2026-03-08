/*
 * XREFs of ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x18022D8A4
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x180230098 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@QEAA@XZ @ 0x180193C60 (--1-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAnimation@@@Z @ 0x18022DCD8 (-Attach@-$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAn.c)
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x18022E820 (-CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18022EAB4 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1802326B8 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 */

__int64 __fastcall CInteractionTracker::AnimateToScale(
        CInteractionTracker *this,
        float a2,
        const struct D2DVector2 *a3,
        float a4)
{
  int started; // eax
  unsigned int v7; // ebx
  struct CResource *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  struct CResource *v12; // [rsp+30h] [rbp-48h] BYREF
  __int128 v13; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( !(unsigned __int8)CInteractionTracker::TransitionToInertia(this, 1LL) )
    return 0LL;
  *((_DWORD *)this + 47) = 0;
  CInteractionTracker::DestroyDefaultAnimations(this, 1);
  v12 = 0LL;
  v13 = LODWORD(a2);
  started = CInteractionTracker::CreateAndStartKeyframeAnimation(this, 2LL, 18LL, &v13, LODWORD(a4), &v12);
  v7 = started;
  if ( started < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18FD,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
      (const char *)(unsigned int)started);
    Microsoft::WRL::ComPtr<ID2D1Bitmap1>::~ComPtr<ID2D1Bitmap1>((__int64 *)&v12);
    return v7;
  }
  v9 = v12;
  v10 = CResource::RegisterNotifier(this, v12);
  v11 = v10;
  if ( v10 >= 0 )
  {
    Microsoft::WRL::ComPtr<CScrollScaleKeyframeAnimation>::Attach((char *)this + 472, v9);
    *(_QWORD *)(*((_QWORD *)this + 59) + 760LL) = *(_QWORD *)a3;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1904,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
    (const char *)(unsigned int)v10);
  if ( v9 )
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v9 + 16LL))(v9);
  return v11;
}
