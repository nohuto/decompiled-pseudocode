/*
 * XREFs of MiRebalanceSystemCacheFreedViews @ 0x1403356A0
 * Callers:
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x1402F5E60 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiObtainSystemCacheView @ 0x140335220 (MiObtainSystemCacheView.c)
 *     MiReleaseSystemCacheView @ 0x1403354D0 (MiReleaseSystemCacheView.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall MiRebalanceSystemCacheFreedViews(__int64 a1, int a2, int a3)
{
  __int64 **result; // rax
  __int64 v5; // r10
  unsigned int v6; // r9d
  __int64 v7; // rbp
  int v8; // edx
  unsigned int v9; // ecx
  __int64 *v10; // rdx
  __int64 *v11; // rcx
  unsigned __int64 v12; // rdi
  __int64 *v13; // r14
  int v14; // ebx
  _QWORD *v15; // rcx
  __int64 **v16; // rcx
  __int64 *v17; // rdx
  unsigned int i; // ebx
  __int64 *v19; // rsi
  __int64 **v20; // rcx
  __int64 **v21; // rcx

  result = (__int64 **)(a1 + 1848);
  v5 = a1 + 1976;
  v6 = 0;
  v7 = a1 + 2008;
  do
  {
    if ( result[2] )
    {
      v8 = *((_DWORD *)result + 6);
      v9 = a2 - v8;
      if ( a3 || v9 > 2 || (v8 & 1) == 0 && v9 >= 2 )
      {
LABEL_9:
        while ( 2 )
        {
          v10 = *result;
          if ( *result != (__int64 *)result )
          {
            if ( (__int64 **)v10[1] != result )
              goto LABEL_26;
            v11 = (__int64 *)*v10;
            if ( *(__int64 **)(*v10 + 8) != v10 )
              goto LABEL_26;
            *result = v11;
            v11[1] = (__int64)result;
            v12 = ((unsigned __int64)*((unsigned int *)v10 + 4) >> 18) & 7;
            v10[4] &= 0x3FFFFFFFFFFFFFFFuLL;
            v13 = &v10[-5 * v12];
            v14 = 0;
            v15 = v13 + 4;
            while ( *v15 < 0x4000000000000000uLL )
            {
              v15 += 5;
              if ( (unsigned int)++v14 >= 8 )
              {
                v17 = &v10[-5 * v12];
                for ( i = 0; i < 8; ++i )
                {
                  if ( i != v12 )
                  {
                    v19 = (__int64 *)*v17;
                    if ( *(__int64 **)(*v17 + 8) != v17 )
                      goto LABEL_26;
                    v20 = (__int64 **)v17[1];
                    if ( *v20 != v17 )
                      goto LABEL_26;
                    *v20 = v19;
                    v19[1] = (__int64)v20;
                  }
                  v17 += 5;
                }
                *(_QWORD *)(v5 + 16) -= 7LL;
                v21 = *(__int64 ***)(v7 + 8);
                if ( *v21 == (__int64 *)v7 )
                {
                  *v13 = v7;
                  v13[1] = (__int64)v21;
                  *v21 = v13;
                  *(_QWORD *)(v7 + 8) = v13;
                  ++*(_QWORD *)(v7 + 16);
                  goto LABEL_9;
                }
LABEL_26:
                __fastfail(3u);
              }
            }
            v16 = *(__int64 ***)(v5 + 8);
            if ( *v16 == (__int64 *)v5 )
            {
              *v10 = v5;
              v10[1] = (__int64)v16;
              *v16 = v10;
              *(_QWORD *)(v5 + 8) = v10;
              ++*(_QWORD *)(v5 + 16);
              continue;
            }
            goto LABEL_26;
          }
          break;
        }
        result[2] = 0LL;
      }
    }
    ++v6;
    result += 4;
  }
  while ( v6 < 4 );
  return result;
}
