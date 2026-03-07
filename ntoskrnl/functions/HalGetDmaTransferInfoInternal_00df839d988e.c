__int64 __fastcall HalGetDmaTransferInfoInternal(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        _DWORD *a6)
{
  _DWORD *v6; // rsi
  __int64 *v8; // r10
  int v10; // edi
  unsigned __int64 v11; // rax
  unsigned int v13; // ecx
  int v14; // r11d
  int v15; // r9d
  int v16; // r13d
  __int64 v17; // rbx
  char v18; // si
  __int64 v19; // r15
  unsigned int v20; // eax
  __int64 v21; // rdx
  unsigned int v22; // r14d
  char v23; // di
  unsigned __int64 v24; // r12
  __int64 *v25; // r13
  unsigned int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // r8
  int AdapterCacheAlignment; // eax
  unsigned int v31; // eax
  int v32; // edi
  int v33; // [rsp+20h] [rbp-58h]
  int v34; // [rsp+24h] [rbp-54h]
  int v35; // [rsp+28h] [rbp-50h]
  __int64 v36; // [rsp+30h] [rbp-48h]
  __int64 v37; // [rsp+38h] [rbp-40h]
  __int64 v38; // [rsp+40h] [rbp-38h]
  __int64 v39; // [rsp+48h] [rbp-30h]
  unsigned int v40; // [rsp+98h] [rbp+20h]

  v6 = a6;
  v8 = a2;
  v10 = *a6;
  v34 = *a6;
  if ( *a6 <= 2u )
  {
    if ( !a2 )
      return 3221225485LL;
    while ( 1 )
    {
      v11 = *((unsigned int *)v8 + 10);
      if ( a3 < v11 )
        break;
      v8 = (__int64 *)*v8;
      a3 -= v11;
      if ( !v8 )
        return 3221225485LL;
    }
    v13 = *(_DWORD *)(a1 + 448);
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0LL;
    if ( v13 < 0x40 )
      v17 = ~((1LL << v13) - 1);
    if ( a4 )
    {
      do
      {
        if ( !v8 )
          break;
        v18 = 0;
        v19 = 0LL;
        v20 = a4;
        if ( *((_DWORD *)v8 + 10) - (int)a3 <= a4 )
          v20 = *((_DWORD *)v8 + 10) - a3;
        v21 = v20;
        v35 = v20;
        v22 = ((_WORD)a3 + *((_WORD *)v8 + 22)) & 0xFFF;
        a4 -= v20;
        v40 = a4;
        v16 += (v20 + (unsigned __int64)(((_WORD)a3 + *((_WORD *)v8 + 22)) & 0xFFF) + 4095) >> 12;
        v33 = v16;
        if ( v20 )
        {
          v23 = *(_BYTE *)(a1 + 442);
          v24 = *(_QWORD *)(a1 + 144);
          v25 = &v8[((unsigned __int64)(unsigned int)(a3 + *((_DWORD *)v8 + 11)) >> 12) + 6];
          do
          {
            v26 = v21;
            if ( 4096 - v22 <= (unsigned int)v21 )
              v26 = 4096 - v22;
            v27 = v26;
            v28 = v14 + 1;
            if ( v23 )
              v28 = v14;
            v37 = v27;
            v14 = v28;
            v29 = *v25 << 12;
            v39 = v22;
            v38 = v29 + v22;
            v36 = v29;
            if ( (v24 >= v27 + v38 - 1 || *(_DWORD *)(a1 + 520) == 3)
              && (*(_BYTE *)(a1 + 445)
               || (AdapterCacheAlignment = HalpDmaGetAdapterCacheAlignment(a1, v21),
                   LODWORD(v21) = v35,
                   v29 = v36,
                   ((AdapterCacheAlignment - 1) & (unsigned int)v38) == 0)
               && ((AdapterCacheAlignment - 1) & (unsigned int)v37) == 0) )
            {
              if ( v22 || v29 != v19 + 1 || ((v29 ^ v19) & v17) != 0 || ((v29 ^ v19) & 0x100000000LL) != 0 || v18 )
              {
                ++v15;
                v18 = 0;
              }
            }
            else
            {
              if ( v23 )
                ++v14;
              ++v15;
              v18 = 1;
            }
            ++v25;
            v22 = 0;
            v19 = v29 + v37 + v39 - 1;
            v21 = (unsigned int)(v21 - v37);
            v35 = v21;
          }
          while ( (_DWORD)v21 );
          a4 = v40;
          v16 = v33;
        }
        v8 = (__int64 *)*v8;
        LODWORD(a3) = 0;
      }
      while ( a4 );
      v10 = v34;
      v6 = a6;
    }
    if ( *(_BYTE *)(a1 + 442) || v15 == 1 && !v14 )
    {
      v31 = 24 * v15 + 208;
      if ( v31 < 0xA8 )
        v31 = 168;
    }
    else
    {
      v15 = 1;
      v14 = v16;
      v31 = 232;
    }
    v32 = v10 - 1;
    if ( !v32 )
      goto LABEL_44;
    if ( v32 == 1 )
    {
      v6[4] = v16;
LABEL_44:
      v6[1] = v14;
      v6[2] = v15;
      v6[3] = v31;
      return 0LL;
    }
  }
  return 3221225659LL;
}
