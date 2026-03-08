/*
 * XREFs of VidSchiWaitForDrainFlipQueue @ 0x1C00B5A88
 * Callers:
 *     VidSchiDrainFlipQueue @ 0x1C00B5A60 (VidSchiDrainFlipQueue.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C0006E50 (VidSchiProfilePerformanceTick.c)
 *     VidSchiIsMmIoFlipPending @ 0x1C0017B4C (VidSchiIsMmIoFlipPending.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0034668 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0034C70 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x1C004A448 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 *     VidSchWaitForCompletionEvent @ 0x1C00ADD4C (VidSchWaitForCompletionEvent.c)
 */

char __fastcall VidSchiWaitForDrainFlipQueue(struct _VIDSCH_GLOBAL *a1)
{
  char result; // al
  __int64 v3; // r8
  _DWORD v4[42]; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v5; // [rsp+F0h] [rbp+8h] BYREF

  memset(v4, 0, 0xA0uLL);
  v4[4] = 3;
  v4[5] = 1;
  *((_QWORD *)a1 + 203) = MEMORY[0xFFFFF78000000320];
  KeResetEvent((PRKEVENT)a1 + 66);
  while ( 1 )
  {
    v5 = 0;
    result = VidSchiIsMmIoFlipPending((__int64)a1, &v5);
    if ( !result )
      break;
    if ( *((_BYTE *)a1 + 59) )
    {
      DXGADAPTER::IncrementVSyncWaiter(*((DXGADAPTER **)a1 + 2), v5);
      VidSchiSetInterruptTargetPresentId(a1, v5, 0, 0LL, 1, 0);
    }
    VidSchiProfilePerformanceTick(16LL, (__int64)a1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    VidSchWaitForCompletionEvent((__int64)a1, (__int64)v4, 0xFFFFFFFFLL);
    VidSchiProfilePerformanceTick(17LL, (__int64)a1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( *((_BYTE *)a1 + 59) )
      DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)a1 + 2), v5, v3);
  }
  return result;
}
