/*
 * XREFs of ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C0002E2C
 * Callers:
 *     ?ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C001F54C (-ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?AddModeImpl@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@W4_DXGK_VIDPN_INTERFACE_VERSION@@@Z @ 0x1C0176D00 (-AddModeImpl@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QE.c)
 *     ?_InsertMonitorSourceMode@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01FE778 (-_InsertMonitorSourceMode@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 * Callees:
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C0172AAC (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo(const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a1)
{
  D3DDDI_RATIONAL *p_VSyncFreq; // rdi
  unsigned __int64 Numerator; // r10
  __int64 Denominator; // rdx
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  unsigned int v8; // eax
  __int64 cx; // rcx
  const struct _D3DKMDT_VIDEO_SIGNAL_INFO *v10; // r9
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 cy; // rax

  p_VSyncFreq = &a1->VSyncFreq;
  Numerator = a1->VSyncFreq.Numerator;
  if ( *(_QWORD *)&a1->VSyncFreq != 0xFFFFFFFEFFFFFFFEuLL )
  {
    Denominator = a1->VSyncFreq.Denominator;
    if ( !(_DWORD)Denominator
      || Numerator < 5 * Denominator
      || Numerator > ((-(__int64)DMMVIDEOSIGNALMODE::EnableExperimentalRefreshRates & 0x1F4) + 500)
                   * (unsigned __int64)(unsigned int)Denominator )
    {
      cy = a1->ActiveSize.cy;
      v11 = a1->VSyncFreq.Denominator;
      cx = a1->ActiveSize.cx;
      v12 = Numerator;
      v10 = a1;
      goto LABEL_25;
    }
  }
  v5 = a1->HSyncFreq.Numerator;
  if ( *(_QWORD *)&a1->HSyncFreq != 0xFFFFFFFEFFFFFFFEuLL )
  {
    v6 = a1->HSyncFreq.Denominator;
    if ( !(_DWORD)v6
      || v5 < 1000 * v6
      || v5 > ((-(__int64)DMMVIDEOSIGNALMODE::EnableExperimentalRefreshRates & 0xF4240) + 1000000)
            * (unsigned __int64)(unsigned int)v6 )
    {
      LODWORD(cy) = DmmMapVSyncFromRationalToInteger(
                      p_VSyncFreq,
                      (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29),
                      0LL);
      cx = a1->ActiveSize.cy;
      v10 = (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)a1->ActiveSize.cx;
      v11 = a1->HSyncFreq.Denominator;
      v12 = a1->HSyncFreq.Numerator;
      cy = (unsigned int)cy;
LABEL_25:
      WdLogSingleEntry5(2LL, v12, v11, v10, cx, cy);
      return 3223192330LL;
    }
  }
  if ( a1->PixelRate - 1000000 > 0x253FCA1C0LL )
  {
    v8 = DmmMapVSyncFromRationalToInteger(
           p_VSyncFreq,
           (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29),
           0LL);
    WdLogSingleEntry4(2LL, a1->PixelRate, a1->ActiveSize.cx, a1->ActiveSize.cy, v8);
    return 3223192330LL;
  }
  if ( a1->ActiveSize.cx < 0x64 || a1->ActiveSize.cy < 0x64 )
  {
    WdLogSingleEntry3(2LL, a1->ActiveSize.cx, a1->ActiveSize.cy, a1);
    return 3223192331LL;
  }
  else if ( a1->TotalSize.cx < 0x64 || a1->TotalSize.cy < 0x64 )
  {
    WdLogSingleEntry3(2LL, a1->TotalSize.cx, a1->TotalSize.cy, a1);
    return 3223192332LL;
  }
  else if ( (int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29 == 1
         || (unsigned int)(((int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29) - 2) < 2 )
  {
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, (int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29, a1);
    return 3223192402LL;
  }
}
