/*
 * XREFs of ?_UpdateTabGroupMap@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180092F68
 * Callers:
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800915D0 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006300 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@Z @ 0x18008E4F0 (--4-$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x18008E938 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderM.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x180092A58 (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_UpdateTabGroupMap(
        struct _RTL_GENERIC_TABLE *this,
        HWND a2,
        struct CapturedWindowSWRVisual *a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  HWND *Element; // rax
  CProjectionBorderManager *v7; // rcx
  HWND *v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Element = (HWND *)CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::FindElement(
                      this + 6,
                      *(_QWORD *)a4);
  v8 = Element;
  if ( !Element )
    return 2147549183LL;
  v9 = CProjectionBorderManager::_SetProjectionBorderForWindow(v7, Element[2], 0);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v8[2] = a2;
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease((CBaseObject **)v8 + 3);
    Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=((CBaseObject **)v8 + 3, (volatile signed __int32 *)a3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x338,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
}
