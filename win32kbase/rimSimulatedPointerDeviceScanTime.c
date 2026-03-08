/*
 * XREFs of rimSimulatedPointerDeviceScanTime @ 0x1C00F1808
 * Callers:
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C00F18F6 (rimUpdatePointerDeviceFrameScanTime.c)
 * Callees:
 *     ?UpdateScantime@RIM@InputTraceLogging@@SAXPEBUtagHPD_FRAME_SCAN_TIME@@_NK@Z @ 0x1C00F0F66 (-UpdateScantime@RIM@InputTraceLogging@@SAXPEBUtagHPD_FRAME_SCAN_TIME@@_NK@Z.c)
 */

void __fastcall rimSimulatedPointerDeviceScanTime(__int64 a1, __int64 *a2, int *a3)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  int v6; // r8d
  int v7; // eax

  v3 = *a2;
  v4 = a1 + 832;
  if ( ++*(_DWORD *)(v4 + 24) == 1 )
  {
    v6 = *a3;
    *(_DWORD *)v4 = v6;
    *(_QWORD *)(v4 + 40) = v3;
  }
  else
  {
    v6 = (unsigned __int64)(1000 * (v3 - *(_QWORD *)(v4 + 40))) / gliQpcFreq.QuadPart + *(_DWORD *)v4;
    *a3 = v6;
  }
  v7 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 4) = v6;
  *(_DWORD *)(v4 + 8) = v7;
  *(_QWORD *)(v4 + 32) = v3;
  InputTraceLogging::RIM::UpdateScantime((const struct tagHPD_FRAME_SCAN_TIME *)v4);
}
