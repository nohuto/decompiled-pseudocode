/*
 * XREFs of ?CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@_N@Z @ 0x1C034A924
 * Callers:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1C018768C (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     ?CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z @ 0x1C03592A8 (-CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007980 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0009084 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C000B0E4 (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0190FF0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@00_KI@Z @ 0x1C034A7B0 (-CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@00_KI@Z.c)
 */

__int64 __fastcall CreatePeriodicMonitoredFenceNotificationInternal(
        struct DXGADAPTER *a1,
        struct ADAPTER_RENDER **a2,
        struct DXGSYNCOBJECT *a3,
        const struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *a4,
        bool a5)
{
  struct DXGADAPTER *v9; // rcx
  __int64 v10; // rdi
  int PairingAdapters; // eax
  ADAPTER_DISPLAY **v12; // rbx
  __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rdx
  ADAPTER_DISPLAY *v16; // r11
  __int64 v17; // rbx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  void *FenceValueCPUVirtualAddress; // rdx
  int PeriodicFrameNotification; // eax
  struct DXGADAPTER *v23; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v24; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v27[144]; // [rsp+70h] [rbp-90h] BYREF

  if ( DXGADAPTER::IsDxgmms2(a1) || (*((_DWORD *)v9 + 109) & 0x100) != 0 )
  {
    v23 = 0LL;
    v24 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v9, 0, &v23, &v26, &v24, &v25, 0);
    v10 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      WdLogSingleEntry2(2LL, a1, PairingAdapters);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get pairing adapters from adapter 0x%I64x (Status 0x%I64x)!",
        (__int64)a1,
        v10,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v10;
    }
    v12 = (ADAPTER_DISPLAY **)v24;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v27, v23, v24);
    if ( !a5 )
      LODWORD(v10) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v27, 0LL);
    DXGADAPTER::ReleaseReference(v23);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v12);
    if ( (int)v10 >= 0 )
    {
      v14 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(v12[365], a4->Info.Semaphore.InitialCount);
      v10 = v14;
      if ( v14 == -1 )
      {
        v17 = (unsigned int)v15;
        WdLogSingleEntry1(2LL, v15);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid VidPnTargetId %d specified when creating a periodic monitored fence",
          v17,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v10) = -1073741811;
        goto LABEL_20;
      }
      v18 = *((_QWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(v16, v14) + 2);
      if ( !HIDWORD(v18) || !(_DWORD)v18 )
      {
        WdLogSingleEntry1(2LL, v10);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid refresh rate for VidPnSourceId: %d when creating a periodic monitored fence",
          v10,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v10) = -1073741676;
        goto LABEL_20;
      }
      v19 = 10000000 * HIDWORD(v18) / (unsigned int)v18;
      FenceValueCPUVirtualAddress = a4->Info.MonitoredFence.FenceValueCPUVirtualAddress;
      if ( (unsigned __int64)FenceValueCPUVirtualAddress > v19 )
      {
        LODWORD(v10) = -1073741811;
        WdLogSingleEntry2(3LL, FenceValueCPUVirtualAddress, -1073741811LL);
        goto LABEL_20;
      }
      PeriodicFrameNotification = DXGSYNCOBJECT::CreatePeriodicFrameNotification(
                                    a3,
                                    a2,
                                    (struct ADAPTER_RENDER **)v23,
                                    (struct DXGADAPTER *)v12,
                                    v19,
                                    v10);
      LODWORD(v10) = PeriodicFrameNotification;
      if ( PeriodicFrameNotification >= 0 )
        goto LABEL_20;
      v13 = PeriodicFrameNotification;
    }
    else
    {
      v13 = (int)v10;
    }
    WdLogSingleEntry1(3LL, v13);
LABEL_20:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27);
    return (unsigned int)v10;
  }
  WdLogSingleEntry1(3LL, 256LL);
  LODWORD(v10) = -1073741811;
  return (unsigned int)v10;
}
