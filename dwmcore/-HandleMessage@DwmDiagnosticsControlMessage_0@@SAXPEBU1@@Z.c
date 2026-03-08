/*
 * XREFs of ?HandleMessage@DwmDiagnosticsControlMessage_0@@SAXPEBU1@@Z @ 0x180270104
 * Callers:
 *     DispatchDwmDiagnosticsControlMessage @ 0x180270044 (DispatchDwmDiagnosticsControlMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall DwmDiagnosticsControlMessage_0::HandleMessage(const struct DwmDiagnosticsControlMessage_0 *a1)
{
  __int64 v1; // r8
  _DWORD *v2; // r9

  v1 = *((int *)a1 + 7);
  if ( *((unsigned int *)a1 + 4) >= (unsigned __int64)(4LL * ((int)v1 - 1) + 36) && v1 > 0 )
  {
    v2 = (_DWORD *)((char *)a1 + 32);
    do
    {
      switch ( *v2 & 0x7FFFFFFF )
      {
        case 2:
          g_ShowDirtyRegions = *v2 >= 0;
          break;
        case 4:
          g_ShowLightingHeatmap = *v2 >= 0;
          break;
        case 5:
          g_fTelemetry_FramesReportFast = *v2 >= 0;
          break;
      }
      ++v2;
      --v1;
    }
    while ( v1 );
  }
}
