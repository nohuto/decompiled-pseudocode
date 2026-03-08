/*
 * XREFs of ?AddGPUTimeToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@0W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02FE918
 * Callers:
 *     ?AddGPUTimeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@0@Z @ 0x1C02E1464 (-AddGPUTimeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@0@Z.c)
 * Callees:
 *     ?DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@PEAI4PEA_N@Z @ 0x1C02FED40 (-DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYP.c)
 */

__int64 __fastcall DripsBlockerTrackingHelper::AddGPUTimeToProcessEntry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 result; // rax
  _BYTE v8[4]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+44h] [rbp-14h] BYREF
  _DWORD v10[4]; // [rsp+48h] [rbp-10h] BYREF

  v9 = 0;
  v10[0] = 0;
  v8[0] = 0;
  result = DripsBlockerTrackingHelper::DoGetProcessEntry(a1, a2, 0LL, a3, a5, &v9, v10, v8);
  if ( (int)result >= 0 && !v8[0] )
    *(_QWORD *)(4720LL * v9 + a1 + 48) += a4;
  return result;
}
