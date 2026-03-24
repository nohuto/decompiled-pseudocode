/*
 * XREFs of ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0008C9C
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C00DF030 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C0100460 (DxgkGetPresentHistoryInternal.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C0117F20 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C01309C0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C0138B5C (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C0156B30 (DxgkGetPresentHistoryReadyEvent.c)
 *     DxgkCheckMonitorPowerState @ 0x1C01570C0 (DxgkCheckMonitorPowerState.c)
 *     DxgkCheckVidPnExclusiveOwnership @ 0x1C0157B60 (DxgkCheckVidPnExclusiveOwnership.c)
 *     DxgkGetPostCompositionCaps @ 0x1C015DDD0 (DxgkGetPostCompositionCaps.c)
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1C015E2D0 (DxgkGetMultiPlaneOverlayCaps.c)
 *     DxgkFlushHeapTransitions @ 0x1C015FFD0 (DxgkFlushHeapTransitions.c)
 *     DxgkFlushPresentHistory @ 0x1C016A550 (DxgkFlushPresentHistory.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C016AF88 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkGetScanLine @ 0x1C016F3E0 (DxgkGetScanLine.c)
 *     DxgkGetDisplayModeList @ 0x1C016FC30 (DxgkGetDisplayModeList.c)
 *     DxgkGetPresentStats @ 0x1C01707D0 (DxgkGetPresentStats.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C0173F00 (DxgkReserveGpuVirtualAddress.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1C0174630 (DxgkFreeGpuVirtualAddress.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C020C004 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0222538 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C0223100 (DxgkAdjustFullscreenGamma.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C0223E60 (DxgkGetSharedPrimaryHandle.c)
 *     DxgkQueryClockCalibration @ 0x1C0225A30 (DxgkQueryClockCalibration.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1C02268F0 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkSetVidPnSourceHwProtection @ 0x1C02272D0 (DxgkSetVidPnSourceHwProtection.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C02299AC (DxgkChangeVideoMemoryReservationInternal.c)
 *     ?VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02418A0 (-VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkGetMultisampleMethodList @ 0x1C025F120 (DxgkGetMultisampleMethodList.c)
 *     DxgkInvalidateActiveVidPn @ 0x1C025F730 (DxgkInvalidateActiveVidPn.c)
 *     DxgkSetStablePowerState @ 0x1C0287B40 (DxgkSetStablePowerState.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0299B08 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C029D388 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 */

DXGADAPTERBYHANDLE *__fastcall DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
        DXGADAPTERBYHANDLE *this,
        __int64 a2,
        struct _KTHREAD **a3,
        struct DXGADAPTER **a4,
        bool a5)
{
  unsigned int v7; // ebp
  __int64 v9; // rbx
  volatile signed __int64 *v10; // rbx
  struct _KTHREAD *v12; // rdx
  int v13; // ecx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  struct _KTHREAD *v18; // rdi
  __int64 v19; // rdx
  int v20; // ecx
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rax
  _BYTE v24[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v25; // [rsp+28h] [rbp-30h]
  int v26; // [rsp+30h] [rbp-28h]

  *(_QWORD *)this = 0LL;
  v7 = a2;
  if ( !a4 )
    return this;
  v25 = (DXGPUSHLOCK *)(a3 + 26);
  if ( a3 != (struct _KTHREAD **)-208LL && a3[27] == KeGetCurrentThread() )
  {
    v17 = WdLogNewEntry5_WdAssertion(a3 + 26, a2);
    *(_QWORD *)(v17 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v17);
  }
  DXGPUSHLOCK::AcquireShared(v25);
  v26 = 1;
  v9 = (v7 >> 6) & 0xFFFFFF;
  if ( (*((_BYTE *)a3 + 347) & 0x20) != 0 )
  {
    v18 = a3[62];
    DXGPUSHLOCK::AcquireShared((struct _KTHREAD *)((char *)v18 + 208));
    if ( (unsigned int)v9 < *((_DWORD *)v18 + 64) )
    {
      v19 = *((_QWORD *)v18 + 30);
      v20 = *(_DWORD *)(v19 + 16 * v9 + 8);
      if ( ((v7 >> 25) & 0x60) == (*(_BYTE *)(v19 + 16 * v9 + 8) & 0x60) && (v20 & 0x2000) == 0 && (v20 & 0x1F) != 0 )
      {
        v21 = 2 * v9;
        v22 = v20 & 0x1F;
        if ( (_BYTE)v22 == 1 )
        {
          v10 = *(volatile signed __int64 **)(v19 + 8 * v21);
          goto LABEL_27;
        }
        if ( a5 )
        {
          v23 = WdLogNewEntry5_WdError(v22, v19);
          *(_QWORD *)(v23 + 24) = 316LL;
          WdLogEvent5_WdError(v23);
        }
      }
    }
    v10 = 0LL;
LABEL_27:
    ExReleasePushLockSharedEx((char *)v18 + 208, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_8;
  }
  if ( (unsigned int)v9 < *((_DWORD *)a3 + 64) )
  {
    v12 = a3[30];
    v13 = *((_DWORD *)v12 + 4 * v9 + 2);
    if ( ((v7 >> 25) & 0x60) == (*((_BYTE *)v12 + 16 * v9 + 8) & 0x60) && (v13 & 0x2000) == 0 && (v13 & 0x1F) != 0 )
    {
      v14 = 2 * v9;
      v15 = v13 & 0x1F;
      if ( (_BYTE)v15 == 1 )
      {
        v10 = (volatile signed __int64 *)*((_QWORD *)v12 + v14);
        goto LABEL_8;
      }
      if ( a5 )
      {
        v16 = WdLogNewEntry5_WdError(v15, v12);
        *(_QWORD *)(v16 + 24) = 316LL;
        WdLogEvent5_WdError(v16);
      }
    }
  }
  v10 = 0LL;
LABEL_8:
  *(_QWORD *)this = v10;
  if ( v10 )
  {
    _InterlockedIncrement64(v10 + 3);
    *((_QWORD *)this + 1) = -1LL;
    v10 = *(volatile signed __int64 **)this;
  }
  *a4 = (struct DXGADAPTER *)v10;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
  return this;
}
