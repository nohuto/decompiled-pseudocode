/*
 * XREFs of ?DisplayID_GetPrimaryUseCase@@YAJPEBUDisplayIDObj@@PEAW4DISPLAY_USE_CASE@@@Z @ 0x1C0071F8C
 * Callers:
 *     ?GetUsageParams@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAW4DISPLAY_USE_CASE@@AEA_N1@Z @ 0x1C03CC120 (-GetUsageParams@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAW4DISPLAY_USE_CASE@@AEA_N1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DisplayID_GetPrimaryUseCase(const struct DisplayIDObj *a1, enum DISPLAY_USE_CASE *a2)
{
  if ( !a1 || !*((_DWORD *)a1 + 5) || !a2 )
    return 3221225485LL;
  if ( !*((_BYTE *)a1 + 16) )
    return 3223126019LL;
  if ( (**(_BYTE **)a1 & 0xF0) != 0x20 )
    return 3221225659LL;
  *(_BYTE *)a2 = *(_BYTE *)(*(_QWORD *)a1 + 2LL) & 0xF;
  return 0LL;
}
