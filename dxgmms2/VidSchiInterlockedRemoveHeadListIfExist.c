/*
 * XREFs of VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0003540
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x1C0007A60 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiDecrementContextReference @ 0x1C0011CE0 (VidSchiDecrementContextReference.c)
 *     ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0018684 (-VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@.c)
 *     ?VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z @ 0x1C00427B0 (-VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C00A46E0 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchSubmitCommand @ 0x1C00A4B80 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C00A5470 (VidSchiAllocateQueuePacket.c)
 *     VidSchiAllocateDmaPacket @ 0x1C00ADBDC (VidSchiAllocateDmaPacket.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00C4C32 (VidSchiAllocateHwQueuePacket.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VidSchiInterlockedRemoveHeadListIfExist(KSPIN_LOCK *a1, _QWORD **a2, _DWORD *a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0LL;
  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  v6 = *a2;
  if ( *a2 != a2 )
  {
    v5 = *a2;
    if ( (_QWORD **)v6[1] != a2 || (v7 = (_QWORD *)*v6, (_QWORD *)v7[1] != v5) )
      __fastfail(3u);
    *a2 = v7;
    v7[1] = a2;
    if ( a3 )
      --*a3;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v5;
}
