/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreShared @ 0x1C007F220
 * Callers:
 *     DxgkEngVisRgnUniq @ 0x1C0004CE0 (DxgkEngVisRgnUniq.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C00109B0 (DrvNotifyModeChangeStartStop.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C001EEF0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     DrvEnumDisplaySettings @ 0x1C001F9E0 (DrvEnumDisplaySettings.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0038BD8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0038E80 (GreLockVisRgnSharedOrExclusive.c)
 *     GreLockVisRgnShared @ 0x1C0039220 (GreLockVisRgnShared.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C003CCC0 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreSfmGetNotificationTokens @ 0x1C0047660 (GreSfmGetNotificationTokens.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C0080E78 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00A6E60 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreSfmOpenTokenEvent @ 0x1C00A85F0 (GreSfmOpenTokenEvent.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00C9DD0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     DxEngLockShareSem @ 0x1C014A7D0 (DxEngLockShareSem.c)
 *     EngAcquireSemaphoreShared @ 0x1C014AC60 (EngAcquireSemaphoreShared.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C014CA60 (McTemplateK0pz_EtwWriteTransfer.c)
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
