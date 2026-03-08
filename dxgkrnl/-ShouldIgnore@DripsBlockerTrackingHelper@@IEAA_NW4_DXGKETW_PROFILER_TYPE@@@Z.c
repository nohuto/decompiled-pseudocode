/*
 * XREFs of ?ShouldIgnore@DripsBlockerTrackingHelper@@IEAA_NW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0302A84
 * Callers:
 *     ?DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@PEAI4PEA_N@Z @ 0x1C02FED40 (-DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYP.c)
 *     ?RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0302920 (-RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TY.c)
 * Callees:
 *     <none>
 */

char __fastcall DripsBlockerTrackingHelper::ShouldIgnore(__int64 a1, int a2)
{
  int v2; // ecx
  int *i; // rax
  int v5; // [rsp+8h] [rbp+8h] BYREF
  int v6; // [rsp+Ch] [rbp+Ch]

  v2 = 0;
  v5 = 1009;
  v6 = 8014;
  for ( i = &v5; a2 != *i; ++i )
  {
    if ( (unsigned int)++v2 >= 2 )
      return 0;
  }
  return 1;
}
