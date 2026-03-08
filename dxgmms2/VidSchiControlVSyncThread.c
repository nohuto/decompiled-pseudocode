/*
 * XREFs of VidSchiControlVSyncThread @ 0x1C000E940
 * Callers:
 *     <none>
 * Callees:
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1C000EA94 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 *     ?VidSchiControlIndependentVidPnVSyncThread@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0035840 (-VidSchiControlIndependentVidPnVSyncThread@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiVSyncDisabledOnAllPlanes@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@I@Z @ 0x1C004B204 (-VidSchiVSyncDisabledOnAllPlanes@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@I@Z.c)
 *     VidSchiControlVSync @ 0x1C00A5D30 (VidSchiControlVSync.c)
 */

void __fastcall VidSchiControlVSyncThread(struct _VIDSCH_GLOBAL *a1)
{
  struct _ERESOURCE *v2; // rbp
  char v3; // cl
  signed __int32 v4; // eax
  BOOL v5; // esi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_BYTE *)a1 + 2212) )
  {
    VidSchiControlIndependentVidPnVSyncThread(a1);
  }
  else
  {
    v2 = (struct _ERESOURCE *)((char *)a1 + 1088);
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1088), 1u);
    v3 = *((_BYTE *)a1 + 1808);
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 568, 0, 0);
    if ( v3
      && !v4
      && !*((_DWORD *)a1 + 474)
      && !DXGADAPTER::NumberOfVSyncWaiter(*((DXGADAPTER **)a1 + 2), 0)
      && !*((_DWORD *)a1 + 185)
      && !*((_DWORD *)a1 + 203)
      && !*((_DWORD *)a1 + 475) )
    {
      memset(&LockHandle, 0, sizeof(LockHandle));
      v5 = 0;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 216, &LockHandle);
      if ( *((_BYTE *)a1 + 59) )
      {
        v5 = VidSchiVSyncDisabledOnAllPlanes(a1, *((struct _VIDSCH_PRESENT_INFO **)a1 + 400), 0xFFFFFFFF);
      }
      else if ( *((_DWORD *)a1 + 584) >= *((_DWORD *)a1 + 601) )
      {
        *((_DWORD *)a1 + 584) = -1;
        v5 = 1;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( v5 )
      {
        VidSchiControlVSync(a1, 0LL, 3LL, 4294967293LL);
        *((_BYTE *)a1 + 2213) = 1;
      }
    }
    ExReleaseResourceLite(v2);
    _InterlockedExchange((volatile __int32 *)a1 + 566, 0);
  }
}
