/*
 * XREFs of ?StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18008FC80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006300 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18008E268 (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1StartWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18008E440 (--1StartWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x18008E938 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderM.c)
 *     ?StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x18008F4B0 (-StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18008FEF4 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180091C6C (-_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual.c)
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowSWRVisual@@@Z @ 0x180092174 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAP.c)
 *     ?_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800922F8 (-_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x180092A58 (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCCaptureControllerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCCaptureControllerProxy@@@Z @ 0x1800BE08C (--$CreateProxyFromSharedHandle@VCCaptureControllerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCCaptureC.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800BE558 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::StartWindowCapture(
        struct _RTL_GENERIC_TABLE *this,
        HWND a2,
        void *a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  int v8; // ebx
  int v9; // edi
  struct CCaptureControllerProxy *v10; // rsi
  int v11; // ebx
  int v12; // eax
  CProjectionBorderManager *v13; // rcx
  int ProxyWindowHandle; // eax
  HWND v15; // rdi
  CProjectionBorderManager *v16; // rcx
  int CapturedItemRootVisual; // eax
  int v18; // eax
  struct CapturedWindowSWRVisual *v19; // r8
  CProjectionBorderManager *v20; // rcx
  CProjectionBorderManager *v21; // rcx
  unsigned int v23; // [rsp+20h] [rbp-E0h]
  CCaptureControllerProxy *v24; // [rsp+30h] [rbp-D0h] BYREF
  struct CapturedWindowSWRVisual *v25; // [rsp+38h] [rbp-C8h] BYREF
  HWND v26; // [rsp+40h] [rbp-C0h] BYREF
  struct CVisualProxy *v27; // [rsp+48h] [rbp-B8h] BYREF
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v29[40]; // [rsp+60h] [rbp-A0h] BYREF

  v28 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v27 = 0LL;
  v8 = *(_DWORD *)a4;
  v9 = *((_DWORD *)a4 + 1);
  v10 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v29,
    (__int64)"StartWindowCapture");
  v29[0] = &WindowFrameLoggingTelemetry::StartWindowCapture::`vftable';
  WindowFrameLoggingTelemetry::StartWindowCapture::StartActivity(
    (WindowFrameLoggingTelemetry::StartWindowCapture *)v29,
    a2,
    v9,
    v8);
  if ( CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::FindElement(
         this + 6,
         *(_QWORD *)a4) )
  {
    v11 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147418113, 0x13Eu);
    goto LABEL_22;
  }
  v12 = CCompositor::CreateProxyFromSharedHandle<CCaptureControllerProxy>(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
          a3,
          &v24);
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x141u);
LABEL_5:
    v10 = v24;
    goto LABEL_22;
  }
  v26 = 0LL;
  ProxyWindowHandle = CProjectionBorderManager::_GetProxyWindowHandle(v13, a2, &v26);
  v11 = ProxyWindowHandle;
  if ( ProxyWindowHandle < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ProxyWindowHandle, 0x145u);
    goto LABEL_5;
  }
  v15 = v26;
  if ( !v26 )
    v15 = a2;
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v25);
  CapturedItemRootVisual = CProjectionBorderManager::_GetCapturedItemRootVisual(v16, v15, &v27, &v25);
  v11 = CapturedItemRootVisual;
  if ( CapturedItemRootVisual < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, CapturedItemRootVisual, 0x14Du);
    goto LABEL_5;
  }
  v10 = v24;
  v18 = CCaptureControllerProxy::SetRootVisual(v24, v27);
  v11 = v18;
  if ( v18 < 0 )
  {
    v23 = 335;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, v23);
    goto LABEL_22;
  }
  v19 = v25;
  v25 = 0LL;
  v18 = CProjectionBorderManager::_AddTabGroupCaptureEntry((CProjectionBorderManager *)this, a2, v19, v10, a4);
  v11 = v18;
  if ( v18 < 0 )
  {
    v23 = 338;
    goto LABEL_21;
  }
  v18 = CProjectionBorderManager::_SetProjectionBorderForWindow(v20, v15, 1);
  v11 = v18;
  if ( v18 < 0 )
  {
    v23 = 340;
    goto LABEL_21;
  }
  if ( v15 != a2 )
  {
    v18 = CProjectionBorderManager::_SetProjectionBorderForWindow(v21, a2, 1);
    v11 = v18;
    if ( v18 < 0 )
    {
      v23 = 343;
      goto LABEL_21;
    }
  }
LABEL_22:
  if ( a3 )
    CloseHandle(a3);
  if ( v10 && v11 < 0 )
    CBaseObject::Release(v10);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v29,
    (unsigned int)v11);
  WindowFrameLoggingTelemetry::StartWindowCapture::~StartWindowCapture((WindowFrameLoggingTelemetry::StartWindowCapture *)v29);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v25);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v28);
  return (unsigned int)v11;
}
