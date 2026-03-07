void __fastcall ResetMousePromotionInfo(__int64 a1)
{
  __int16 v1; // si
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // xmm1_8

  v1 = a1;
  v2 = SGDGetUserSessionState(a1);
  v3 = v2 + 16056;
  if ( *(_WORD *)(v2 + 16056) )
  {
    v4 = v2 + 16160;
    if ( (unsigned int)CacheIncludesPendingPromotion((struct tagMOUSE_PROMOTION_CACHE *)(v2 + 16160)) )
      ForceCompletePendingPromotion(v5);
    EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)(v3 + 112));
    v6 = 4LL;
    do
    {
      v7 = *(_QWORD *)(v4 - 8);
      *(_OWORD *)v4 = *(_OWORD *)(v4 - 24);
      *(_QWORD *)(v4 + 16) = v7;
      v4 -= 24LL;
      --v6;
    }
    while ( v6 );
    *(_WORD *)(v3 + 8) = 0;
    *(_QWORD *)(v3 + 16) = 0LL;
    *(_QWORD *)(v3 + 24) = 0LL;
  }
  *(_WORD *)v3 = v1;
  *(_WORD *)(v3 + 8) = v1;
}
