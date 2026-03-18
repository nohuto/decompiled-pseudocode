/*
 * XREFs of ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18004A740
 * Callers:
 *     ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x1800496CC (-ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z.c)
 *     ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1800B8560 (-EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z.c)
 *     ?SetSuperWetInkSource@?$CSuperWetInkVisualGeneratedT@VCSuperWetInkVisual@@VCVisual@@@@QEAAJPEAVCSynchronousSuperWetInk@@@Z @ 0x1801C9C2C (-SetSuperWetInkSource@-$CSuperWetInkVisualGeneratedT@VCSuperWetInkVisual@@VCVisual@@@@QEAAJPEAVC.c)
 *     ?OnRootChanged@CSceneVisual@@QEAAJXZ @ 0x18021A538 (-OnRootChanged@CSceneVisual@@QEAAJXZ.c)
 *     ??0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z @ 0x180243594 (--0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z.c)
 *     ?SetContent@CParticleEmitterVisual@@MEAAJPEAVCContent@@@Z @ 0x180246180 (-SetContent@CParticleEmitterVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z @ 0x1802525C0 (-SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?Initialize@CTextVisual@@MEAAJXZ @ 0x180254F60 (-Initialize@CTextVisual@@MEAAJXZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800235AC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A8DC (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18004AB80 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18004AD58 (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800991C8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RegisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z @ 0x1801CC448 (-RegisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z.c)
 *     ?UnregisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z @ 0x1801CD228 (-UnregisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CVisual::SetContent(struct CResource **this, struct CContent *a2)
{
  char v2; // di
  unsigned int v5; // ebp
  struct CResource *v6; // rcx
  int v7; // eax
  unsigned int v8; // ecx
  struct CResource *v9; // rcx

  v2 = 0;
  v5 = 0;
  if ( a2 != this[32] )
  {
    CVisual::ClearContentTreeDataCaches((CVisual *)this);
    v6 = this[32];
    if ( v6 && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v6 + 56LL))(v6, 182LL) )
      CSuperWetInkManager::UnregisterSuperWetInkVisual(
        *((CSuperWetInkManager **)g_pComposition + 32),
        (struct CVisual *)this);
    v7 = CResource::RegisterNotifier((CResource *)this, a2);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x20Cu, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[32]);
      this[32] = a2;
      if ( a2 && (*(unsigned __int8 (__fastcall **)(struct CContent *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 182LL) )
        CSuperWetInkManager::RegisterSuperWetInkVisual(
          *((CSuperWetInkManager **)g_pComposition + 32),
          (struct CVisual *)this);
      v9 = this[32];
      if ( v9 )
        v2 = (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)v9 + 240LL))(v9);
      *((_BYTE *)this + 102) ^= (*((_BYTE *)this + 102) ^ (32 * v2)) & 0x20;
      CVisual::UpdateBackdropBlurFlag((CVisual *)this);
      CVisual::PropagateFlags(this, 21LL);
    }
  }
  return v5;
}
