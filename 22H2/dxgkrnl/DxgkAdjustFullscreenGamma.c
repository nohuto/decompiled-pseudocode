/*
 * XREFs of DxgkAdjustFullscreenGamma @ 0x1C0223100
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0001F24 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00027F8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0008C9C (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C001C490 (-GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C001E740 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_EnableDisplayColorManagementApi__private_ReportDeviceUsage @ 0x1C0025C44 (Feature_EnableDisplayColorManagementApi__private_ReportDeviceUsage.c)
 *     ?IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C003F000 (-IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     MonitorNotifyDXGIGammaRampChange @ 0x1C00EB174 (MonitorNotifyDXGIGammaRampChange.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C012F308 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C02571D8 (-SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z.c)
 */

__int64 __fastcall DxgkAdjustFullscreenGamma(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  ADAPTER_DISPLAY **v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // r8d
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  ADAPTER_DISPLAY *v30; // rcx
  __int64 v31; // r14
  DXGDEVICE *v32; // r15
  struct DXGDEVICE *VidPnSourceOwner; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  float v38; // xmm7_4
  __int64 v39; // rax
  float v40; // xmm6_4
  __int64 v41; // rax
  float *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // r15
  unsigned __int64 i; // r8
  int v49; // eax
  int v50; // [rsp+30h] [rbp-128h] BYREF
  __int64 v51; // [rsp+38h] [rbp-120h]
  char v52; // [rsp+40h] [rbp-118h]
  struct DXGADAPTER *v53; // [rsp+48h] [rbp-110h] BYREF
  unsigned int v54[4]; // [rsp+50h] [rbp-108h]
  __int128 v55; // [rsp+60h] [rbp-F8h]
  DXGADAPTER *v56; // [rsp+70h] [rbp-E8h] BYREF
  _BYTE v57[144]; // [rsp+80h] [rbp-D8h] BYREF

  v3 = (_OWORD *)a1;
  v50 = -1;
  v51 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v52 = 1;
    v50 = 2127;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2127);
  }
  else
  {
    v52 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v50, 2127LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = 10247LL;
    WdLogEvent5_WdError(v11);
LABEL_32:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50, v12);
    if ( v52 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v50);
    }
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v54 = *v3;
  v55 = v3[1];
  v53 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v56, v54[0], Current, &v53, 1);
  v16 = (ADAPTER_DISPLAY **)v53;
  if ( !v53 )
  {
    v17 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v17 + 24) = Current;
    *(_QWORD *)(v17 + 32) = v54[0];
    WdLogEvent5_WdError(v17);
    goto LABEL_30;
  }
  if ( !*((_QWORD *)v53 + 337) )
  {
    v18 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v18 + 24) = v16;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v18);
    goto LABEL_30;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v57, v53, 0LL);
  v20 = COREADAPTERACCESS::AcquireExclusive((__int64)v57, (unsigned int)(v19 + 1));
  v24 = v20;
  if ( v20 >= 0 )
  {
    v30 = v16[337];
    v31 = v54[1];
    if ( v54[1] >= *((_DWORD *)v30 + 20) )
      goto LABEL_29;
    v32 = 0LL;
    if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v30, v54[1]) == 2
      || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v16[337], v31) == 3 )
    {
      VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(v16[337], (unsigned int)v31);
    }
    else
    {
      if ( !ADAPTER_DISPLAY::IsVidPnSourceOwnerEmulated((DXGADAPTER **)v16[337], v31) )
        goto LABEL_28;
      VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(v16[337], (unsigned int)v31);
    }
    v32 = VidPnSourceOwner;
LABEL_28:
    if ( v32 )
    {
      LODWORD(v24) = 0;
      v38 = *(float *)&v54[2];
      if ( *(float *)&v54[2] > 4.0
        || *(float *)&v54[2] < 0.2
        || *(float *)&v54[3] > 4.0
        || *(float *)&v54[3] < 0.2
        || *(float *)&v55 > 4.0
        || *(float *)&v55 < 0.2 )
      {
        v39 = WdLogNewEntry5_WdWarning(v30, v21, v23);
        *(_QWORD *)(v39 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v39);
        LODWORD(v24) = -1073741811;
      }
      v40 = *((float *)&v55 + 1);
      if ( *((float *)&v55 + 1) > 0.6
        || *((float *)&v55 + 1) < -0.6
        || *((float *)&v55 + 2) > 0.6
        || *((float *)&v55 + 2) < -0.6
        || *((float *)&v55 + 3) > 0.6
        || *((float *)&v55 + 3) < -0.6 )
      {
        v41 = WdLogNewEntry5_WdWarning(v30, v21, v23);
        *(_QWORD *)(v41 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v41);
        LODWORD(v24) = -1073741811;
      }
      v42 = 0LL;
      if ( (int)v24 < 0 )
        goto LABEL_15;
      if ( v38 != 1.0
        || *(float *)&v54[3] != 1.0
        || *(float *)&v55 != 1.0
        || v40 != 0.0
        || *((float *)&v55 + 2) != 0.0
        || *((float *)&v55 + 3) != 0.0 )
      {
        v42 = (float *)operator new[](0x18uLL, 0x4B677844u, PagedPool);
        if ( !v42 )
        {
          v46 = WdLogNewEntry5_WdWarning(v44, v43, v45);
          *(_QWORD *)(v46 + 24) = v32;
          LODWORD(v24) = -1073741801;
          *(_QWORD *)(v46 + 32) = -1073741801LL;
          WdLogEvent5_WdWarning(v46);
          goto LABEL_15;
        }
        *v42 = v38;
        v42[1] = *(float *)&v54[3];
        *((_DWORD *)v42 + 2) = v55;
        v42[3] = v40;
        *((_QWORD *)v42 + 2) = *((_QWORD *)&v55 + 1);
      }
      DXGDEVICE::SetFullscreenGammaRampAdjustment(v32, v31, (struct DXGK_GAMMA_ADJUSTMENT *)v42);
      Feature_EnableDisplayColorManagementApi__private_ReportDeviceUsage();
      LODWORD(v53) = -1;
      v47 = 1LL;
      for ( i = 0LL;
            (int)DmmEnumClientVidPnPathTargetsFromSource(v16, (unsigned int)v31, i, (unsigned int *const)&v53) >= 0;
            i = v47++ )
      {
        v21 = (unsigned int)v53;
        if ( (_DWORD)v53 == -1 )
          break;
        v49 = MonitorNotifyDXGIGammaRampChange((DXGADAPTER *)v16, (unsigned int)v53);
        v24 = v49;
        if ( v49 < 0 )
          goto LABEL_14;
      }
      goto LABEL_15;
    }
LABEL_29:
    v34 = WdLogNewEntry5_WdWarning(v30, v21, v23);
    *(_QWORD *)(v34 + 24) = v31;
    *(_QWORD *)(v34 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v34);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v57, v35);
LABEL_30:
    if ( v56 )
      DXGADAPTER::ReleaseReference(v56);
    goto LABEL_32;
  }
LABEL_14:
  v25 = WdLogNewEntry5_WdError(v22, v21);
  *(_QWORD *)(v25 + 24) = v24;
  WdLogEvent5_WdError(v25);
LABEL_15:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v57, v21);
  if ( v56 )
    DXGADAPTER::ReleaseReference(v56);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50, v26);
  if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v50);
  return (unsigned int)v24;
}
