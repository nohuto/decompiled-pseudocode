/*
 * XREFs of ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18022EAB4
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x18022D238 (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x18022D8A4 (-AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x18022EA40 (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x180230B20 (-ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180232410 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1802325C4 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x18023265C (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1802326B8 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1802345E8 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053D90 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800BC9EC (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CInteractionTracker::DestroyDefaultAnimations(CInteractionTracker *this, char a2)
{
  struct CResource **v2; // rdi
  CBaseExpression *v4; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  CBaseExpression *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  void **v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+28h] [rbp-38h]
  int v13; // [rsp+30h] [rbp-30h]
  __int128 v14; // [rsp+38h] [rbp-28h] BYREF
  int v15; // [rsp+48h] [rbp-18h]
  int v16; // [rsp+4Ch] [rbp-14h]
  int v17; // [rsp+50h] [rbp-10h]
  bool v18; // [rsp+80h] [rbp+20h] BYREF

  v2 = (struct CResource **)((char *)this + 464);
  v4 = (CBaseExpression *)*((_QWORD *)this + 58);
  if ( v4 )
  {
    if ( a2 )
    {
      v6 = *((_QWORD *)this + 2);
      v7 = *(_QWORD *)(v6 + 424);
      v13 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v12 = v7;
      v11 = &CExpressionValueStack::`vftable';
      v14 = 0LL;
      v18 = 0;
      CBaseExpression::CalculateValue(v4, (struct CExpressionValueStack *)&v11, *(_QWORD *)(v6 + 496), &v18);
      v11 = &CExpressionValueStack::`vftable';
      DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v14);
    }
    CResource::UnRegisterNotifierInternal(this, *v2);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v2);
  }
  v8 = (CBaseExpression *)*((_QWORD *)this + 59);
  if ( v8 )
  {
    if ( a2 )
    {
      v9 = *((_QWORD *)this + 2);
      v10 = *(_QWORD *)(v9 + 424);
      v13 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v12 = v10;
      v11 = &CExpressionValueStack::`vftable';
      v14 = 0LL;
      v18 = 0;
      CBaseExpression::CalculateValue(v8, (struct CExpressionValueStack *)&v11, *(_QWORD *)(v9 + 496), &v18);
      v11 = &CExpressionValueStack::`vftable';
      DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v14);
    }
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 59));
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 59);
  }
}
