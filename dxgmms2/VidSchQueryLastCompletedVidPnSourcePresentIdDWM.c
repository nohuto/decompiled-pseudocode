/*
 * XREFs of VidSchQueryLastCompletedVidPnSourcePresentIdDWM @ 0x1C0040600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x1C003D9E0 (-VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU.c)
 */

__int64 __fastcall VidSchQueryLastCompletedVidPnSourcePresentIdDWM(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 result; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp+7h] BYREF
  __int128 v12; // [rsp+70h] [rbp+1Fh] BYREF
  __int128 v13; // [rsp+80h] [rbp+2Fh]
  __int128 v14; // [rsp+90h] [rbp+3Fh]
  __int64 v15; // [rsp+A0h] [rbp+4Fh]

  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"NULL pointer in pVidSchContext or other required pointer, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( a2 >= *((_DWORD *)a1 + 10) )
  {
    WdLogSingleEntry2(3LL, a2, -1073741811LL);
    return 3221225485LL;
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  v15 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 216, &LockHandle);
  VidSchQueryLastCompletedPresentIdDWMInternal(a1, 0LL, a2, a3, (struct _D3DKMT_PRESENT_STATS_DWM2 *)&v12);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  result = 0LL;
  v9 = v13;
  *(_OWORD *)a4 = v12;
  v10 = v14;
  *(_OWORD *)(a4 + 16) = v9;
  *(_QWORD *)&v9 = v15;
  *(_OWORD *)(a4 + 32) = v10;
  *(_QWORD *)(a4 + 48) = v9;
  return result;
}
