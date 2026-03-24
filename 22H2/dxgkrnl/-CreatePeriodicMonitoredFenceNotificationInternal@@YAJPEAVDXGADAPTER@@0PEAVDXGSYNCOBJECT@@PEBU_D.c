/*
 * XREFs of ?CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@_N@Z @ 0x1C02907DC
 * Callers:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C0117F20 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     ?CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z @ 0x1C02BCAC0 (-CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00026B4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000903C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C00199C4 (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@00_KI@Z @ 0x1C0290690 (-CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@00_KI@Z.c)
 */

__int64 __fastcall CreatePeriodicMonitoredFenceNotificationInternal(
        struct DXGADAPTER *a1,
        struct ADAPTER_RENDER **a2,
        struct DXGSYNCOBJECT *a3,
        const struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *a4,
        bool a5)
{
  __int64 v9; // rdx
  struct DXGADAPTER *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rbx
  int PairingAdapters; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  ADAPTER_DISPLAY **v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  void *FenceValueCPUVirtualAddress; // rcx
  __int64 v24; // rdx
  __int64 InitialCount; // r14
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  ADAPTER_DISPLAY *v29; // r11
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  UINT64 v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rtt
  int PeriodicFrameNotification; // eax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  struct DXGADAPTER *v42; // [rsp+40h] [rbp-A1h] BYREF
  struct DXGADAPTER *v43; // [rsp+48h] [rbp-99h] BYREF
  unsigned __int64 v44; // [rsp+50h] [rbp-91h] BYREF
  unsigned __int64 v45; // [rsp+58h] [rbp-89h] BYREF
  _BYTE v46[144]; // [rsp+60h] [rbp-81h] BYREF

  if ( DXGADAPTER::IsDxgmms2(a1) || (*((_DWORD *)v10 + 87) & 0x100) != 0 )
  {
    v42 = 0LL;
    v43 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v10, 0LL, &v42, &v45, &v43, &v44, 0);
    v13 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v17 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v17 + 24) = a1;
      *(_QWORD *)(v17 + 32) = v13;
      WdLogEvent5_WdError(v17);
      return (unsigned int)v13;
    }
    v18 = (ADAPTER_DISPLAY **)v43;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v46, v42, v43);
    if ( !a5 )
      LODWORD(v13) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v46, 0LL);
    DXGADAPTER::ReleaseReference(v42);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
    if ( (int)v13 >= 0 )
    {
      InitialCount = a4->Info.Semaphore.InitialCount;
      v26 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(v18[337], a4->Info.Semaphore.InitialCount);
      v13 = v26;
      if ( v26 == -1 )
      {
        v30 = WdLogNewEntry5_WdError(v28, v27);
        *(_QWORD *)(v30 + 24) = InitialCount;
        WdLogEvent5_WdError(v30);
        LODWORD(v13) = -1073741811;
        goto LABEL_21;
      }
      v32 = *((_QWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(v29, v26) + 2);
      v33 = HIDWORD(v32);
      if ( !HIDWORD(v32) || !(_DWORD)v32 )
      {
        v40 = WdLogNewEntry5_WdError(v32, v31);
        *(_QWORD *)(v40 + 24) = v13;
        WdLogEvent5_WdError(v40);
        LODWORD(v13) = -1073741676;
        goto LABEL_21;
      }
      v36 = 10000000 * v33;
      v34 = 10000000 * v33 / (unsigned int)v32;
      v35 = v36 % (unsigned int)v32;
      if ( a4->Info.PeriodicMonitoredFence.Time <= v34 )
      {
        PeriodicFrameNotification = DXGSYNCOBJECT::CreatePeriodicFrameNotification(
                                      a3,
                                      a2,
                                      (struct ADAPTER_RENDER **)v42,
                                      (struct DXGADAPTER *)v18,
                                      v34,
                                      v13);
        v13 = PeriodicFrameNotification;
        if ( PeriodicFrameNotification >= 0 )
          goto LABEL_21;
        v22 = WdLogNewEntry5_WdWarning(v38, v24, v39);
        *(_QWORD *)(v22 + 24) = v13;
        goto LABEL_11;
      }
      v22 = WdLogNewEntry5_WdWarning(v32, v35, (unsigned int)v32);
      FenceValueCPUVirtualAddress = a4->Info.MonitoredFence.FenceValueCPUVirtualAddress;
      LODWORD(v13) = -1073741811;
      *(_QWORD *)(v22 + 32) = -1073741811LL;
    }
    else
    {
      v22 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      FenceValueCPUVirtualAddress = (void *)(int)v13;
    }
    *(_QWORD *)(v22 + 24) = FenceValueCPUVirtualAddress;
LABEL_11:
    WdLogEvent5_WdWarning(v22);
LABEL_21:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v46, v24);
    return (unsigned int)v13;
  }
  v12 = WdLogNewEntry5_WdWarning(v10, v9, v11);
  *(_QWORD *)(v12 + 24) = 296LL;
  WdLogEvent5_WdWarning(v12);
  LODWORD(v13) = -1073741811;
  return (unsigned int)v13;
}
