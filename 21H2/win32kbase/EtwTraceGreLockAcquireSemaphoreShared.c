/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0089800
 * Callers:
 *     DxgkEngVisRgnUniq @ 0x1C00092F0 (DxgkEngVisRgnUniq.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001CA20 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     NtGdiGetDeviceCaps @ 0x1C002E300 (NtGdiGetDeviceCaps.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E8B8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C00302D0 (GreLockVisRgnSharedOrExclusive.c)
 *     GreLockVisRgnShared @ 0x1C0030750 (GreLockVisRgnShared.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00308F0 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1C0064394 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00700D0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C0078988 (DrvNotifyModeChangeStartStop.c)
 *     GreSfmOpenTokenEvent @ 0x1C009B710 (GreSfmOpenTokenEvent.c)
 *     GreSfmGetNotificationTokens @ 0x1C009B840 (GreSfmGetNotificationTokens.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00DAA60 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1C0173850 (DrvDisplayConfigGetScaleFactorOverrides.c)
 *     DxEngLockShareSem @ 0x1C0176B20 (DxEngLockShareSem.c)
 *     EngAcquireSemaphoreShared @ 0x1C01770B0 (EngAcquireSemaphoreShared.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0178D70 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceGreLockAcquireSemaphoreShared(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  if ( gbLockEtw )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pz_EtwWriteTransfer(a1, (unsigned int)&LockAcquireShared, a3, a2, a1);
  }
  return result;
}
