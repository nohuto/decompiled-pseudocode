/*
 * XREFs of VidSchiDecrementDeviceReference @ 0x1C0012D90
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x1C0007A60 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiDecrementContextReference @ 0x1C0011CE0 (VidSchiDecrementContextReference.c)
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C0012994 (VidSchiSuspendResumeDevicesForPowerTransition.c)
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C0012A7C (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     ?VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z @ 0x1C0042604 (-VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z.c)
 *     VidSchTerminateDevice @ 0x1C00A8E60 (VidSchTerminateDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiDecrementDeviceReference(char *P, int a2)
{
  char **v4; // rdx
  PVOID *v5; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)P + 4) + 1728LL), &LockHandle);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)P + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v4 = (char **)*((_QWORD *)P + 13);
    if ( v4[1] != P + 104 || (v5 = (PVOID *)*((_QWORD *)P + 14), *v5 != P + 104) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = (char *)v5;
    if ( !a2 )
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    ExFreePoolWithTag(P, 0);
  }
  else if ( !a2 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
