/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0047AF0
 * Callers:
 *     DxgkEngVisRgnUniq @ 0x1C000D310 (DxgkEngVisRgnUniq.c)
 *     GreSfmOpenTokenEvent @ 0x1C0019080 (GreSfmOpenTokenEvent.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C001D468 (DrvNotifyModeChangeStartStop.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0021994 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1C003EC00 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C0044400 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C004B700 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreSfmGetNotificationTokens @ 0x1C00D8060 (GreSfmGetNotificationTokens.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1C0193370 (DrvDisplayConfigGetScaleFactorOverrides.c)
 *     DxEngLockShareSem @ 0x1C0196180 (DxEngLockShareSem.c)
 *     EngAcquireSemaphoreShared @ 0x1C0196820 (EngAcquireSemaphoreShared.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0197440 (GreLockVisRgnSharedOrExclusive.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0198A10 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceGreLockAcquireSemaphoreShared(__int64 a1, int a2)
{
  __int64 result; // rax
  int v5; // r8d
  __int64 v6; // rcx

  result = SGDGetSessionState(a1);
  v6 = *(_QWORD *)(result + 24);
  if ( *(_DWORD *)(v6 + 180) )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pz_EtwWriteTransfer(v6, (unsigned int)&LockAcquireShared, v5, a2, a1);
  }
  return result;
}
