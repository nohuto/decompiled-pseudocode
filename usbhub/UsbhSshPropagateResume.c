/*
 * XREFs of UsbhSshPropagateResume @ 0x1C0021BE4
 * Callers:
 *     UsbhBusIf_ResumeChildHub @ 0x1C0004460 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhSshResumeDownstream @ 0x1C000E1B0 (UsbhSshResumeDownstream.c)
 * Callees:
 *     UsbhEtwLogHubIrpEvent @ 0x1C00098E0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0009CFC (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhSendSynchronousUsbIoctlRequest @ 0x1C0021D3C (UsbhSendSynchronousUsbIoctlRequest.c)
 */

__int64 __fastcall UsbhSshPropagateResume(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3)
{
  unsigned int v6; // esi
  _DWORD *v7; // r14
  int v8; // ebx
  KIRQL v9; // dl
  int v10; // ebx

  v6 = 0;
  v7 = PdoExt((__int64)a3);
  Log(a1, 0x10000, 1400066130, a1, (__int64)a3);
  if ( (v7[355] & 4) != 0 )
  {
    v6 = UsbhSendSynchronousUsbIoctlRequest(a1, a3, 2232227LL);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_PROPAGATE);
    *(_BYTE *)(a2 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    *(_DWORD *)(a2 + 136) = 1;
    *(_DWORD *)(a2 + 88) = 2018460752;
    *(_DWORD *)(a2 + 92) = 26;
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))a2;
    *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
    v8 = PdoExt((__int64)a3)[281];
    *(_DWORD *)(a2 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    v9 = *(_BYTE *)(a2 + 132);
    *(_DWORD *)(a2 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v9);
    v10 = v8 - 1;
    if ( !v10 || (unsigned int)(v10 - 1) <= 1 )
      UsbhSet_Pdo_Dx(a3, (POWER_STATE)1);
  }
  return v6;
}
