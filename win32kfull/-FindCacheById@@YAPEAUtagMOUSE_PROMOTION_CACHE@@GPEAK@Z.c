struct tagMOUSE_PROMOTION_CACHE *__fastcall FindCacheById(__int64 a1, unsigned int *a2)
{
  __int16 v3; // bx
  __int64 v4; // rax
  __int64 v5; // r8
  _WORD *i; // r9

  v3 = a1;
  v4 = SGDGetUserSessionState(a1);
  v5 = 0LL;
  for ( i = (_WORD *)(v4 + 16064); *i != v3; i += 12 )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 5 )
      return 0LL;
  }
  *a2 = v5;
  return (struct tagMOUSE_PROMOTION_CACHE *)(v4 + 16056 + 8 * (v5 + 2 * v5 + 1));
}
