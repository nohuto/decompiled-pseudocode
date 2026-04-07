/*
 * XREFs of ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800AC1C8
 * Callers:
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x1800983AC (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x18009964C (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x1800062A0 (-Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180006DA0 (-Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18000A43C (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000ADB8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18000AF24 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18000BE34 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180016130 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180019928 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x180019DAC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024380 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002A9A8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x18003419C (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180034C08 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180084FF8 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x180095A54 (-SetRotation@CVisual@@QEAAXN@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800AD2AC (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800AD5B8 (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
 */

__int64 __fastcall CScreenRotation::Capture(CScreenRotation *this, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  void *v5; // rdx
  CWindowList *v6; // r13
  bool v7; // dl
  LONG v8; // r12d
  LONG v9; // r15d
  LONG v10; // eax
  CAnimatedTransitionVisual **v11; // r14
  struct CVisual *RootVisualForDesktop; // r15
  int inserted; // eax
  CAnimatedTransitionVisual *v14; // rcx
  __int64 v15; // rcx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  CAnimatedTransitionVisual *v17; // rcx
  CAnimatedTransitionVisual *v18; // rcx
  CAnimatedTransitionVisual *v19; // rcx
  unsigned int v21; // [rsp+20h] [rbp-49h]
  struct tagSIZE v22; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v24[20]; // [rsp+40h] [rbp-29h] BYREF
  int v25; // [rsp+54h] [rbp-15h]
  int v26; // [rsp+58h] [rbp-11h]
  int v27; // [rsp+64h] [rbp-5h]
  int v28; // [rsp+68h] [rbp-1h]
  struct tagRECT v29; // [rsp+70h] [rbp+7h] BYREF
  _QWORD v30[2]; // [rsp+80h] [rbp+17h] BYREF

  v4 = 0;
  if ( *((_BYTE *)this + 380) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v5 = &UdwmHardwareExpression_Capture_Info;
LABEL_6:
      McGenEventWrite_EtwEventWriteTransfer(
        Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (__int64)v5,
        a3,
        1LL,
        (__int64)v30);
    }
  }
  else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v5 = &UdwmScreenRotation_Capture_Info;
    goto LABEL_6;
  }
  GetDesktopID(1LL, &v23);
  v29.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 111);
  v29.right = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 113) + v29.left;
  v29.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 112);
  v29.bottom = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 114) + v29.top;
  v6 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61);
  if ( !*((_BYTE *)this + 328) || (v7 = 1, *((_DWORD *)this + 90) != -1) )
    v7 = 0;
  CScreenRotation::Stop(this, v7);
  v8 = 0;
  v9 = v29.right - v29.left;
  if ( v29.right - v29.left < 0 )
    v9 = 0;
  v10 = v29.bottom - v29.top;
  v22.cx = v9;
  if ( v29.bottom - v29.top < 0 )
    v10 = 0;
  v11 = (CAnimatedTransitionVisual **)((char *)this + 312);
  v22.cy = v10;
  if ( v29.bottom - v29.top >= 0 )
    v8 = v29.bottom - v29.top;
  if ( *v11 )
  {
    if ( *((_BYTE *)this + 331) )
    {
      CVisual::SetRotation(this, (double)*((int *)this + 84));
      CVisual::SetOffset((struct tagPOINT *)this, (const struct tagPOINT *)((char *)this + 348));
      v17 = *v11;
      v25 = 0;
      v26 = 0;
      CAnimatedTransitionVisual::Translate2D(v17, (const struct TA_TRANSFORM_2D *)v24);
      v18 = *v11;
      v25 = 1065353216;
      v26 = 1065353216;
      v27 = 1056964608;
      v28 = 1056964608;
      CAnimatedTransitionVisual::Scale2D(v18, (const struct TA_TRANSFORM_2D *)v24);
      CAnimatedTransitionVisual::SetBeginAlpha(*v11, 0.0);
      *((_DWORD *)*v11 + 233) = 0;
    }
    if ( abs32(*((_DWORD *)this + 83)) == 90 )
    {
      v22.cy = v9;
      v22.cx = v8;
    }
    else
    {
      CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v11, &v29);
      v19 = *v11;
      *((struct tagRECT *)v19 + 54) = v29;
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v19 + 8), 4096);
    }
LABEL_34:
    VisualCollection::InsertRelative(
      (CScreenRotation *)((char *)this + 32),
      (struct CVisual *)(((unsigned __int64)*v11 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)*v11 >> 64)),
      0LL,
      0,
      1);
    CScreenRotation::UpdateBackgroundInstructionsAndSize(this, &v22, 1);
    return v4;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(v6, v23);
  inserted = CAnimatedTransitionVisual::Create((struct CAnimatedTransitionVisual **)this + 39);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v21 = 89;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, v21);
    return v4;
  }
  if ( *v11 )
  {
    inserted = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)*v11, RootVisualForDesktop, 1, &v29);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v21 = 91;
      goto LABEL_19;
    }
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v11, &v29);
    v14 = *v11;
    *((struct tagRECT *)v14 + 54) = v29;
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v14 + 8), 4096);
    v15 = (__int64)*v11 + 8;
    v30[0] = v22;
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v15 + 96LL))(v15, v30);
    *((struct tagSIZE *)*v11 + 118) = v22;
    CVisual::SetInterpolationMode((unsigned int *)*v11 + 2, 1u);
    RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v6, v23);
    inserted = VisualCollection::InsertRelative(
                 (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
                 this,
                 0LL,
                 0,
                 1);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v21 = 103;
      goto LABEL_19;
    }
    inserted = CVisual::MoveToFront(this, 1);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v21 = 104;
      goto LABEL_19;
    }
    goto LABEL_34;
  }
  v4 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x5Au);
  return v4;
}
