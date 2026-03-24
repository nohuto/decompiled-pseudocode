/*
 * XREFs of ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C0218DC8
 * Callers:
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C02189B8 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C0219834 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C000BC24 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z @ 0x1C02188F0 (-FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z.c)
 *     ?ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@HH@Z @ 0x1C0218C08 (-ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@HH@Z.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x1C0218CCC (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 *     ?ValidateDoubleClick@@YAHAEBUtagTAP_INFO@@KKH@Z @ 0x1C02191C4 (-ValidateDoubleClick@@YAHAEBUtagTAP_INFO@@KKH@Z.c)
 */

__int64 __fastcall PromotePointerInternal(
        __int16 a1,
        unsigned int a2,
        struct tagMOUSE_PROMOTION_ENTRY *a3,
        struct tagMOUSE_PROMOTION_ENTRY *a4)
{
  unsigned int v4; // r13d
  struct tagMOUSE_PROMOTION_CACHE *CacheById; // rax
  struct tagMOUSE_PROMOTION_ENTRY **v8; // rsi
  unsigned int v9; // edx
  int v10; // r12d
  BOOL v11; // r15d
  int v12; // edi
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // r13
  struct tagMOUSE_PROMOTION_QUEUE *v17; // r12
  unsigned int v18; // eax
  int v20; // [rsp+30h] [rbp-48h]
  int v21; // [rsp+34h] [rbp-44h]
  BOOL v22; // [rsp+38h] [rbp-40h]
  int v23; // [rsp+3Ch] [rbp-3Ch]
  unsigned int v26; // [rsp+90h] [rbp+18h] BYREF

  v26 = 0;
  v4 = a2;
  CacheById = FindCacheById(a1, &v26);
  v8 = (struct tagMOUSE_PROMOTION_ENTRY **)CacheById;
  if ( (dword_1C033ABD8 & 8) != 0
    && CacheById == (struct tagMOUSE_PROMOTION_CACHE *)word_1C033AAD8
    && (!a4 || a4 == *((struct tagMOUSE_PROMOTION_ENTRY **)CacheById + 2)) )
  {
    dword_1C033ABD8 &= ~8u;
  }
  v9 = v26;
  v10 = v4 & 2;
  v20 = v10;
  v11 = v10 != 0;
  v21 = v4 & 0x80000;
  v23 = v4 & 0x20000;
  v12 = (v4 >> 25) & 1;
  v22 = (v4 & 0x20000) != 0;
  if ( (v4 & 0x40000) != 0 )
    v13 = ValidateDoubleClick((const struct tagTAP_INFO *)&xmmword_1C033AB90, v26, *((_DWORD *)a3 + 4), (v4 & 2) != 0);
  else
    v13 = 0;
  if ( v13 )
    *((_QWORD *)a3 + 1) = *(_QWORD *)((char *)&xmmword_1C033AB90 + 12);
  v14 = v9 + 1;
  v15 = *((_QWORD *)a3 + 1);
  v26 = *((_DWORD *)a3 + 4);
  if ( (unsigned int)v14 < 5 )
  {
    v16 = (unsigned int)(5 - v14);
    v17 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)&unk_1C033AAE0 + 24 * v14);
    do
    {
      EmptyMousePromotionQueue(v17);
      v17 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v17 + 24);
      --v16;
    }
    while ( v16 );
    v4 = a2;
    v10 = v20;
  }
  if ( v21 )
  {
    ProcessDownOnly(v8, a3, v11, v12);
  }
  else
  {
    ProcessRangeInCache(v8, a3, a4, v22, v11, v12);
    if ( !a4 )
    {
      if ( v10 )
        v18 = dword_1C033ABD8 | 4;
      else
        v18 = dword_1C033ABD8 & 0xFFFFFFFB;
      dword_1C033ABD8 = v18 & 0xFFFFFFEF | (16 * v12) | 2;
    }
  }
  if ( v23 )
  {
    *(&xmmword_1C033AB90 + 4) = a1;
    dword_1C033ABA4 = v26;
    xmmword_1C033AB90 = gptiCurrent;
    *(_QWORD *)((char *)&xmmword_1C033AB90 + 12) = v15;
    dword_1C033ABA8 = v11;
  }
  else if ( v4 )
  {
    xmmword_1C033AB90 = 0LL;
    unk_1C033ABA0 = 0LL;
  }
  return 1LL;
}
