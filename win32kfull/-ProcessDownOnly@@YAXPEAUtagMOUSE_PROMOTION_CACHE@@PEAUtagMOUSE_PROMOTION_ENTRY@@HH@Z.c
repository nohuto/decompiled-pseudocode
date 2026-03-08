/*
 * XREFs of ?ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@HH@Z @ 0x1C01F9208
 * Callers:
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C01F93F8 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 * Callees:
 *     ?AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01F8B60 (-AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C01F8CC8 (-ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@.c)
 */

void __fastcall ProcessDownOnly(
        struct tagMOUSE_PROMOTION_ENTRY **a1,
        struct tagMOUSE_PROMOTION_ENTRY *a2,
        int a3,
        int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rbx

  ClearMousePromotionQueueUntil(a1 + 1, a2);
  v8 = Win32AllocPoolZInit(48LL, 1886221141LL);
  v10 = (struct tagMOUSE_PROMOTION_ENTRY *)v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = *(_OWORD *)a2;
    *(_OWORD *)(v8 + 16) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(v8 + 32) = *((_OWORD *)a2 + 2);
    *(_QWORD *)v8 = 0LL;
    if ( a3 )
      *(_DWORD *)(v8 + 44) &= ~1u;
    v11 = SGDGetUserSessionState(v9);
    v12 = v11 + 16056;
    AppendMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)(v11 + 16184), v10, v10);
    *(_WORD *)(v12 + 224) = *(_WORD *)a1;
    *(_DWORD *)(v12 + 228) = *((_DWORD *)a2 + 8);
    *(_QWORD *)(v12 + 232) = gptiCurrent;
    *(_DWORD *)(v12 + 240) = a3;
    *(_DWORD *)(v12 + 244) = a4;
  }
}
