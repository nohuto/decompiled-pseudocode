/*
 * XREFs of ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0198B0C
 * Callers:
 *     ?DXGADAPTER_AcquireCoreSync@@YAXPEAVDXGADAPTER@@W4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00172C0 (-DXGADAPTER_AcquireCoreSync@@YAXPEAVDXGADAPTER@@W4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C0197F10 (DxgkAcquireAdapterCoreSync.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C01988F0 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C02DDF20 (-DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C019755C (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0197D5C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01CB6E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01EF2C8 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C01F39F0 (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 */

void __fastcall DXGADAPTER::AcquireCoreSync(__int64 a1, int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // r8
  ADAPTER_RENDER *v6; // rcx
  __int64 v7; // rcx

  v3 = a2;
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 184)
    || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 168)) )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, a1, 0LL, 0LL);
  }
  if ( !KeReadStateEvent((PRKEVENT)(a1 + 48)) )
  {
    if ( (_DWORD)v3 == 4 )
      return;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, &EventBlockThread, v5, 72);
    KeWaitForSingleObject((PVOID)(a1 + 48), Executive, 0, 0, 0LL);
  }
  switch ( (_DWORD)v3 )
  {
    case 1:
      DXGADAPTER::AcquireCoreResourceShared((DXGADAPTER *)a1, 0LL);
      break;
    case 2:
      DXGADAPTER::AcquireCoreResourceExclusive(a1, 2u, 0);
      v7 = *(_QWORD *)(a1 + 2928);
      if ( v7 )
        ADAPTER_RENDER::FlushScheduler(v7, 6u, 0xFFFFFFFF, 0);
      break;
    case 3:
      DXGADAPTER::AcquireCoreResourceExclusive(a1, 2u, 0);
      break;
    case 4:
      DXGADAPTER::AcquireLocksForPowerStateD3transition((DXGADAPTER *)a1);
      break;
    case 6:
      DXGADAPTER::AcquireCoreResourceExclusive(a1, 2u, 0);
      *(_BYTE *)(a1 + 205) = 1;
      break;
    default:
      WdLogSingleEntry1(2LL, v3);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid synchronization level 0x%I64x",
        v3,
        0LL,
        0LL,
        0LL,
        0LL);
      break;
  }
  v6 = *(ADAPTER_RENDER **)(a1 + 2928);
  if ( v6 )
  {
    if ( (((_DWORD)v3 - 4) & 0xFFFFFFFD) == 0 )
      ADAPTER_RENDER::EnableClockCalibration(v6, 0);
  }
}
