/*
 * XREFs of ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C016264C
 * Callers:
 *     ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C012F620 (-DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C0297FC4 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MON.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmIsStaticAndLeafTarget@@YAJQEAXIPEA_N1@Z @ 0x1C01626DC (-DmmIsStaticAndLeafTarget@@YAJQEAXIPEA_N1@Z.c)
 */

__int64 __fastcall MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // bl
  __int64 v11; // rax
  bool v12; // [rsp+50h] [rbp+18h] BYREF
  int v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = a4;
  v9 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a2) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v11 + 24) = 2305LL;
    WdLogEvent5_WdAssertion(v11);
  }
  *(_QWORD *)(a1 + 12) = *(_QWORD *)(a2 + 316);
  *(_DWORD *)(a1 + 20) = a3;
  LOBYTE(v13) = 0;
  v12 = 0;
  if ( (int)DmmIsStaticAndLeafTarget((void *const)a2, a3, (bool *)&v13, &v12) >= 0
    && (_BYTE)v13
    && v12
    && *(int *)(a2 + 2328) >= 0x2000 )
  {
    v9 = 1;
  }
  *(_BYTE *)(a1 + 30) = v9;
  return 0LL;
}
