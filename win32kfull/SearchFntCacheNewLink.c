/*
 * XREFs of SearchFntCacheNewLink @ 0x1C028C790
 * Callers:
 *     ?PutFNTCacheCheckSum@@YAXKK@Z @ 0x1C028C5B0 (-PutFNTCacheCheckSum@@YAXKK@Z.c)
 *     ?PutFntCacheDrvAndFileInfo@@YAXKPEAVPDEV@@KPEAPEAU_FONTFILEVIEW@@K@Z @ 0x1C028C660 (-PutFntCacheDrvAndFileInfo@@YAXKPEAVPDEV@@KPEAPEAU_FONTFILEVIEW@@K@Z.c)
 *     EngFntCacheAllocInternal @ 0x1C028CC6C (EngFntCacheAllocInternal.c)
 * Callees:
 *     SearchFNTCacheHlink @ 0x1C0116040 (SearchFNTCacheHlink.c)
 *     bFntCacheCreateHLink @ 0x1C028C86C (bFntCacheCreateHLink.c)
 */

unsigned int *__fastcall SearchFntCacheNewLink(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r8
  unsigned int *v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int *v10; // [rsp+48h] [rbp+10h] BYREF

  v1 = a1;
  v10 = 0LL;
  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  v3 = *(_QWORD *)(v2 + 19392);
  SearchFNTCacheHlink(v1, &v10, *(_QWORD *)v3);
  v5 = v10;
  if ( !v10 )
  {
    if ( *(_DWORD *)(v3 + 8) < *(_DWORD *)(v4 + 16) && (unsigned int)bFntCacheCreateHLink(v1) )
    {
      v6 = *(__int64 **)(v2 + 19392);
      v7 = *v6;
      v8 = 80LL * *((unsigned int *)v6 + 2);
      v5 = (unsigned int *)(v8 + *v6 + 320);
      *v5 = v1;
      *(_DWORD *)(v8 + v7 + 324) = 0;
      *(_DWORD *)(v8 + v7 + 328) = -1;
      *(_QWORD *)(v8 + v7 + 336) = 0LL;
      *(_DWORD *)(v8 + v7 + 344) = 0;
      *(_DWORD *)(v8 + v7 + 332) = 0;
      ++*(_DWORD *)(*(_QWORD *)(v2 + 19392) + 8LL);
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(v2 + 19392) + 16LL) |= 2u;
    }
  }
  return v5;
}
