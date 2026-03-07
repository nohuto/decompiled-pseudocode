void __fastcall MiFindLargePageMemory(_QWORD *a1, unsigned __int64 *a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdi
  unsigned __int64 v4; // r15
  int v5; // eax
  unsigned int v6; // r12d
  char *PageChains; // rax
  __int64 *v8; // r13
  _QWORD *Pool; // rsi
  int v10; // eax
  ULONG_PTR v11; // rbx
  unsigned int LargestPageIndex; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r12
  bool v17; // r8
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rbx
  int v22; // [rsp+70h] [rbp-29h]
  int v23; // [rsp+74h] [rbp-25h]
  unsigned __int64 v24; // [rsp+78h] [rbp-21h] BYREF
  __int64 v25; // [rsp+80h] [rbp-19h] BYREF
  __int64 v26; // [rsp+88h] [rbp-11h] BYREF
  __int64 v27; // [rsp+90h] [rbp-9h] BYREF
  __int64 v28; // [rsp+98h] [rbp-1h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+7h]
  unsigned int v32; // [rsp+110h] [rbp+77h]
  unsigned int v33; // [rsp+118h] [rbp+7Fh]

  v2 = a1[1];
  v3 = a1;
  v24 = 0LL;
  v4 = a1[2] - a1[8];
  v5 = *(_DWORD *)(v2 + 4);
  v29 = v2;
  if ( (unsigned int)MiSufficientAvailablePages(v2, v4 + ((unsigned __int8)-((v5 & 0x10) == 0) & 0xA0)) )
  {
    v32 = MiProtectionToCacheAttribute(*((_DWORD *)v3 + 9));
    v6 = v32;
    PageChains = MiCreatePageChains(v2, *((_DWORD *)v3 + 8), v32);
    v8 = (__int64 *)PageChains;
    if ( PageChains )
    {
      *((_DWORD *)PageChains + 4) |= 1u;
      Pool = 0LL;
      v10 = *((_DWORD *)v3 + 13);
      v26 = 0LL;
      v27 = 0LL;
      v25 = 0LL;
      v28 = 0LL;
      v11 = qword_140C6F348;
      v23 = v10 | 0x60100000;
      v22 = 0;
      LargestPageIndex = MiGetLargestPageIndex();
      v13 = LargestPageIndex;
      v33 = LargestPageIndex;
      if ( LargestPageIndex < 3 )
      {
        do
        {
          v14 = MiLargePageSizes[v13];
          if ( v4 < v14 )
            goto LABEL_25;
          if ( v14 < v3[3] )
            break;
          if ( !Pool )
          {
            Pool = MiAllocatePool(64, 0x28uLL, 0x6C4C6D4Du);
            if ( !Pool )
              goto LABEL_30;
          }
          if ( (int)MiFindContiguousPagesEx(
                      v29,
                      v14,
                      v11,
                      v14,
                      0,
                      v14,
                      v6,
                      *((_DWORD *)v3 + 8),
                      0x80000000,
                      v23,
                      0,
                      0LL,
                      &v24) < 0 )
            goto LABEL_25;
          v4 -= v14;
          if ( (*(_DWORD *)v3 & 8) == 0 )
          {
            v15 = 48 * v24 - 0x220000000000LL;
            v16 = v15 + 48 * v14;
            if ( v15 < v16 )
            {
              do
              {
                if ( MiPfnZeroingNeeded(v15) )
                {
                  MiInsertMdlPageNeedsZero((__int64)v8, v15, 1LL);
                  MiUpdateCacheAttributeListsForPage(v15, v32, 1, &v26, &v27, &v25, &v28);
                  v22 = 1;
                }
                v15 += 48LL;
              }
              while ( v15 < v16 );
              v3 = a1;
            }
            v6 = v32;
          }
          v17 = 0;
          *Pool = v24;
          v18 = v24;
          Pool[1] = v14;
          v19 = (_QWORD *)*a2;
          if ( *a2 )
          {
            while ( 1 )
            {
              if ( v18 >= *(v19 - 2) )
              {
                v20 = (_QWORD *)v19[1];
                if ( !v20 )
                {
                  v17 = 1;
                  break;
                }
              }
              else
              {
                v20 = (_QWORD *)*v19;
                if ( !*v19 )
                  break;
              }
              v19 = v20;
            }
          }
          RtlAvlInsertNodeEx(a2, (unsigned __int64)v19, v17, (unsigned __int64)(Pool + 2));
          Pool = 0LL;
          if ( !v4 )
            goto LABEL_30;
          v11 = v24 - 1;
          if ( v24 - 1 > v14 )
          {
            v13 = v33;
          }
          else
          {
LABEL_25:
            v11 = qword_140C6F348;
            v13 = ++v33;
          }
        }
        while ( (unsigned int)v13 < 3 );
        if ( Pool )
          ExFreePoolWithTag(Pool, 0);
LABEL_30:
        if ( v22 )
        {
          if ( v25 )
            MiChangePageAttributeBatch(v25, v6, ZeroPte);
          v21 = v26;
          if ( v26 )
            MiChangePageAttributeBatch(v26, 1u, -1LL);
          MiZeroInParallel(v8);
          if ( v21 )
            MiChangePageAttributeBatch(v21, 3u, ZeroPte);
          if ( v27 )
            MiChangePageAttributeBatch(v27, 3u, ZeroPte);
          if ( v28 )
            MiChangePageAttributeBatch(v28, v6, ZeroPte);
        }
      }
      MiDereferencePageChains((volatile signed __int32 *)v8);
    }
  }
}
