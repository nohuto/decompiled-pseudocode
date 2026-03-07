__int64 __fastcall PfSnPrefetchCacheEntryGet(__int64 a1, _OWORD *a2, __int64 a3, int *a4)
{
  unsigned int v4; // r12d
  __int64 v7; // r14
  int v8; // ebp
  __int64 v9; // rbx
  __int64 v10; // rsi
  int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rdi
  _QWORD *v16; // rcx
  __int64 **v18; // rsi
  __int64 *v19; // rbx
  __int64 *v20; // rax
  _QWORD *i; // rdx
  __int128 v22; // xmm1
  unsigned int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 **v26; // rax
  __int64 ***v27; // rcx
  __int64 v28; // [rsp+20h] [rbp-48h]
  __int64 v29; // [rsp+20h] [rbp-48h]
  __int64 v30; // [rsp+70h] [rbp+8h]
  _OWORD *Buf2; // [rsp+78h] [rbp+10h]

  Buf2 = a2;
  v4 = *(_DWORD *)(a1 + 4);
  v7 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v8 = 1;
  v9 = 0LL;
  v10 = a3 & v7;
  v30 = a3 & v7;
  do
  {
    if ( v9 )
      goto LABEL_5;
    if ( !(v4 >> 5) )
      goto LABEL_15;
    a2 = Buf2;
    v9 = *(_QWORD *)(a1 + 8)
       + 8LL
       * ((37
         * (BYTE6(v30)
          + 37
          * (BYTE5(v30)
           + 37
           * (BYTE4(v30)
            + 37 * (BYTE3(v30) + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v10 + 11623883)))))))
         + HIBYTE(v30)) & ((v4 >> 5) - 1));
    do
    {
LABEL_5:
      v9 = *(_QWORD *)v9;
      if ( (v9 & 1) != 0 )
        goto LABEL_15;
    }
    while ( v10 != (v7 & *(_QWORD *)(v9 + 8)) );
    if ( !v9 )
    {
LABEL_15:
      if ( !a4 )
        return 0LL;
      if ( *(_QWORD *)(a1 + 8) || (int)PfSnPrefetchCacheCtxStart(a1) >= 0 )
      {
        v9 = *(_QWORD *)(a1 + 32);
        v18 = (__int64 **)(a1 + 16);
        if ( v9 )
        {
          *(_QWORD *)(a1 + 32) = *(_QWORD *)v9;
        }
        else
        {
          v19 = *v18;
          if ( (__int64 **)(*v18)[1] != v18 || (v20 = (__int64 *)*v19, *(__int64 **)(*v19 + 8) != v19) )
LABEL_32:
            __fastfail(3u);
          *v18 = v20;
          v9 = (__int64)(v19 - 2);
          v20[1] = (__int64)v18;
          v28 = *(_QWORD *)(v9 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
          for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                             + 8LL
                             * ((37
                               * (BYTE6(v28)
                                + 37
                                * (BYTE5(v28)
                                 + 37
                                 * (BYTE4(v28)
                                  + 37
                                  * (BYTE3(v28)
                                   + 37 * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * ((unsigned __int8)v28 + 11623883)))))))
                               + HIBYTE(v28)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1)));
                (*i & 1) == 0;
                i = (_QWORD *)*i )
          {
            if ( *i == v9 )
            {
              *i = *(_QWORD *)v9;
              --*(_DWORD *)a1;
              *(_QWORD *)v9 |= 0x8000000000000002uLL;
              break;
            }
          }
        }
        memset((void *)v9, 0, 0x78uLL);
        *(_OWORD *)(v9 + 32) = *Buf2;
        *(_OWORD *)(v9 + 48) = Buf2[1];
        *(_OWORD *)(v9 + 64) = Buf2[2];
        v22 = Buf2[3];
        *(_QWORD *)(v9 + 8) = a3;
        *(_OWORD *)(v9 + 80) = v22;
        v23 = *(_DWORD *)(a1 + 4);
        v29 = a3 & (-1LL << (v23 & 0x1F));
        v24 = *(_QWORD *)(a1 + 8);
        v25 = (37
             * (BYTE6(v29)
              + 37
              * (BYTE5(v29)
               + 37
               * (BYTE4(v29)
                + 37 * (BYTE3(v29) + 37 * (BYTE2(v29) + 37 * (BYTE1(v29) + 37 * ((unsigned __int8)v29 + 11623883)))))))
             + HIBYTE(v29)) & ((v23 >> 5) - 1);
        *(_QWORD *)v9 = *(_QWORD *)(v24 + 8 * v25);
        v26 = (__int64 **)(v9 + 16);
        *(_QWORD *)(v24 + 8 * v25) = v9;
        ++*(_DWORD *)a1;
        v27 = *(__int64 ****)(a1 + 24);
        if ( *v27 != v18 )
          goto LABEL_32;
        *v26 = (__int64 *)v18;
        *(_QWORD *)(v9 + 24) = v27;
        *v27 = v26;
        *(_QWORD *)(a1 + 24) = v26;
      }
      else
      {
        v9 = 0LL;
      }
LABEL_13:
      *a4 = v8;
      return v9;
    }
    v11 = memcmp((const void *)(v9 + 32), a2, 0x40uLL);
    a2 = Buf2;
  }
  while ( v11 );
  v12 = (_QWORD *)(v9 + 16);
  v13 = *(_QWORD *)(v9 + 16);
  if ( *(_QWORD *)(v13 + 8) != v9 + 16 )
    goto LABEL_32;
  v14 = *(_QWORD **)(v9 + 24);
  if ( (_QWORD *)*v14 != v12 )
    goto LABEL_32;
  *v14 = v13;
  v15 = a1 + 16;
  *(_QWORD *)(v13 + 8) = v14;
  v16 = *(_QWORD **)(v15 + 8);
  if ( *v16 != v15 )
    goto LABEL_32;
  *v12 = v15;
  *(_QWORD *)(v9 + 24) = v16;
  *v16 = v12;
  *(_QWORD *)(v15 + 8) = v12;
  v8 = 0;
  if ( a4 )
    goto LABEL_13;
  return v9;
}
