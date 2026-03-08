/*
 * XREFs of ?vSrcCopyS16D24@@YAXPEAUBLTINFO@@@Z @ 0x1C02EE690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x1C02DE8B8 (-pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ.c)
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
  unsigned int i; // ebx
  __int64 v11; // rax
  unsigned int v12; // r13d
  int v13; // ebx
  unsigned int v14; // edi
  unsigned int v15; // ebx
  int v16; // eax
  int j; // ebx
  __int64 v18; // rax
  int v19; // [rsp+20h] [rbp-58h]
  __int64 (__fastcall *v20)(struct _XLATEOBJ *, unsigned int); // [rsp+28h] [rbp-50h]
  int v21; // [rsp+80h] [rbp+8h]
  unsigned int v22; // [rsp+90h] [rbp+18h]
  int v23; // [rsp+98h] [rbp+20h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = *(struct _XLATEOBJ **)a1;
  v3 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 12));
  v4 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14);
  v21 = *((_DWORD *)a1 + 8);
  v23 = *((_DWORD *)a1 + 10) - 2 * v1;
  v19 = *((_DWORD *)a1 + 11) - 3 * v1;
  v5 = v1;
  v20 = XLATE::pfnXlateBetweenBitfields(*(XLATE **)a1);
  v6 = v20;
  if ( ((unsigned __int8)v4 & 3u) <= v1 )
    v5 = v4 & 3;
  v7 = v1 - v5;
  v22 = v5;
  v8 = v7 >> 2;
  v9 = v7 & 3;
  while ( 1 )
  {
    for ( i = v5; i; --i )
    {
      v11 = v6(v2, *v3);
      *(_BYTE *)v4 = v11;
      ++v3;
      *(_BYTE *)(v4 + 1) = BYTE1(v11);
      *(_BYTE *)(v4 + 2) = BYTE2(v11);
      v4 += 3LL;
    }
    if ( v8 )
    {
      v12 = v8;
      do
      {
        v13 = v6(v2, *v3);
        v14 = v6(v2, v3[1]);
        *(_DWORD *)v4 = v13 | (v14 << 24);
        v15 = v20(v2, v3[2]);
        *(_DWORD *)(v4 + 4) = (v15 << 16) | (v14 >> 8);
        v6 = v20;
        v16 = v20(v2, v3[3]);
        v3 += 4;
        *(_DWORD *)(v4 + 8) = HIWORD(v15) | (v16 << 8);
        v4 += 12LL;
        --v12;
      }
      while ( v12 );
      v5 = v22;
    }
    for ( j = v9; j; --j )
    {
      v18 = v6(v2, *v3);
      *(_BYTE *)v4 = v18;
      ++v3;
      *(_BYTE *)(v4 + 1) = BYTE1(v18);
      *(_BYTE *)(v4 + 2) = BYTE2(v18);
      v4 += 3LL;
    }
    if ( !--v21 )
      break;
    v3 = (unsigned __int16 *)((char *)v3 + v23);
    v4 += v19;
  }
}
