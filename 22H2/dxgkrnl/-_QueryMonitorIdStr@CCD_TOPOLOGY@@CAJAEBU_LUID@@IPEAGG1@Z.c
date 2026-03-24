/*
 * XREFs of ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C0149D50
 * Callers:
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C0149C08 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0009550 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0009A28 (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0121C38 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorGetCCDMonitorID @ 0x1C0133BCC (MonitorGetCCDMonitorID.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C0149F08 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorGetUsageClass @ 0x1C0149F54 (MonitorGetUsageClass.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C014A020 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_QueryMonitorIdStr(
        const struct _LUID *a1,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned __int16 a4,
        unsigned __int16 *a5)
{
  __int64 v6; // r12
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGADAPTER *v12; // rsi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  VIDPN_MGR *v17; // r15
  int ConnectedMonitorHandle; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct HDXGMONITOR__ *v21; // r14
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r15
  __int64 v26; // r14
  unsigned __int16 *v27; // r15
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  _BYTE v37[2]; // [rsp+20h] [rbp-B1h] BYREF
  unsigned __int16 v38; // [rsp+22h] [rbp-AFh]
  int v39; // [rsp+24h] [rbp-ADh] BYREF
  struct HDXGMONITOR__ *v40; // [rsp+28h] [rbp-A9h] BYREF
  unsigned __int16 *v41; // [rsp+30h] [rbp-A1h]
  unsigned __int16 *v42; // [rsp+38h] [rbp-99h]
  __int64 v43; // [rsp+40h] [rbp-91h] BYREF
  unsigned __int64 v44; // [rsp+48h] [rbp-89h] BYREF
  _BYTE v45[144]; // [rsp+50h] [rbp-81h] BYREF

  v42 = a5;
  v38 = a4;
  v41 = a3;
  v6 = (unsigned int)a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v44);
  v12 = v8;
  if ( !v8 )
  {
    v32 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v32 + 24) = a1->HighPart;
    *(_QWORD *)(v32 + 32) = a1->LowPart;
    WdLogEvent5_WdWarning(v32);
    LODWORD(v16) = -1073741810;
    return (unsigned int)v16;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v45, v8, 0LL);
  v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v45, 0LL);
  v16 = v13;
  if ( v13 < 0 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
    v33[3] = v16;
    v33[4] = v12;
    v33[5] = a1->HighPart;
    v33[6] = a1->LowPart;
    WdLogEvent5_WdError(v33);
    goto LABEL_13;
  }
  v17 = *(VIDPN_MGR **)(*((_QWORD *)v12 + 337) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v43, (__int64)v17);
  v40 = 0LL;
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v17, v6, &v40);
  v16 = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle < 0 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
    v34[3] = v16;
    v34[5] = v12;
LABEL_21:
    v34[4] = v6;
    v34[6] = a1->HighPart;
    v34[7] = a1->LowPart;
    WdLogEvent5_WdError(v34);
    goto LABEL_12;
  }
  v39 = 0;
  v37[0] = 0;
  v21 = v40;
  MonitorGetUsageClass(v40, &v39, v37);
  if ( !v39 )
  {
    LODWORD(v16) = MonitorGetCCDMonitorID(v21, v38, v41);
    if ( (_DWORD)v16 == -2147483643 )
      LODWORD(v16) = -1073741789;
  }
  v22 = VIDPN_MGR::ReleaseMonitorHandle(v17, v21);
  v25 = v22;
  if ( v22 < 0 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdAssertion(v24, v23);
    v35[3] = v25;
    v35[4] = v6;
    v35[5] = v21;
    v35[6] = a1->HighPart;
    v35[7] = a1->LowPart;
    WdLogEvent5_WdAssertion(v35);
    LODWORD(v16) = v25;
  }
  else
  {
    if ( !v39 )
    {
      if ( (int)v16 >= 0 )
      {
        v26 = v38;
        v27 = v41;
        v40 = 0LL;
        v28 = RtlStringCchLengthW(v41, v38, (unsigned __int64 *)&v40);
        v16 = v28;
        if ( v28 < 0 )
        {
          v36 = (_QWORD *)WdLogNewEntry5_WdAssertion(v29, v23);
          v36[3] = v16;
          v36[4] = v27;
          v36[5] = v26;
          v36[6] = a1->HighPart;
          v36[7] = a1->LowPart;
          WdLogEvent5_WdAssertion(v36);
        }
        else
        {
          *v42 = (unsigned __int16)v40;
        }
        goto LABEL_12;
      }
      v34 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
      v34[3] = (int)v16;
      v34[5] = v21;
      goto LABEL_21;
    }
    LODWORD(v16) = 0;
    *v42 = 0;
  }
LABEL_12:
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v43 + 40), v23);
LABEL_13:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45, v30);
  DXGADAPTER::ReleaseReference(v12);
  return (unsigned int)v16;
}
