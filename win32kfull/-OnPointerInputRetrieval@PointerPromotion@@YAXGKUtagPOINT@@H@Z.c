void __fastcall PointerPromotion::OnPointerInputRetrieval(
        PointerPromotion *this,
        unsigned int a2,
        __int64 a3,
        struct tagPOINT a4)
{
  LONG x; // ebp
  unsigned __int16 v7; // di
  __int64 v8; // r14
  struct tagMOUSE_PROMOTION_CACHE *CacheById; // rax
  struct tagMOUSE_PROMOTION_QUEUE *v10; // rsi
  struct tagMOUSE_PROMOTION_ENTRY *MousePromotionEntry; // rax
  struct tagMOUSE_PROMOTION_ENTRY *v12; // rdi
  __int64 v13; // rcx
  unsigned int v14; // ebx
  unsigned int v15[10]; // [rsp+20h] [rbp-28h] BYREF

  v15[0] = 0;
  x = a4.x;
  v7 = (unsigned __int16)this;
  v8 = SGDGetUserSessionState(this) + 16056;
  CacheById = FindCacheById(v7, v15);
  if ( CacheById )
  {
    v10 = (struct tagMOUSE_PROMOTION_CACHE *)((char *)CacheById + 8);
    MousePromotionEntry = FindMousePromotionEntry((struct tagMOUSE_PROMOTION_ENTRY **)CacheById + 1, a2);
    v12 = MousePromotionEntry;
    if ( MousePromotionEntry )
    {
      *((_QWORD *)MousePromotionEntry + 1) = a3;
      if ( !x && !(unsigned int)HasPendingPromotion() )
      {
        v13 = v15[0] + 1;
        if ( (unsigned int)v13 < 5 )
        {
          v14 = v15[0] + 1;
          do
          {
            EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)(v8 + 8 * ((unsigned int)v13 + 2LL + 2 * v13)));
            v13 = v14 + 1;
            v14 = v13;
          }
          while ( (unsigned int)v13 < 5 );
        }
        if ( (*((_DWORD *)v12 + 5) & 0x40004) == 0 )
          ClearMousePromotionQueueUntil(v10, v12);
      }
    }
  }
}
