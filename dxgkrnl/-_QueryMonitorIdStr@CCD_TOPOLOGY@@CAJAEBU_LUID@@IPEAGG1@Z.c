/*
 * XREFs of ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C017151C
 * Callers:
 *     ?GetMonitorHashsForPath@CCD_TOPOLOGY@@QEAAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x1C01C1020 (-GetMonitorHashsForPath@CCD_TOPOLOGY@@QEAAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z.c)
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C01C260C (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 * Callees:
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C000296C (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C01716D8 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorGetCCDMonitorID @ 0x1C01718C0 (MonitorGetCCDMonitorID.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C0171AB4 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorGetUsageClass @ 0x1C0171C64 (MonitorGetUsageClass.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01ADA68 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_QueryMonitorIdStr(
        const struct _LUID *a1,
        unsigned int a2,
        unsigned __int16 *a3,
        unsigned __int16 a4,
        unsigned __int16 *a5)
{
  unsigned __int16 *v6; // r12
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  DXGADAPTER *v9; // r14
  int v10; // eax
  __int64 v11; // rbx
  VIDPN_MGR *v12; // r15
  int ConnectedMonitorHandle; // eax
  DXGMONITOR *v14; // rsi
  __int64 v15; // r15
  unsigned __int16 v16; // ax
  unsigned __int16 *v17; // rsi
  int v18; // eax
  DXGADAPTER *v19; // r11
  unsigned __int16 *v21; // r8
  DXGADAPTER *v22; // r9
  __int64 v23; // rcx
  __int64 HighPart; // [rsp+20h] [rbp-C1h]
  __int64 LowPart; // [rsp+28h] [rbp-B9h]
  char v26[2]; // [rsp+30h] [rbp-B1h] BYREF
  unsigned __int16 v27; // [rsp+32h] [rbp-AFh]
  int v28; // [rsp+34h] [rbp-ADh] BYREF
  struct HDXGMONITOR__ *v29; // [rsp+38h] [rbp-A9h] BYREF
  unsigned __int16 *v30; // [rsp+40h] [rbp-A1h]
  unsigned __int16 *v31; // [rsp+48h] [rbp-99h]
  __int64 v32; // [rsp+50h] [rbp-91h] BYREF
  unsigned __int64 v33; // [rsp+58h] [rbp-89h] BYREF
  _BYTE v34[144]; // [rsp+60h] [rbp-81h] BYREF

  v31 = a5;
  v27 = a4;
  v30 = a3;
  v6 = (unsigned __int16 *)a2;
  Global = DXGGLOBAL::GetGlobal();
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v33);
  v9 = v8;
  if ( !v8 )
  {
    WdLogSingleEntry2(3LL, a1->HighPart, a1->LowPart);
    LODWORD(v11) = -1073741810;
    return (unsigned int)v11;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, v8, 0LL);
  v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v34, 0LL);
  LODWORD(v11) = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry4(2LL, v10, v9, a1->HighPart, a1->LowPart);
    goto LABEL_14;
  }
  v12 = *(VIDPN_MGR **)(*((_QWORD *)v9 + 365) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v32, (__int64)v12);
  v29 = 0LL;
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v12, (unsigned int)v6, &v29);
  v11 = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle < 0 )
  {
    v21 = v6;
    v22 = v9;
    LowPart = a1->LowPart;
    HighPart = a1->HighPart;
    v23 = 2LL;
LABEL_23:
    WdLogSingleEntry5(v23, v11, v21, v22, HighPart, LowPart);
    goto LABEL_13;
  }
  v28 = 0;
  v26[0] = 0;
  v14 = v29;
  MonitorGetUsageClass(v29, &v28, v26);
  if ( !v28 )
  {
    LODWORD(v11) = MonitorGetCCDMonitorID(v14, v27, v30);
    if ( (_DWORD)v11 == -2147483643 )
      LODWORD(v11) = -1073741789;
  }
  v15 = (int)VIDPN_MGR::ReleaseMonitorHandle(v12, v14);
  v16 = 0;
  if ( (int)v15 < 0 )
  {
    WdLogSingleEntry5(1LL, v15, v6, v14, a1->HighPart, a1->LowPart);
    LODWORD(v11) = v15;
    goto LABEL_13;
  }
  if ( v28 )
  {
    LODWORD(v11) = 0;
    goto LABEL_12;
  }
  if ( (int)v11 < 0 )
  {
    WdLogSingleEntry5(2LL, (int)v11, v6, v14, a1->HighPart, a1->LowPart);
    goto LABEL_13;
  }
  v17 = v30;
  v29 = 0LL;
  v18 = RtlStringCchLengthW(v30, v27, (unsigned __int64 *)&v29);
  v11 = v18;
  if ( v18 < 0 )
  {
    v22 = v19;
    v21 = v17;
    LowPart = a1->LowPart;
    HighPart = a1->HighPart;
    v23 = 1LL;
    goto LABEL_23;
  }
  v16 = (unsigned __int16)v29;
LABEL_12:
  *v31 = v16;
LABEL_13:
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v32 + 40));
LABEL_14:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
  DXGADAPTER::ReleaseReference(v9);
  return (unsigned int)v11;
}
