/*
 * XREFs of VidSchiProcessPrimariesTerminationList @ 0x1C003B3A4
 * Callers:
 *     VidSchiDrainContextFromWorkerThread @ 0x1C003A850 (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiCleanupPacket_PriorityTable @ 0x1C010A430 (VidSchiCleanupPacket_PriorityTable.c)
 * Callees:
 *     VidSchiCheckConditionDeviceCommand @ 0x1C001602C (VidSchiCheckConditionDeviceCommand.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C002D9B0 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VidSchiProcessPrimariesTerminationList(__int64 a1)
{
  _QWORD **v1; // rdi
  __int64 v2; // rcx
  _QWORD *v3; // r9
  _QWORD *v4; // rbx
  _QWORD *v5; // r9
  VIDMM_GLOBAL ***v6; // r10
  __int64 v7; // rcx
  _QWORD *v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = (_QWORD **)(a1 + 1792);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1760), &LockHandle);
  v3 = *v1;
  if ( *v1 != v1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v2, (__int64)(v3 - 25)) )
      {
        v7 = *v5;
        if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v8 = (_QWORD *)v5[1], (_QWORD *)*v8 != v5) )
          __fastfail(3u);
        *v8 = v7;
        *(_QWORD *)(v7 + 8) = v8;
        VIDMM_GLOBAL::AddPendingTermination(*v6[1], (struct VIDMM_ALLOC *)v6);
      }
      v3 = v4;
    }
    while ( v4 != v1 );
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
