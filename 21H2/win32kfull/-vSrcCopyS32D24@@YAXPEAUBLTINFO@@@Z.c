/*
 * XREFs of ?vSrcCopyS32D24@@YAXPEAUBLTINFO@@@Z @ 0x1C013A4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x1C013C7F4 (-pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vSrcCopyS32D24(struct BLTINFO *a1)
{
  unsigned int v1; // esi
  XLATE *v2; // rbp
  int v3; // r14d
  unsigned int *v4; // rdi
  int v5; // r13d
  __int64 v6; // rbx
  int v7; // edx
  int v8; // r11d
  unsigned int v9; // esi
  unsigned int v10; // r9d
  int v11; // esi
  int i; // ecx
  unsigned int v13; // r10d
  unsigned int v14; // r8d
  unsigned int v15; // edx
  unsigned int v16; // eax
  int j; // ecx
  char v18; // al
  char v19; // al
  unsigned int (*v20)(struct _XLATEOBJ *, unsigned int); // r12
  unsigned int v21; // r15d
  __int64 v22; // rax
  int v23; // [rsp+50h] [rbp+8h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = *(XLATE **)a1;
  v3 = *((_DWORD *)a1 + 8);
  v4 = (unsigned int *)(*((_QWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 12));
  v5 = *((_DWORD *)a1 + 10) - 4 * v1;
  v6 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14);
  v7 = *((_DWORD *)a1 + 11) - 3 * v1;
  v23 = v7;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 24LL) & 8) != 0
    && (*(_DWORD *)(*((_QWORD *)v2 + 6) + 24LL) & 8) != 0 )
  {
    v8 = *((_DWORD *)a1 + 7);
    if ( ((unsigned __int8)v6 & 3u) <= v1 )
      v8 = v6 & 3;
    v9 = v1 - v8;
    v10 = v9 >> 2;
    v11 = v9 & 3;
    while ( 1 )
    {
      for ( i = v8; i; --i )
      {
        *(_BYTE *)v6 = *(_BYTE *)v4;
        *(_BYTE *)(v6 + 1) = *((_BYTE *)v4 + 1);
        v19 = *((_BYTE *)v4++ + 2);
        *(_BYTE *)(v6 + 2) = v19;
        v6 += 3LL;
      }
      v13 = v10;
      if ( v10 )
      {
        do
        {
          v14 = v4[1] >> 8;
          *(_DWORD *)v6 = (v4[1] << 24) | *v4 & 0xFFFFFF;
          v15 = HIWORD(v4[2]);
          *(_DWORD *)(v6 + 4) = (v4[2] << 16) | (unsigned __int16)v14;
          v16 = v4[3];
          v4 += 4;
          *(_DWORD *)(v6 + 8) = (v16 << 8) | (unsigned __int8)v15;
          v6 += 12LL;
          --v13;
        }
        while ( v13 );
        v7 = v23;
      }
      for ( j = v11; j; --j )
      {
        *(_BYTE *)v6 = *(_BYTE *)v4;
        *(_BYTE *)(v6 + 1) = *((_BYTE *)v4 + 1);
        v18 = *((_BYTE *)v4++ + 2);
        *(_BYTE *)(v6 + 2) = v18;
        v6 += 3LL;
      }
      if ( !--v3 )
        break;
      v4 = (unsigned int *)((char *)v4 + v5);
      v6 += v7;
    }
  }
  else
  {
    v20 = XLATE::pfnXlateBetweenBitfields(v2);
    while ( 1 )
    {
      v21 = v1;
      do
      {
        v22 = ((__int64 (__fastcall *)(XLATE *, _QWORD))v20)(v2, *v4);
        *(_BYTE *)v6 = v22;
        ++v4;
        *(_BYTE *)(v6 + 1) = BYTE1(v22);
        *(_BYTE *)(v6 + 2) = BYTE2(v22);
        v6 += 3LL;
        --v21;
      }
      while ( v21 );
      if ( !--v3 )
        break;
      v4 = (unsigned int *)((char *)v4 + v5);
      v6 += v23;
    }
  }
}
