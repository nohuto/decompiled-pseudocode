/*
 * XREFs of VidSchiFlushPendingHWSubmittedFlips @ 0x1C0017DD8
 * Callers:
 *     VidSchiSuspendFlipQueues @ 0x1C00B4208 (VidSchiSuspendFlipQueues.c)
 * Callees:
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0034668 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0034C70 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x1C004A448 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 *     VidSchiWaitFlushCompletion @ 0x1C00ADCEC (VidSchiWaitFlushCompletion.c)
 */

__int64 __fastcall VidSchiFlushPendingHWSubmittedFlips(struct _VIDSCH_GLOBAL *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  bool v7; // zf
  __int64 result; // rax
  _QWORD v9[20]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v10[20]; // [rsp+D8h] [rbp-30h] BYREF

  v3 = a2 + 3088;
  if ( *(_DWORD *)(a2 + 3088) )
  {
    memset(v9, 0, sizeof(v9));
    LODWORD(v9[4]) |= 0x10u;
    v7 = *((_BYTE *)a1 + 59) == 0;
    LODWORD(v9[2]) = 3;
    v9[5] = v3;
    if ( !v7 )
    {
      DXGADAPTER::IncrementVSyncWaiter(*((DXGADAPTER **)a1 + 2), a3);
      VidSchiSetInterruptTargetPresentId(a1, a3, 0, 0LL, 1, 0);
    }
    VidSchiWaitFlushCompletion(a1, v9, 23LL);
    if ( *((_BYTE *)a1 + 59) )
      DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)a1 + 2), a3);
  }
  result = *(unsigned int *)(a2 + 3084);
  if ( (_DWORD)result )
  {
    memset(v10, 0, sizeof(v10));
    LODWORD(v10[4]) |= 0x10u;
    LODWORD(v10[2]) = 1;
    v10[5] = a2 + 3084;
    return VidSchiWaitFlushCompletion(a1, v10, 23LL);
  }
  return result;
}
