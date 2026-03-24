/*
 * XREFs of ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1801C8E9C
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x1801C758C (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x1801C7C5C (-AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1801C8E24 (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x1801CAD68 (-ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801CCDB8 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1801CCF34 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x1801CCFC0 (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801CD010 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801CEB94 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800450D0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180062C44 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180073B10 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CB254 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CInteractionTracker::DestroyDefaultAnimations(CInteractionTracker *this, char a2)
{
  __int64 *v2; // rdi
  struct CResource *v4; // r10
  LARGE_INTEGER *v6; // r8
  LARGE_INTEGER *v7; // rcx
  LARGE_INTEGER v8; // rax
  struct CResource *v9; // r10
  LARGE_INTEGER *v10; // r8
  LARGE_INTEGER *v11; // rcx
  LARGE_INTEGER v12; // rax
  void **v13; // [rsp+20h] [rbp-40h] BYREF
  LARGE_INTEGER v14; // [rsp+28h] [rbp-38h]
  int v15; // [rsp+30h] [rbp-30h]
  __int128 v16; // [rsp+38h] [rbp-28h] BYREF
  int v17; // [rsp+48h] [rbp-18h]
  int v18; // [rsp+4Ch] [rbp-14h]
  int v19; // [rsp+50h] [rbp-10h]
  bool v20; // [rsp+80h] [rbp+20h] BYREF

  v2 = (__int64 *)((char *)this + 456);
  v4 = (struct CResource *)*((_QWORD *)this + 57);
  if ( v4 )
  {
    if ( a2 )
    {
      v6 = (LARGE_INTEGER *)*((_QWORD *)this + 2);
      v7 = (LARGE_INTEGER *)*((_QWORD *)this + 57);
      v8 = v6[34];
      v15 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v14 = v8;
      v13 = &CExpressionValueStack::`vftable';
      v16 = 0LL;
      v20 = 0;
      CBaseExpression::CalculateValue(v7, (struct CExpressionValueStack *)&v13, v6[44], &v20);
      v13 = &CExpressionValueStack::`vftable';
      DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v16);
      v4 = (struct CResource *)*v2;
    }
    CResource::UnRegisterNotifierInternal(this, v4);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
  }
  v9 = (struct CResource *)*((_QWORD *)this + 58);
  if ( v9 )
  {
    if ( a2 )
    {
      v10 = (LARGE_INTEGER *)*((_QWORD *)this + 2);
      v11 = (LARGE_INTEGER *)*((_QWORD *)this + 58);
      v12 = v10[34];
      v15 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v14 = v12;
      v13 = &CExpressionValueStack::`vftable';
      v16 = 0LL;
      v20 = 0;
      CBaseExpression::CalculateValue(v11, (struct CExpressionValueStack *)&v13, v10[44], &v20);
      v13 = &CExpressionValueStack::`vftable';
      DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v16);
      v9 = (struct CResource *)*((_QWORD *)this + 58);
    }
    CResource::UnRegisterNotifierInternal(this, v9);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 58);
  }
}
