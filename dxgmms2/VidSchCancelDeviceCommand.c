/*
 * XREFs of VidSchCancelDeviceCommand @ 0x1C003E330
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C0015940 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 */

__int64 __fastcall VidSchCancelDeviceCommand(__int64 a1, __int64 a2, char a3, char a4)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a2 + 40) != 3 )
    return 3221225485LL;
  v6 = *(_QWORD **)(a2 + 48);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a4 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 1728LL), &LockHandle);
  v7 = v6 + 27;
  v8 = v6[27];
  if ( v8 )
  {
    if ( *(_QWORD **)(v8 + 8) != v7 || (v9 = (_QWORD *)v6[28], (_QWORD *)*v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    *v7 = 0LL;
    v6[28] = 0LL;
    if ( a3 )
      VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v6);
    else
      _InterlockedDecrement((volatile signed __int32 *)(v6[12] + 8LL));
  }
  if ( !a4 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
