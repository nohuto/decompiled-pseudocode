/*
 * XREFs of ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x1C01F92EC
 * Callers:
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C01F93F8 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 * Callees:
 *     ?AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01F8B60 (-AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C01F8CC8 (-ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@.c)
 *     ?ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01F8E5C (-ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?HasPendingPromotion@@YAHXZ @ 0x1C01F9064 (-HasPendingPromotion@@YAHXZ.c)
 *     ?ResetPendingPromotion@@YAXXZ @ 0x1C01F9718 (-ResetPendingPromotion@@YAXXZ.c)
 */

void __fastcall ProcessRangeInCache(
        struct tagMOUSE_PROMOTION_ENTRY **a1,
        struct tagMOUSE_PROMOTION_ENTRY *a2,
        struct tagMOUSE_PROMOTION_ENTRY *a3,
        int a4,
        int a5,
        int a6)
{
  struct tagMOUSE_PROMOTION_ENTRY **v6; // rbx
  struct tagMOUSE_PROMOTION_ENTRY *v10; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *v11; // rdi
  struct tagMOUSE_PROMOTION_ENTRY *v12; // rbx
  struct tagMOUSE_PROMOTION_ENTRY *i; // rdx
  __int64 v14; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *v15; // rcx
  __int64 v16; // rax
  struct tagMOUSE_PROMOTION_ENTRY *v17[2]; // [rsp+20h] [rbp-18h] BYREF

  v6 = a1 + 1;
  ClearMousePromotionQueueUntil(a1 + 1, a2);
  *(_OWORD *)v17 = 0LL;
  ExtractRangeFromQueue(v6, (struct tagMOUSE_PROMOTION_QUEUE *)v17, a2, a3);
  v11 = v17[1];
  v12 = v17[0];
  if ( a4 )
  {
    *((_QWORD *)v17[1] + 1) = *((_QWORD *)v17[0] + 1);
    while ( 1 )
    {
      v10 = *(struct tagMOUSE_PROMOTION_ENTRY **)v12;
      if ( *(struct tagMOUSE_PROMOTION_ENTRY **)v12 == v11 )
        break;
      *(_QWORD *)v12 = *(_QWORD *)v10;
      Win32FreePool(v10);
    }
  }
  if ( a5 || a6 )
  {
    for ( i = v12; i; i = *(struct tagMOUSE_PROMOTION_ENTRY **)i )
    {
      if ( a5 )
        *((_DWORD *)i + 11) &= ~1u;
      if ( a6 )
        *((_DWORD *)i + 11) |= 0x40u;
    }
  }
  if ( HasPendingPromotion((__int64)v10) )
  {
    v15 = v12;
    v12 = *(struct tagMOUSE_PROMOTION_ENTRY **)v12;
    Win32FreePool(v15);
    ResetPendingPromotion();
  }
  if ( v12 )
  {
    v16 = SGDGetUserSessionState(v14);
    AppendMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)(v16 + 16184), v12, v11);
  }
}
