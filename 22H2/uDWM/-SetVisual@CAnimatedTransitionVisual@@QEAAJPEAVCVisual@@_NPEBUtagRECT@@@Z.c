/*
 * XREFs of ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18000AF24
 * Callers:
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18000A908 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800335E4 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800AA34C (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800AA96C (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800AC1C8 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x1800AC664 (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800B160C (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180008AB0 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCBaseImageProxy@@@Z @ 0x18000BE7C (-_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCBaseImageProxy@@@Z.c)
 *     ?Freeze@CCachedVisualImageProxy@@QEAAJXZ @ 0x18000D3A8 (-Freeze@CCachedVisualImageProxy@@QEAAJXZ.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000E9E8 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x1800101D8 (-Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCS.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::SetVisual(
        struct CBaseImageProxy **this,
        struct CVisual *a2,
        char a3,
        const struct tagRECT *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  float v11; // xmm0_4
  float v12; // xmm2_4
  float left; // xmm3_4
  float v14; // xmm1_4
  int v15; // eax
  float v16; // xmm4_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  struct CBaseImageProxy *v20; // rcx
  int v21; // eax
  int updated; // eax
  int v24; // eax
  __int64 v25; // [rsp+40h] [rbp-30h] BYREF
  float right; // [rsp+48h] [rbp-28h]
  float bottom; // [rsp+4Ch] [rbp-24h]
  struct tagRECT v28; // [rsp+50h] [rbp-20h] BYREF

  v8 = CAnimatedTransitionVisual::EnsureResources((CAnimatedTransitionVisual *)this);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x2C8u);
    return v9;
  }
  v25 = 0LL;
  if ( a4 )
  {
    v10 = 0;
    v11 = (float)*((int *)CDesktopManager::s_pDesktopManagerInstance + 113);
    if ( a4->right - a4->left >= 0 )
      v10 = a4->right - a4->left;
    v12 = (float)*((int *)CDesktopManager::s_pDesktopManagerInstance + 111);
    left = (float)a4->left;
    v14 = (float)v10;
    v15 = 0;
    if ( a4->bottom - a4->top >= 0 )
      v15 = a4->bottom - a4->top;
    *(float *)&v25 = (float)a4->left;
    v16 = (float)*((int *)CDesktopManager::s_pDesktopManagerInstance + 112);
    *((float *)&v25 + 1) = (float)a4->top;
    v17 = fminf(v14, (float)(v11 + v12) - v12);
    v18 = (float)*((int *)CDesktopManager::s_pDesktopManagerInstance + 114) + v16;
    right = v17 + left;
    v19 = fminf((float)v15, v18 - v16) + *((float *)&v25 + 1);
    goto LABEL_8;
  }
  if ( *((int *)a2 + 30) > 0 && *((int *)a2 + 31) > 0 )
  {
    v19 = (float)*((int *)a2 + 31);
    right = (float)*((int *)a2 + 30);
LABEL_8:
    bottom = v19;
    goto LABEL_9;
  }
  CTransitionVisualController::GetMonitorRectFromRectImpl(0LL, &v28);
  *(float *)&v25 = (float)v28.left;
  *((float *)&v25 + 1) = (float)v28.top;
  right = (float)v28.right;
  bottom = (float)v28.bottom;
LABEL_9:
  v20 = this[72];
  v28 = 0LL;
  v21 = CCachedVisualImageProxy::Update(v20, &v25, &v28, 0LL, 0LL);
  v9 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x2F2u);
  }
  else if ( a3 && (v24 = CCachedVisualImageProxy::Freeze(this[72]), v9 = v24, v24 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0x2F8u);
  }
  else
  {
    updated = CAnimatedTransitionVisual::_UpdateBrush((CAnimatedTransitionVisual *)this, this[72]);
    v9 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x2FCu);
  }
  return v9;
}
