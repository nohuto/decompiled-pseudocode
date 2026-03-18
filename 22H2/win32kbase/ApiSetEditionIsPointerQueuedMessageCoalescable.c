/*
 * XREFs of ApiSetEditionIsPointerQueuedMessageCoalescable @ 0x1C0206A54
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C01BB208 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     EditionIsPointerQueuedMessageCoalescable @ 0x1C0232B2C (EditionIsPointerQueuedMessageCoalescable.c)
 */

__int64 __fastcall ApiSetEditionIsPointerQueuedMessageCoalescable(
        _OWORD *a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        int a6)
{
  unsigned int v6; // ebx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  _OWORD v17[7]; // [rsp+30h] [rbp-78h] BYREF

  v6 = 0;
  if ( qword_1C0296AB0 && (int)qword_1C0296AB0() >= 0 )
  {
    v11 = a1[1];
    v17[0] = *a1;
    v17[2] = a1[2];
    v12 = a1[4];
    v17[1] = v11;
    v13 = a1[3];
    v17[4] = v12;
    v14 = a1[6];
    v17[3] = v13;
    v15 = a1[5];
    v17[6] = v14;
    v17[5] = v15;
    return (unsigned int)EditionIsPointerQueuedMessageCoalescable((unsigned int)v17, a2, a3, a4, a5, a6);
  }
  return v6;
}
