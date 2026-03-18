/*
 * XREFs of ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C00085C0
 * Callers:
 *     ?DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z @ 0x1C0012540 (-DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z.c)
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z @ 0x1C01A9DF0 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01AB2B4 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C01DF4E4 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C01DF574 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C02E2E60 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 *     ?QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C02E34A0 (-QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORY.c)
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C02E64B8 (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 *     ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1C0343ABC (-DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ.c)
 *     ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C034BA20 (-ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 *     ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU_PARAV@@UEAAXXZ @ 0x1C036EFF0 (-DestroyVirtualGpu@DXGK_VIRTUAL_GPU_PARAV@@UEAAXXZ.c)
 *     ?ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z @ 0x1C036F720 (-ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z.c)
 *     ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ @ 0x1C03714B0 (-DestroyVirtualGpu@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ.c)
 *     ?DisconnectVM@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ @ 0x1C0371750 (-DisconnectVM@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ.c)
 *     ?ResetVirtualFunction@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z @ 0x1C0371A40 (-ResetVirtualFunction@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0043074 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall DXGPROCESS::ReleaseReference(DXGPROCESS *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d

  if ( *((__int64 *)this + 4) <= 0 )
  {
    WdLogSingleEntry1(1LL, 1142LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v3,
          v2,
          v4,
          0,
          2,
          -1,
          (__int64)L"m_ReferenceCount > 0",
          1142LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)this + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    if ( this )
      (**(void (__fastcall ***)(DXGPROCESS *, __int64))this)(this, 1LL);
  }
}
