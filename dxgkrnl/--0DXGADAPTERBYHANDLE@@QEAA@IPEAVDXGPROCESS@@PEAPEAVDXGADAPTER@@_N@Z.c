/*
 * XREFs of ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006DA4
 * Callers:
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1C017CB60 (DxgkGetMultiPlaneOverlayCaps.c)
 *     DxgkGetPostCompositionCaps @ 0x1C017CF50 (DxgkGetPostCompositionCaps.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C017DFB0 (DxgkReserveGpuVirtualAddress.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1C018768C (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018DC00 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkGetDisplayModeList @ 0x1C01A95D0 (DxgkGetDisplayModeList.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C01B3464 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     DxgkFlushHeapTransitions @ 0x1C01D47D0 (DxgkFlushHeapTransitions.c)
 *     DxgkFlushPresentHistory @ 0x1C01D9720 (DxgkFlushPresentHistory.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C01DA364 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C01DE730 (DxgkGetPresentHistoryInternal.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C01DFAA0 (DxgkGetPresentHistoryReadyEvent.c)
 *     DxgkCheckVidPnExclusiveOwnership @ 0x1C01E2D90 (DxgkCheckVidPnExclusiveOwnership.c)
 *     DxgkCheckMonitorPowerState @ 0x1C01E3020 (DxgkCheckMonitorPowerState.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C02B0CF0 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02CAC10 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C02CBB30 (DxgkAdjustFullscreenGamma.c)
 *     DxgkGetScanLine @ 0x1C02CCB90 (DxgkGetScanLine.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C02CD270 (DxgkGetSharedPrimaryHandle.c)
 *     DxgkQueryClockCalibration @ 0x1C02CF4C0 (DxgkQueryClockCalibration.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1C02D09A0 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkSetVidPnSourceHwProtection @ 0x1C02D13D0 (DxgkSetVidPnSourceHwProtection.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C02D44BC (DxgkChangeVideoMemoryReservationInternal.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1C02D4C70 (DxgkFreeGpuVirtualAddress.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C02D6310 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkGetMultisampleMethodList @ 0x1C02FC880 (DxgkGetMultisampleMethodList.c)
 *     DxgkInvalidateActiveVidPn @ 0x1C02FCF70 (DxgkInvalidateActiveVidPn.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0326A90 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C032AFB8 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 *     DxgkGetPresentStats @ 0x1C033CA4C (DxgkGetPresentStats.c)
 *     DxgkSetStablePowerState @ 0x1C0342AC0 (DxgkSetStablePowerState.c)
 *     ?VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0379C70 (-VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

DXGADAPTERBYHANDLE *__fastcall DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
        DXGADAPTERBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGADAPTER **a4,
        bool a5)
{
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rbx
  struct _KTHREAD *v13; // rdx
  __int64 v14; // rbx
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  struct _KTHREAD *v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rbx
  int v25; // ecx
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  _BYTE v29[8]; // [rsp+60h] [rbp-38h] BYREF
  DXGPUSHLOCK *v30; // [rsp+68h] [rbp-30h]
  int v31; // [rsp+70h] [rbp-28h]

  *(_QWORD *)this = 0LL;
  if ( !a4 )
    return this;
  v30 = (DXGPUSHLOCK *)(a3 + 31);
  if ( a3 != (struct _KTHREAD **)-248LL && a3[32] == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v20,
          v19,
          v21,
          0,
          2,
          -1,
          (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
          1453LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  DXGPUSHLOCK::AcquireShared(v30);
  v9 = (a2 >> 6) & 0xFFFFFF;
  v10 = *((_DWORD *)a3 + 106) >> 8;
  v31 = 1;
  if ( (v10 & 1) != 0 )
  {
    v22 = a3[76];
    DXGPUSHLOCK::AcquireShared((struct _KTHREAD *)((char *)v22 + 248));
    if ( (unsigned int)v9 < *((_DWORD *)v22 + 74) )
    {
      v23 = *((_QWORD *)v22 + 35);
      v24 = 2 * v9;
      if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v23 + 8 * v24 + 8) & 0x60)
        && (*(_DWORD *)(v23 + 8 * v24 + 8) & 0x2000) == 0 )
      {
        v25 = *(_DWORD *)(v23 + 8 * v24 + 8) & 0x1F;
        if ( v25 )
        {
          if ( v25 == 1 )
          {
            v11 = *(_QWORD *)(v23 + 8 * v24);
            goto LABEL_33;
          }
          if ( a5 )
          {
            WdLogSingleEntry1(2LL, 267LL);
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
                McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                  v27,
                  v26,
                  v28,
                  0,
                  0,
                  -1,
                  (__int64)L"Handle type mismatch",
                  267LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
            }
          }
        }
      }
    }
    v11 = 0LL;
LABEL_33:
    _InterlockedDecrement((volatile signed __int32 *)v22 + 66);
    ExReleasePushLockSharedEx((char *)v22 + 248, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_7;
  }
  if ( (unsigned int)v9 < *((_DWORD *)a3 + 74) )
  {
    v13 = a3[35];
    v14 = 2 * v9;
    if ( ((a2 >> 25) & 0x60) == (*((_BYTE *)v13 + 8 * v14 + 8) & 0x60) && (*((_DWORD *)v13 + 2 * v14 + 2) & 0x2000) == 0 )
    {
      v15 = *((_DWORD *)v13 + 2 * v14 + 2) & 0x1F;
      if ( v15 )
      {
        if ( v15 == 1 )
        {
          v11 = *((_QWORD *)v13 + v14);
          goto LABEL_7;
        }
        if ( a5 )
        {
          WdLogSingleEntry1(2LL, 267LL);
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                v17,
                v16,
                v18,
                0,
                0,
                -1,
                (__int64)L"Handle type mismatch",
                267LL,
                0LL,
                0LL,
                0LL,
                0LL);
          }
        }
      }
    }
  }
  v11 = 0LL;
LABEL_7:
  *(_QWORD *)this = v11;
  if ( v11 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v11 + 24));
    *((_QWORD *)this + 1) = -1LL;
  }
  *a4 = *(struct DXGADAPTER **)this;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
  return this;
}
