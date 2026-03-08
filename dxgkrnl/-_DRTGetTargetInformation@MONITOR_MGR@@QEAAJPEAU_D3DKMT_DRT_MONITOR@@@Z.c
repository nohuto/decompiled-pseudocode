/*
 * XREFs of ?_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z @ 0x1C03C3044
 * Callers:
 *     MonitorDRTTest @ 0x1C03BF2F0 (MonitorDRTTest.c)
 * Callees:
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C01CF0A0 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 */

__int64 __fastcall MONITOR_MGR::_DRTGetTargetInformation(
        MONITOR_MGR *this,
        struct _D3DKMT_DRT_MONITOR *a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v6; // rdx
  unsigned __int64 v8; // r8
  unsigned int MonitorInformationForTargets; // ecx
  unsigned int v10; // eax
  struct _D3DKMT_DRT_MONITOR *v11; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+28h] [rbp-10h]

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( *((_DWORD *)a2 + 1) < 0x20u )
    WdLogSingleEntry0(1LL);
  v6 = *((unsigned int *)a2 + 4);
  if ( (unsigned int)v6 > *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 1676LL) )
  {
    WdLogSingleEntry1(3LL, v6);
    return 3221225485LL;
  }
  v8 = *((unsigned int *)a2 + 1);
  if ( v8 < 12 * v6 + 20 )
  {
    WdLogSingleEntry2(3LL, v6, v8);
    return 3221225485LL;
  }
  v12 = 0;
  v11 = a2;
  MonitorInformationForTargets = MONITOR_MGR::_GetMonitorInformationForTargets(
                                   this,
                                   (int (__high *)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8))&DRTGetTargetCBContext::_pDRTTargetInfoCollectorCB,
                                   &v11,
                                   a4);
  if ( MonitorInformationForTargets == -1073741275 )
  {
    v10 = v12;
    if ( *((_DWORD *)a2 + 4) < v12 )
    {
      WdLogSingleEntry0(7LL);
      v10 = v12;
    }
    MonitorInformationForTargets = 0;
    *((_DWORD *)a2 + 4) = v10;
  }
  return MonitorInformationForTargets;
}
