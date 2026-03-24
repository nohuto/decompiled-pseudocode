/*
 * XREFs of DxgkIsMonitorConnected @ 0x1C0224820
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C02EF524 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     MonitorIsMonitorConnected @ 0x1C00E67DC (MonitorIsMonitorConnected.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0121C38 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorGetMonitorHandle @ 0x1C0133530 (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C0139140 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetUsageClass @ 0x1C0149F54 (MonitorGetUsageClass.c)
 */

__int64 __fastcall DxgkIsMonitorConnected(struct _LUID a1, __int64 a2, unsigned __int8 a3, char a4, bool *a5)
{
  __int64 v6; // r15
  __int64 v9; // rax
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 UsageClass; // rdi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rax
  int IsMonitorConnected; // eax
  __int64 v30; // rcx
  int MonitorHandle; // eax
  __int64 HighPart; // rcx
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // [rsp+38h] [rbp-91h] BYREF
  struct _LUID v36; // [rsp+40h] [rbp-89h] BYREF
  unsigned __int64 v37[2]; // [rsp+48h] [rbp-81h] BYREF
  _BYTE v38[144]; // [rsp+58h] [rbp-71h] BYREF

  v6 = (unsigned int)a2;
  v36 = a1;
  if ( !a5 )
  {
    v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdError)(a1, a2);
    *(_QWORD *)(v9 + 24) = 9319LL;
LABEL_3:
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  *a5 = 0;
  Global = DXGGLOBAL::GetGlobal(*(_QWORD *)&a1, a2);
  v12 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, v37);
  v15 = (__int64)v12;
  if ( !v12 )
  {
    v9 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v9 + 24) = v36.HighPart;
    *(_QWORD *)(v9 + 32) = a1.LowPart;
    goto LABEL_3;
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(v12) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v18 + 24) = 9340LL;
    WdLogEvent5_WdAssertion(v18);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v38, (struct DXGADAPTER *const)v15, 0LL);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v15);
  if ( *(_QWORD *)(v15 + 2696) )
  {
    v24 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v38, 0LL);
    UsageClass = v24;
    if ( v24 >= 0 )
    {
      if ( *(_BYTE *)(v15 + 2609) )
      {
        v28 = WdLogNewEntry5_WdEvent(v26, v25);
        *(_QWORD *)(v28 + 24) = v36.HighPart;
        *(_QWORD *)(v28 + 32) = a1.LowPart;
        WdLogEvent5_WdEvent(v28);
        LODWORD(UsageClass) = -1073741130;
        goto LABEL_23;
      }
      IsMonitorConnected = MonitorIsMonitorConnected(v15, (unsigned int)v6, a3, a5);
      UsageClass = IsMonitorConnected;
      if ( IsMonitorConnected < 0 )
        goto LABEL_18;
      if ( !*a5 || a4 )
        goto LABEL_23;
      v37[0] = 0LL;
      MonitorHandle = MonitorGetMonitorHandle(
                        v15,
                        (unsigned int)v6,
                        a3,
                        DxgkIsMonitorConnected,
                        (struct HDXGMONITOR__ **)v37);
      UsageClass = MonitorHandle;
      if ( MonitorHandle >= 0 )
      {
        v33 = v37[0];
        v36.LowPart = 0;
        LOBYTE(v35) = 0;
        UsageClass = (int)MonitorGetUsageClass((struct HDXGMONITOR__ *)v37[0], &v36, &v35);
        MonitorReleaseMonitorHandle(v15, v33, DxgkIsMonitorConnected);
        if ( (int)UsageClass >= 0 )
        {
          *a5 = v36.LowPart == 0;
          goto LABEL_23;
        }
        v27 = (_QWORD *)WdLogNewEntry5_WdError(v34, v22);
        v27[3] = v33;
        v27[4] = UsageClass;
      }
      else
      {
LABEL_18:
        v27 = (_QWORD *)WdLogNewEntry5_WdError(v30, v22);
        HighPart = v36.HighPart;
        v27[3] = v6;
        v27[4] = HighPart;
        v27[5] = a1.LowPart;
        v27[6] = UsageClass;
      }
    }
    else
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25);
      v27[3] = v36.HighPart;
      v27[4] = a1.LowPart;
      v27[5] = UsageClass;
    }
    WdLogEvent5_WdError(v27);
    goto LABEL_23;
  }
  v21 = WdLogNewEntry5_WdError(v20, v19);
  *(_QWORD *)(v21 + 24) = v36.HighPart;
  *(_QWORD *)(v21 + 32) = a1.LowPart;
  WdLogEvent5_WdError(v21);
  LODWORD(UsageClass) = -1073741811;
LABEL_23:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38, v22);
  return (unsigned int)UsageClass;
}
