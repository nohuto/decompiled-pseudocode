/*
 * XREFs of ?DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@PEAI4PEA_N@Z @ 0x1C02FED40
 * Callers:
 *     ?AddGPUTimeToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@0W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02FE918 (-AddGPUTimeToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@0W4_DXGKETW_PROFILER.c)
 *     ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02FEAF4 (-AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@.c)
 *     ?AddWakeUpToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02FEC54 (-AddWakeUpToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_T.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?AddNewProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEADW4_DXGKETW_PROFILER_TYPE@@PEAI3@Z @ 0x1C02FE994 (-AddNewProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEADW4_DXGKETW_PROFILER_TYPE@@PEAI3@Z.c)
 *     ?AddNewReasonForProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEAD0W4_DXGKETW_PROFILER_TYPE@@PEAI3@Z @ 0x1C02FEA1C (-AddNewReasonForProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEAD0W4_DXGKETW_PROFILER_TYPE@@P.c)
 *     ?GetProcessEntry@DripsBlockerTrackingHelper@@IEAA_N_KPEAD0W4_DXGKETW_PROFILER_TYPE@@PEAI3@Z @ 0x1C0302644 (-GetProcessEntry@DripsBlockerTrackingHelper@@IEAA_N_KPEAD0W4_DXGKETW_PROFILER_TYPE@@PEAI3@Z.c)
 *     ?PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z @ 0x1C0302814 (-PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z.c)
 *     ?ShouldIgnore@DripsBlockerTrackingHelper@@IEAA_NW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0302A84 (-ShouldIgnore@DripsBlockerTrackingHelper@@IEAA_NW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 */

__int64 __fastcall DripsBlockerTrackingHelper::DoGetProcessEntry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        _DWORD *a7,
        __int64 a8)
{
  unsigned int v10; // ebx
  DripsBlockerTrackingHelper *v11; // rcx
  _BYTE *v12; // r9
  const char *v13; // r10
  struct _EPROCESS *v14; // r11
  unsigned __int64 v16; // [rsp+40h] [rbp-68h] BYREF
  char v17[16]; // [rsp+48h] [rbp-60h] BYREF
  __int128 v18; // [rsp+58h] [rbp-50h]
  char v19; // [rsp+68h] [rbp-40h]

  v10 = 0;
  if ( (unsigned __int8)DripsBlockerTrackingHelper::ShouldIgnore(a1, a5, a3, a8) )
  {
    *v12 = 1;
    return 0LL;
  }
  else
  {
    v16 = 0LL;
    v19 = 0;
    *(_OWORD *)v17 = 0LL;
    v18 = 0LL;
    DripsBlockerTrackingHelper::PrepareDripsBlockerProcessName(v11, v13, v14, v17, 0x21u, &v16);
    if ( !(unsigned __int8)DripsBlockerTrackingHelper::GetProcessEntry(a1, a2, v17, v16, a5, a6, a7) )
    {
      v10 = DripsBlockerTrackingHelper::AddNewReasonForProcessEntry(a1, a2, v17, v16, a5, a6, a7);
      if ( v10 == -1073741275 )
        return (unsigned int)DripsBlockerTrackingHelper::AddNewProcessEntry(a1, a2, (__int64)v17, a5, a6, a7);
    }
    return v10;
  }
}
