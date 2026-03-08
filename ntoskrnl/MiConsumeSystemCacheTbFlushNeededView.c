/*
 * XREFs of MiConsumeSystemCacheTbFlushNeededView @ 0x1402F5E60
 * Callers:
 *     MiObtainSystemCacheView @ 0x140335220 (MiObtainSystemCacheView.c)
 * Callees:
 *     KeFlushTb @ 0x140323CB0 (KeFlushTb.c)
 *     MiRebalanceSystemCacheFreedViews @ 0x1403356A0 (MiRebalanceSystemCacheFreedViews.c)
 */

_QWORD *__fastcall MiConsumeSystemCacheTbFlushNeededView(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  _QWORD *v3; // r9
  unsigned int v4; // ebx
  unsigned int v6; // r8d
  _QWORD *v8; // rdx
  _QWORD *v9; // rbx
  __int64 v10; // rax

  v2 = 0LL;
  v3 = (_QWORD *)(a1 + 1864);
  v4 = -1;
  v6 = 0;
  while ( 1 )
  {
    if ( *v3 )
    {
      v2 += *v3;
      v4 = v6;
      if ( v2 >= a2 )
        break;
    }
    ++v6;
    v3 += 4;
    if ( v6 >= 4 )
    {
      if ( v2 < a2 )
        return 0LL;
      break;
    }
  }
  KeFlushTb(0LL, 2LL);
  v8 = (_QWORD *)(32LL * v4 + a1 + 1848);
  v9 = (_QWORD *)*v8;
  if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v10 = *v9, *(_QWORD **)(*v9 + 8LL) != v9) )
    __fastfail(3u);
  *v8 = v10;
  *(_QWORD *)(v10 + 8) = v8;
  v9[4] = v9[4] & 0x3FFFFFFFFFFFFFFFLL | 0x8000000000000000uLL;
  --v8[2];
  MiRebalanceSystemCacheFreedViews(a1, 0LL, 1LL);
  return v9;
}
