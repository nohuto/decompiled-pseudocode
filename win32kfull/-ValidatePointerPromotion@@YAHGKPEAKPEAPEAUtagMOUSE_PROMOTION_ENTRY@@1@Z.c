__int64 __fastcall ValidatePointerPromotion(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        struct tagMOUSE_PROMOTION_ENTRY **a4,
        struct tagMOUSE_PROMOTION_ENTRY **a5)
{
  unsigned int v5; // esi
  __int64 v9; // rcx
  struct tagMOUSE_PROMOTION_CACHE *CacheById; // rbp
  __int64 v11; // rcx
  __int64 **v12; // rcx
  __int64 v13; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *v14; // rdi
  struct tagMOUSE_PROMOTION_ENTRY *v15; // rbx
  struct tagMOUSE_PROMOTION_ENTRY *MousePromotionEntry; // rax
  int v17; // r8d
  struct tagMOUSE_PROMOTION_ENTRY **v18; // rax
  int v20; // eax
  bool v21; // zf
  struct tagMOUSE_PROMOTION_ENTRY *v22; // [rsp+20h] [rbp-38h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v23; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v24; // [rsp+70h] [rbp+18h] BYREF

  v5 = *a3;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0;
  CacheById = FindCacheById(a1, &v24);
  if ( !CacheById
    || CacheById == (struct tagMOUSE_PROMOTION_CACHE *)(SGDGetUserSessionState(v9) + 16064)
    && (*(_DWORD *)(SGDGetUserSessionState(v11) + 16320) & 2) != 0 )
  {
    return 0LL;
  }
  v12 = (__int64 **)((char *)CacheById + 8);
  if ( v5 )
  {
    if ( (unsigned int)FindMousePromotionInContactRange(v12, a2, &v22, &v23) )
    {
      v14 = v22;
      v15 = v23;
    }
    else
    {
      v14 = 0LL;
      v15 = 0LL;
    }
  }
  else
  {
    MousePromotionEntry = FindMousePromotionEntry((struct tagMOUSE_PROMOTION_ENTRY **)v12, a2);
    v14 = MousePromotionEntry;
    if ( MousePromotionEntry && (*((_DWORD *)MousePromotionEntry + 5) & 0x40004) != 0 )
      v14 = 0LL;
    v15 = v14;
  }
  if ( !v14 )
    return 0LL;
  if ( v5 == 0x10000000 )
  {
    v5 = DetectPromotionType(v14, v15);
    if ( v5 == v17 )
    {
      if ( CacheById == (struct tagMOUSE_PROMOTION_CACHE *)(SGDGetUserSessionState(v13) + 16064) )
      {
        *a3 = 0x10000000;
LABEL_17:
        v18 = a5;
        *a4 = v14;
        *v18 = v15;
        return 1LL;
      }
      return 0LL;
    }
  }
  v20 = v5 & 0x20000;
  if ( !v15 )
  {
    if ( v20 )
      return 0LL;
    v21 = CacheById == (struct tagMOUSE_PROMOTION_CACHE *)(SGDGetUserSessionState(v13) + 16064);
    goto LABEL_23;
  }
  if ( v20 )
  {
    v21 = *((_DWORD *)v15 + 9) == a2;
LABEL_23:
    if ( !v21 )
      return 0LL;
  }
  if ( !v15 || (v5 & 0x1000000) != 0 || (*((_DWORD *)v15 + 5) & 0x8000) == 0 )
  {
    *a3 = v5;
    goto LABEL_17;
  }
  return 0LL;
}
