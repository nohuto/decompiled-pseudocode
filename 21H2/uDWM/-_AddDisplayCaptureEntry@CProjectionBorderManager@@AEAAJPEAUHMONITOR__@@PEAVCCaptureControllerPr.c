/*
 * XREFs of ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800917AC
 * Callers:
 *     ?StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18008F880 (-StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@.c)
 *     ?StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18008FA60 (-StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_T.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006300 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180027988 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??4?$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@Z @ 0x18008E4F0 (--4-$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x18008E8D8 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderMan.c)
 *     ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180091928 (-_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180091A24 (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_T.c)
 *     ?_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ @ 0x180091DD4 (-_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ.c)
 *     ?_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x180092720 (-_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCC.c)
 *     ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x180092D28 (-_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEA.c)
 */

__int64 __fastcall CProjectionBorderManager::_AddDisplayCaptureEntry(
        struct _RTL_GENERIC_TABLE *this,
        HMONITOR a2,
        struct CCaptureControllerProxy *a3,
        const struct DWM_CAPTURE_TOKEN *a4,
        bool a5)
{
  struct _RTL_GENERIC_TABLE *v5; // r15
  __int64 v7; // rdx
  unsigned int v11; // ebx
  int v12; // r9d
  CProjectionBorderManager *v13; // rcx
  int updated; // eax
  CProjectionBorderManager *v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-50h]
  __int64 Buffer; // [rsp+30h] [rbp-40h] BYREF
  __int128 v19; // [rsp+38h] [rbp-38h] BYREF
  __int128 v20; // [rsp+48h] [rbp-28h] BYREF
  int v21; // [rsp+58h] [rbp-18h]
  int v22; // [rsp+5Ch] [rbp-14h]
  int v23; // [rsp+60h] [rbp-10h]

  v5 = this + 7;
  v21 = 0;
  v7 = *(_QWORD *)a4;
  v22 = 0;
  v23 = 0;
  Buffer = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::FindElement(this + 7, v7) )
  {
    v11 = -2147418113;
    v17 = 1049;
LABEL_3:
    v12 = v11;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, v17);
    goto LABEL_18;
  }
  Buffer = *(_QWORD *)a4;
  *((_QWORD *)&v19 + 1) = a2;
  Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=((CBaseObject **)&v19, (volatile signed __int32 *)a3);
  if ( !RtlInsertElementGenericTable(v5, &Buffer, 0x38u, 0LL) )
  {
    v11 = -2147024882;
    v17 = 1055;
    goto LABEL_3;
  }
  CProjectionBorderManager::_EnsureCursorStateForCapture((CProjectionBorderManager *)this);
  if ( a5 )
  {
    if ( a2 )
    {
      updated = CProjectionBorderManager::_AddProjectionBorderForDisplay((CProjectionBorderManager *)this, a2, a4);
      v11 = updated;
      if ( updated < 0 )
      {
        v17 = 1062;
LABEL_16:
        v12 = updated;
        goto LABEL_17;
      }
    }
    else
    {
      updated = CProjectionBorderManager::_AddProjectionBorderForAllDisplays((CProjectionBorderManager *)this, a4);
      v11 = updated;
      if ( updated < 0 )
      {
        v17 = 1066;
        goto LABEL_16;
      }
    }
  }
  updated = CProjectionBorderManager::_UpdateCaptureControllerTransformFromDisplay(v13, a2, a3);
  v11 = updated;
  if ( updated < 0 )
  {
    v17 = 1070;
    goto LABEL_16;
  }
  updated = CProjectionBorderManager::_SendBoundsToCaptureControllerFromDisplay(v15, a2, a3);
  v11 = updated;
  if ( updated < 0 )
  {
    v17 = 1071;
    goto LABEL_16;
  }
LABEL_18:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v20);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease((CBaseObject **)&v19);
  return v11;
}
