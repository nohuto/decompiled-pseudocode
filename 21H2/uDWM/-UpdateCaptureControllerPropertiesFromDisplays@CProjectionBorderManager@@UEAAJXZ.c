/*
 * XREFs of ?UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ @ 0x180042770
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180091928 (-_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180091A24 (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_T.c)
 *     ?_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV?$DynArray@PEAVCProjectionBorderVisual@@$0A@@@@Z @ 0x180092688 (-_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV-$DynArray@PEAVCProjectionBorderVisual@@$0A@@.c)
 *     ?_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x180092720 (-_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCC.c)
 *     ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x180092D28 (-_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEA.c)
 */

__int64 __fastcall CProjectionBorderManager::UpdateCaptureControllerPropertiesFromDisplays(
        struct _RTL_GENERIC_TABLE *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  unsigned int v4; // edi
  HMONITOR v6; // rdx
  CProjectionBorderManager *v7; // rcx
  int updated; // eax
  CProjectionBorderManager *v9; // rcx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  PVOID RestartKey; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RestartKey = 0LL;
  while ( 1 )
  {
    v2 = RtlEnumerateGenericTableWithoutSplaying(this + 7, &RestartKey);
    v3 = v2;
    if ( !v2 )
    {
      v4 = 0;
      goto LABEL_4;
    }
    v12 = *v2;
    CProjectionBorderManager::_RemoveVisuals(v12, v2 + 3);
    v6 = (HMONITOR)v3[2];
    if ( v6 )
      CProjectionBorderManager::_AddProjectionBorderForDisplay(
        (CProjectionBorderManager *)this,
        v6,
        (const struct DWM_CAPTURE_TOKEN *)&v12);
    else
      CProjectionBorderManager::_AddProjectionBorderForAllDisplays(
        (CProjectionBorderManager *)this,
        (const struct DWM_CAPTURE_TOKEN *)&v12);
    updated = CProjectionBorderManager::_UpdateCaptureControllerTransformFromDisplay(
                v7,
                (HMONITOR)v3[2],
                (struct CCaptureControllerProxy *)v3[1]);
    v4 = updated;
    if ( updated < 0 )
      break;
    updated = CProjectionBorderManager::_SendBoundsToCaptureControllerFromDisplay(
                v9,
                (HMONITOR)v3[2],
                (struct CCaptureControllerProxy *)v3[1]);
    v4 = updated;
    if ( updated < 0 )
    {
      v10 = 679LL;
      goto LABEL_12;
    }
  }
  v10 = 678LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)updated);
LABEL_4:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v4;
}
