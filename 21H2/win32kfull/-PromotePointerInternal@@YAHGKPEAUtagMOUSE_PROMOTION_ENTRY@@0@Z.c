/*
 * XREFs of ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C0213BC0
 * Callers:
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C02137B0 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C0214458 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00F0F50 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z @ 0x1C02136F8 (-FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z.c)
 *     ?ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@HH@Z @ 0x1C0213A00 (-ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@HH@Z.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x1C0213AC4 (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 *     ?ValidateDoubleClick@@YAHAEBUtagTAP_INFO@@KKH@Z @ 0x1C0213EDC (-ValidateDoubleClick@@YAHAEBUtagTAP_INFO@@KKH@Z.c)
 */

__int64 __fastcall PromotePointerInternal(
        __int16 a1,
        unsigned int a2,
        struct tagMOUSE_PROMOTION_ENTRY *a3,
        struct tagMOUSE_PROMOTION_ENTRY *a4)
{
  unsigned int v4; // r12d
  struct tagMOUSE_PROMOTION_CACHE *CacheById; // rax
  struct tagMOUSE_PROMOTION_ENTRY **v8; // rsi
  unsigned int v9; // edx
  int v10; // r13d
  BOOL v11; // r15d
  int v12; // edi
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // r12
  struct tagMOUSE_PROMOTION_QUEUE *v16; // r13
  unsigned int v17; // eax
  int v19; // [rsp+30h] [rbp-48h]
  int v20; // [rsp+34h] [rbp-44h]
  BOOL v21; // [rsp+38h] [rbp-40h]
  int v22; // [rsp+3Ch] [rbp-3Ch]
  unsigned int v25; // [rsp+90h] [rbp+18h] BYREF

  v25 = 0;
  v4 = a2;
  CacheById = FindCacheById(a1, &v25);
  v8 = (struct tagMOUSE_PROMOTION_ENTRY **)CacheById;
  if ( (dword_1C0335D98 & 8) != 0
    && CacheById == (struct tagMOUSE_PROMOTION_CACHE *)word_1C0335C98
    && (!a4 || a4 == *((struct tagMOUSE_PROMOTION_ENTRY **)CacheById + 2)) )
  {
    dword_1C0335D98 &= ~8u;
  }
  v9 = v25;
  v10 = v4 & 2;
  v19 = v10;
  v11 = v10 != 0;
  v20 = v4 & 0x80000;
  v22 = v4 & 0x20000;
  v12 = (v4 >> 25) & 1;
  v21 = (v4 & 0x20000) != 0;
  if ( (v4 & 0x40000) != 0
    && (unsigned int)ValidateDoubleClick(
                       (const struct tagTAP_INFO *)&xmmword_1C0335D50,
                       v25,
                       *((_DWORD *)a3 + 4),
                       (v4 & 2) != 0) )
  {
    *((_QWORD *)a3 + 1) = *(_QWORD *)((char *)&xmmword_1C0335D50 + 12);
  }
  v13 = v9 + 1;
  v14 = *((_QWORD *)a3 + 1);
  v25 = *((_DWORD *)a3 + 4);
  if ( (unsigned int)v13 < 5 )
  {
    v15 = (unsigned int)(5 - v13);
    v16 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)&unk_1C0335CA0 + 24 * v13);
    do
    {
      EmptyMousePromotionQueue(v16);
      v16 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v16 + 24);
      --v15;
    }
    while ( v15 );
    v4 = a2;
    v10 = v19;
  }
  if ( v20 )
  {
    ProcessDownOnly(v8, a3, v11, v12);
  }
  else
  {
    ProcessRangeInCache(v8, a3, a4, v21, v11, v12);
    if ( !a4 )
    {
      if ( v10 )
        v17 = dword_1C0335D98 | 4;
      else
        v17 = dword_1C0335D98 & 0xFFFFFFFB;
      dword_1C0335D98 = v17 & 0xFFFFFFEF | (16 * v12) | 2;
    }
  }
  if ( v22 )
  {
    *(&xmmword_1C0335D50 + 4) = a1;
    dword_1C0335D64 = v25;
    xmmword_1C0335D50 = gptiCurrent;
    *(_QWORD *)((char *)&xmmword_1C0335D50 + 12) = v14;
    dword_1C0335D68 = v11;
  }
  else if ( v4 )
  {
    xmmword_1C0335D50 = 0LL;
    unk_1C0335D60 = 0LL;
  }
  return 1LL;
}
