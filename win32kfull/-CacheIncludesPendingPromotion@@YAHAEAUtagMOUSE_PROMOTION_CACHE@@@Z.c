__int64 __fastcall CacheIncludesPendingPromotion(struct tagMOUSE_PROMOTION_CACHE *a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rcx

  v2 = SGDGetUserSessionState(a1);
  if ( (unsigned int)HasPendingPromotion() )
  {
    if ( *(_WORD *)a1 == *(_WORD *)(v2 + 16280) )
    {
      v3 = (__int64 *)*((_QWORD *)a1 + 1);
      if ( v3 )
      {
        while ( v3 != *((__int64 **)a1 + 2) )
        {
          if ( *((_DWORD *)v3 + 8) == *(_DWORD *)(v2 + 16284) )
            return 1LL;
          v3 = (__int64 *)*v3;
          if ( !v3 )
            return 0LL;
        }
      }
    }
  }
  return 0LL;
}
