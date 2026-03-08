/*
 * XREFs of ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1C01CACC4
 * Callers:
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C0162810 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C0163594 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0189CB0 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018B2A0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C019A6A0 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8400 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B3FD8 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C01B450C (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01C8C80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z @ 0x1C02195A0 (-FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z.c)
 *     ?PresentQualcommPanelRefreshWorkaround@@YAXPEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z @ 0x1C02DBBC8 (-PresentQualcommPanelRefreshWorkaround@@YAXPEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z.c)
 *     ?MarkDeviceAsError@DXGDEVICE@@QEAAXW4_VIDSCH_ERROR_CODE@@@Z @ 0x1C02E6FCC (-MarkDeviceAsError@DXGDEVICE@@QEAAXW4_VIDSCH_ERROR_CODE@@@Z.c)
 *     DxgkWaitForIdle @ 0x1C02EE260 (DxgkWaitForIdle.c)
 *     ?FlushDevicesForTermination@DXGPROCESSVM@@QEAAXXZ @ 0x1C033FED0 (-FlushDevicesForTermination@DXGPROCESSVM@@QEAAXXZ.c)
 *     ?ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z @ 0x1C036AC70 (-ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z.c)
 *     ?VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0379C70 (-VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusFlushDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0379F50 (-VmBusFlushDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusSendFlushDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGDEVICE@@W4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C0384450 (-VmBusSendFlushDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGDEVICE@@W4DXGDEVICE_FLUSHSCHEDULER.c)
 */

void __fastcall DXGDEVICE::FlushScheduler(_QWORD *a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  __int64 v16; // rbx
  const wchar_t *v17; // r9
  __int128 v18; // [rsp+50h] [rbp-18h] BYREF

  v8 = *(_QWORD *)(a1[2] + 16LL);
  if ( !*(_BYTE *)(v8 + 209) )
  {
    v18 = 0LL;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(a1 + 34));
    v10 = a2 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                if ( v15 != 1 )
                {
                  v16 = 5717LL;
                  WdLogSingleEntry1(1LL, 5717LL);
                  v17 = L"Invalid flush reason!";
                  goto LABEL_21;
                }
                LODWORD(v18) = 7;
              }
              else
              {
                LODWORD(v18) = 5;
              }
            }
            else
            {
              LODWORD(v18) = 3;
            }
          }
          else
          {
            LODWORD(v18) = 13;
          }
        }
        else
        {
          LODWORD(v18) = 9;
        }
      }
      else
      {
        LODWORD(v18) = 8;
      }
    }
    else
    {
      LODWORD(v18) = 1;
    }
    LOBYTE(v9) = a4;
    if ( (*(int (__fastcall **)(_QWORD, __int128 *, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1[2] + 736LL) + 8LL)
                                                                    + 136LL))(
           a1[100],
           &v18,
           a3,
           v9) >= 0 )
    {
LABEL_5:
      a1[35] = 0LL;
      ExReleasePushLockExclusiveEx(a1 + 34, 0LL);
      KeLeaveCriticalRegion();
      return;
    }
    v16 = 5722LL;
    WdLogSingleEntry1(1LL, 5722LL);
    v17 = L"NT_SUCCESS(FlushStatus)";
LABEL_21:
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)v17, v16, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_5;
  }
  DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushDevice(v8 + 4472, a1, a2);
}
