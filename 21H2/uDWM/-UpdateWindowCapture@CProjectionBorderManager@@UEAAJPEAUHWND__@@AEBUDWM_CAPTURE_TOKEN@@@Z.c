/*
 * XREFs of ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800915D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006300 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18008E268 (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18008E4C4 (--1UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x18008E938 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderM.c)
 *     ?StartActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x18008F778 (-StartActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18008FEF4 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowSWRVisual@@@Z @ 0x180092174 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAP.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800927D0 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptur.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x180092A58 (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_UpdateTabGroupMap@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180092F68 (-_UpdateTabGroupMap@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@AEBU.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800BE558 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::UpdateWindowCapture(
        struct _RTL_GENERIC_TABLE *this,
        HWND a2,
        const struct DWM_CAPTURE_TOKEN *a3)
{
  int v6; // ebx
  int v7; // edi
  CProjectionBorderManager *v8; // rcx
  int CapturedItemRootVisual; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  struct CapturedWindowSWRVisual *v12; // r8
  CCaptureControllerProxy **Element; // rdi
  CProjectionBorderManager *v14; // rcx
  struct CapturedWindowSWRVisual *v16; // [rsp+20h] [rbp-E0h] BYREF
  struct CVisualProxy *v17; // [rsp+28h] [rbp-D8h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v19[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v18 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v17 = 0LL;
  v16 = 0LL;
  v6 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 1);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v19,
    (__int64)"UpdateWindowCapture");
  v19[0] = &WindowFrameLoggingTelemetry::UpdateWindowCapture::`vftable';
  WindowFrameLoggingTelemetry::UpdateWindowCapture::StartActivity(
    (WindowFrameLoggingTelemetry::UpdateWindowCapture *)v19,
    a2,
    v7,
    v6);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v16);
  CapturedItemRootVisual = CProjectionBorderManager::_GetCapturedItemRootVisual(v8, a2, &v17, &v16);
  v10 = CapturedItemRootVisual;
  if ( CapturedItemRootVisual >= 0 )
  {
    v12 = v16;
    v16 = 0LL;
    CapturedItemRootVisual = CProjectionBorderManager::_UpdateTabGroupMap((CProjectionBorderManager *)this, a2, v12, a3);
    v10 = CapturedItemRootVisual;
    if ( CapturedItemRootVisual >= 0 )
    {
      Element = (CCaptureControllerProxy **)CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::FindElement(
                                              this + 6,
                                              *(_QWORD *)a3);
      CapturedItemRootVisual = CCaptureControllerProxy::SetRootVisual(Element[1], v17);
      v10 = CapturedItemRootVisual;
      if ( CapturedItemRootVisual >= 0 )
      {
        CapturedItemRootVisual = CProjectionBorderManager::_SendBoundsToCaptureControllerFromWindow(
                                   (CProjectionBorderManager *)this,
                                   a2,
                                   Element[1]);
        v10 = CapturedItemRootVisual;
        if ( CapturedItemRootVisual >= 0 )
        {
          CapturedItemRootVisual = CProjectionBorderManager::_SetProjectionBorderForWindow(v14, a2, 1);
          v10 = CapturedItemRootVisual;
          if ( CapturedItemRootVisual >= 0 )
          {
            wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
              (__int64)v19,
              0);
            v10 = 0;
            goto LABEL_13;
          }
          v11 = 385LL;
        }
        else
        {
          v11 = 382LL;
        }
      }
      else
      {
        v11 = 380LL;
      }
    }
    else
    {
      v11 = 375LL;
    }
  }
  else
  {
    v11 = 374LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)CapturedItemRootVisual);
LABEL_13:
  WindowFrameLoggingTelemetry::UpdateWindowCapture::~UpdateWindowCapture((WindowFrameLoggingTelemetry::UpdateWindowCapture *)v19);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v16);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
  return v10;
}
