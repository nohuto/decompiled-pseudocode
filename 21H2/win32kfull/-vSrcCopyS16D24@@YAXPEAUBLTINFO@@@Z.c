/*
 * XREFs of ?vSrcCopyS16D24@@YAXPEAUBLTINFO@@@Z @ 0x1C02CBBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x1C0150314 (-pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vSrcCopyS16D24(struct BLTINFO *a1)
{
  unsigned int v1; // r14d
  struct _XLATEOBJ *v2; // r12
  unsigned __int16 *v3; // rbp
  __int64 v4; // rsi
  unsigned int v5; // r13d
  __int64 (__fastcall *v6)(struct _XLATEOBJ *, unsigned int); // rdi
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  int v9; // r14d
  unsigned int v10; // ebx
  bool i; // zf
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // r13d
  int v15; // ebx
  unsigned int v16; // edi
  unsigned int v17; // ebx
  int v18; // eax
  int j; // ebx
  __int64 v20; // rax
  int v21; // [rsp+20h] [rbp-58h]
  __int64 (__fastcall *v22)(struct _XLATEOBJ *, unsigned int); // [rsp+28h] [rbp-50h]
  int v23; // [rsp+80h] [rbp+8h]
  unsigned int v24; // [rsp+90h] [rbp+18h]
  int v25; // [rsp+98h] [rbp+20h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = *(struct _XLATEOBJ **)a1;
  v3 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 12));
  v4 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14);
  v23 = *((_DWORD *)a1 + 8);
  v25 = *((_DWORD *)a1 + 10) - 2 * v1;
  v21 = *((_DWORD *)a1 + 11) - 3 * v1;
  v5 = v1;
  v22 = XLATE::pfnXlateBetweenBitfields(*(XLATE **)a1);
  v6 = v22;
  if ( ((unsigned __int8)v4 & 3u) <= v1 )
    v5 = v4 & 3;
  v7 = v1 - v5;
  v24 = v5;
  v8 = v7 >> 2;
  v9 = v7 & 3;
  while ( 1 )
  {
    v10 = v5;
    for ( i = v5 == 0; ; i = v10 == 0 )
    {
      v13 = v4;
      if ( i )
        break;
      v12 = v6(v2, *v3);
      *(_BYTE *)v4 = v12;
      ++v3;
      *(_BYTE *)(v4 + 1) = BYTE1(v12);
      *(_BYTE *)(v4 + 2) = BYTE2(v12);
      v4 += 3LL;
      --v10;
    }
    if ( v8 )
    {
      v14 = v8;
      do
      {
        v15 = v6(v2, *v3);
        v16 = v6(v2, v3[1]);
        *(_DWORD *)v4 = v15 | (v16 << 24);
        v17 = v22(v2, v3[2]);
        *(_DWORD *)(v4 + 4) = (v17 << 16) | (v16 >> 8);
        v6 = v22;
        v18 = v22(v2, v3[3]);
        v3 += 4;
        *(_DWORD *)(v4 + 8) = HIWORD(v17) | (v18 << 8);
        v4 += 12LL;
        v13 = v4;
        --v14;
      }
      while ( v14 );
      v5 = v24;
    }
    for ( j = v9; j; --j )
    {
      v20 = v6(v2, *v3);
      *(_BYTE *)v4 = v20;
      ++v3;
      *(_BYTE *)(v4 + 1) = BYTE1(v20);
      *(_BYTE *)(v4 + 2) = BYTE2(v20);
      v4 += 3LL;
      v13 = v4;
    }
    if ( !--v23 )
      break;
    v3 = (unsigned __int16 *)((char *)v3 + v25);
    v4 = v13 + v21;
  }
}
