/*
 * XREFs of ?OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z @ 0x1C02184F0
 * Callers:
 *     PointerPromotionOnPointerInputRetrieval @ 0x1C0219680 (PointerPromotionOnPointerInputRetrieval.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C000BC24 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C0218080 (-ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@.c)
 *     ?FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z @ 0x1C0218330 (-FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z.c)
 *     ?FindMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagMOUSE_PROMOTION_QUEUE@@K@Z @ 0x1C0218364 (-FindMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagMOUSE_PROMOTION_QUEUE@@K@Z.c)
 */

void __fastcall PointerPromotion::OnPointerInputRetrieval(
        PointerPromotion *this,
        unsigned int a2,
        __int64 a3,
        struct tagPOINT a4)
{
  struct tagMOUSE_PROMOTION_CACHE *CacheById; // rax
  struct tagMOUSE_PROMOTION_ENTRY **v6; // rbp
  struct tagMOUSE_PROMOTION_ENTRY *MousePromotionEntry; // rax
  __int64 v8; // r10
  int v9; // r11d
  struct tagMOUSE_PROMOTION_ENTRY *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rsi
  struct tagMOUSE_PROMOTION_QUEUE *v13; // rdi
  unsigned int v14[6]; // [rsp+20h] [rbp-18h] BYREF

  v14[0] = 0;
  CacheById = FindCacheById((__int16)this, v14);
  if ( CacheById )
  {
    v6 = (struct tagMOUSE_PROMOTION_ENTRY **)((char *)CacheById + 8);
    MousePromotionEntry = FindMousePromotionEntry((struct tagMOUSE_PROMOTION_ENTRY **)CacheById + 1, a2);
    v10 = MousePromotionEntry;
    if ( MousePromotionEntry )
    {
      *((_QWORD *)MousePromotionEntry + 1) = v8;
      if ( !v9 && !word_1C0339BB0 )
      {
        v11 = v14[0] + 1;
        if ( (unsigned int)v11 < 5 )
        {
          v12 = (unsigned int)(5 - v11);
          v13 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)&unk_1C0339AE0 + 24 * v11);
          do
          {
            EmptyMousePromotionQueue(v13);
            v13 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v13 + 24);
            --v12;
          }
          while ( v12 );
        }
        if ( (*((_DWORD *)v10 + 5) & 0x40004) == 0 )
          ClearMousePromotionQueueUntil(v6, v10);
      }
    }
  }
}
