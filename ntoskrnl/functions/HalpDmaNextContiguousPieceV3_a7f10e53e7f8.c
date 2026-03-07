__int64 __fastcall HalpDmaNextContiguousPieceV3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6)
{
  unsigned __int64 v6; // r8
  _BYTE *v7; // rbx
  char v8; // r12
  unsigned __int64 v9; // r15
  bool v12; // bp
  unsigned int v13; // r11d
  unsigned int v14; // r9d
  unsigned int v15; // r10d
  unsigned __int64 *v16; // r13
  __int64 *v17; // r14
  unsigned __int64 v18; // rsi
  __int64 v19; // r13
  unsigned int v20; // r14d
  int v21; // ecx
  int AdapterCacheAlignment; // eax
  unsigned __int64 *v23; // rax
  unsigned int v24; // ecx
  _QWORD *v25; // r10
  __int64 v26; // rdx
  __int64 v27; // r8
  _QWORD *v29; // [rsp+20h] [rbp-58h]
  char v30; // [rsp+80h] [rbp+8h]
  unsigned __int64 *v31; // [rsp+88h] [rbp+10h]
  unsigned __int64 v33; // [rsp+98h] [rbp+20h]

  v6 = *(_QWORD *)(a1 + 144);
  v7 = (_BYTE *)(a1 + 445);
  v8 = *(_BYTE *)(a1 + 153);
  v9 = v6 >> 12;
  v33 = v6;
  v30 = v8;
  v12 = !a5 && !*v7;
  v13 = a6;
  v14 = 4096 - (a4 & 0xFFF);
  v15 = v14;
  v16 = (unsigned __int64 *)(a2 + 8 * ((unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12) + 6LL));
  v17 = (__int64 *)v16;
  v31 = v16;
  if ( *v16 > v9 )
    goto LABEL_32;
  if ( !v12 )
    goto LABEL_9;
  if ( (((unsigned int)HalpDmaGetAdapterCacheAlignment(a1, a2) - 1) & (unsigned int)a4) != 0 )
  {
LABEL_32:
    v15 = 0;
    goto LABEL_34;
  }
  v6 = v33;
LABEL_9:
  if ( v14 >= v13 )
  {
LABEL_28:
    if ( v15 > v13 )
    {
      v15 = v13;
      if ( v12 )
      {
        AdapterCacheAlignment = HalpDmaGetAdapterCacheAlignment(a1, a2);
        if ( ((AdapterCacheAlignment - 1) & v13) != 0 )
          v15 &= 0xFFFFF000;
      }
    }
  }
  else
  {
    while ( 1 )
    {
      a2 = (__int64)(v17 + 1);
      v18 = v17[1];
      v29 = v17 + 1;
      if ( v18 > v9 )
        break;
      v19 = *v17;
      if ( *v17 + 1 != v18 )
        goto LABEL_27;
      v20 = v13 - v15;
      if ( v13 - v15 > 0x1000 )
        v20 = 4096;
      if ( v6 < v20 + (v18 << 12) - 1 && *(_DWORD *)(a1 + 520) != 3 )
      {
LABEL_26:
        v8 = v30;
LABEL_27:
        v16 = v31;
        goto LABEL_28;
      }
      if ( !*v7 && !a5 )
      {
        v21 = HalpDmaGetAdapterCacheAlignment(a1, a2) - 1;
        if ( (v21 & ((_DWORD)v18 << 12)) != 0 || (v21 & v20) != 0 )
          goto LABEL_26;
        a2 = (__int64)v29;
        v6 = v33;
      }
      v8 = v30;
      if ( ((v19 ^ v18) & 0xFFFFFFFFFFF00000uLL) == 0 && (v30 == 1 || ((v19 ^ v18) & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        v17 = (__int64 *)a2;
        v15 += 4096;
        if ( v15 < v13 )
          continue;
      }
      goto LABEL_27;
    }
    v16 = v31;
  }
LABEL_34:
  if ( !*(_BYTE *)(a1 + 442) || !v13 || v15 )
    return v15;
  v23 = v16 + 1;
  v24 = v14;
  if ( v14 >= v13 )
  {
LABEL_40:
    if ( v24 > v13 )
      v24 = v13;
  }
  else
  {
    while ( *v23 > v9 )
    {
      v24 += 4096;
      ++v23;
      if ( v24 >= v13 )
        goto LABEL_40;
    }
  }
  v25 = *(_QWORD **)(a3 + 56);
  if ( v25 )
  {
    v26 = *v25 >> 12;
    while ( 1 )
    {
      v25 = (_QWORD *)v25[1];
      if ( v14 >= v24 )
        break;
      if ( !v25 )
        return v14;
      v27 = *v25 >> 12;
      if ( v27 != v26 + 1
        || ((v26 ^ v27) & 0xFFFFFFFFFFF00000uLL) != 0
        || v8 != 1 && ((v26 ^ v27) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        break;
      }
      v26 = *v25 >> 12;
      v14 += 4096;
    }
    if ( v14 > v24 )
      return v24;
  }
  else
  {
    return 0;
  }
  return v14;
}
