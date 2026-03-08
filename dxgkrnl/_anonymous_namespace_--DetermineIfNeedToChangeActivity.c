/*
 * XREFs of _anonymous_namespace_::DetermineIfNeedToChangeActivity @ 0x1C01F8364
 * Callers:
 *     MonitorCreatePhysicalMonitor @ 0x1C01FA828 (MonitorCreatePhysicalMonitor.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C03BFFD0 (MonitorRemovePhysicalMonitor.c)
 * Callees:
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0001D60 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C0176CA0 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C01AFE1C (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C01F83FC (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 */

void __fastcall anonymous_namespace_::DetermineIfNeedToChangeActivity(DXGADAPTER *a1, unsigned int a2, bool *a3)
{
  bool v3; // bl
  struct _LUID *v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 )
  {
    v3 = 0;
    LOBYTE(v9) = 0;
    if ( DXGADAPTER::UsingSetTimingsFromVidPn(a1)
      && !*((_BYTE *)a1 + 2833)
      && !DXGADAPTER::IsAdapterSessionized(a1, v7, 0LL, 0LL)
      && (int)DmmIsTargetForceable(v8, a2, &v9) >= 0
      && !(_BYTE)v9 )
    {
      v3 = (int)DmmGetSourceConnectedToTargetInClientVidPn(a1, a2, &v9) >= 0;
    }
    *a3 = v3;
  }
}
