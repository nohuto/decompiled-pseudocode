/*
 * XREFs of ?vSrcCopyS24D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02EDEF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x1C02DE8B8 (-pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ.c)
 */

void __fastcall vSrcCopyS24D16(struct BLTINFO *a1)
{
  unsigned int v1; // esi
  XLATE *v2; // r14
  int v3; // ebp
  _WORD *v4; // rdi
  int v5; // r12d
  unsigned __int8 *v6; // rbx
  int v7; // r13d
  int v8; // ecx
  unsigned int v9; // eax
  char v10; // r9
  unsigned __int64 v11; // r8
  int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // eax
  char v16; // r9
  unsigned __int64 v17; // r8
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  __int64 (__fastcall *v21)(struct _XLATEOBJ *, unsigned int); // r13
  unsigned int v22; // r15d
  int v23; // [rsp+60h] [rbp+8h]
  __int64 (__fastcall *i)(struct _XLATEOBJ *, unsigned int); // [rsp+68h] [rbp+10h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = *(XLATE **)a1;
  v3 = *((_DWORD *)a1 + 8);
  v4 = (_WORD *)(*((_QWORD *)a1 + 2) + 2 * *((_DWORD *)a1 + 14));
  v5 = *((_DWORD *)a1 + 10) - 3 * v1;
  v6 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 12));
  v7 = *((_DWORD *)a1 + 11) - 2 * v1;
  v23 = v7;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 24LL) & 8) == 0 )
    goto LABEL_22;
  v8 = *(_DWORD *)(*((_QWORD *)v2 + 6) + 24LL);
  if ( (v8 & 0x400000) != 0 )
  {
    while ( 1 )
    {
      v9 = v1;
      if ( ((unsigned __int8)v4 & 2) != 0 )
      {
        v9 = v1 - 1;
        *v4++ = (*v6 >> 3) | (8 * (v6[1] & 0xFC | (32 * (v6[2] & 0xF8))));
        v6 += 3;
      }
      v10 = v9 - 2;
      if ( (int)(v9 - 2) >= 0 )
      {
        v11 = (unsigned __int64)v9 >> 1;
        do
        {
          v12 = v6[2] & 0xF8 | ((v6[4] & 0xFC) << 11);
          v13 = (8 * (v6[1] | ((v6[3] | (v6[5] << 11)) << 10))) & 0xF81F07E0;
          v14 = *v6;
          v6 += 6;
          *(_DWORD *)v4 = (v14 >> 3) | (v12 << 8) | v13;
          v4 += 2;
          --v11;
        }
        while ( v11 );
      }
      if ( (v10 & 1) != 0 )
      {
        *v4++ = (*v6 >> 3) | (8 * (v6[1] & 0xFC | (32 * (v6[2] & 0xF8))));
        v6 += 3;
      }
      if ( !--v3 )
        break;
      v6 += v5;
      v4 = (_WORD *)((char *)v4 + v7);
    }
    return;
  }
  if ( (v8 & 0x200000) == 0 )
  {
LABEL_22:
    v21 = XLATE::pfnXlateBetweenBitfields(v2);
    for ( i = v21; ; v21 = i )
    {
      v22 = v1;
      do
      {
        *v4 = v21((struct _XLATEOBJ *)v2, *v6 | (*(unsigned __int16 *)(v6 + 1) << 8));
        v6 += 3;
        ++v4;
        --v22;
      }
      while ( v22 );
      if ( !--v3 )
        break;
      v6 += v5;
      v4 = (_WORD *)((char *)v4 + v23);
    }
    return;
  }
  while ( 1 )
  {
    v15 = v1;
    if ( ((unsigned __int8)v4 & 2) != 0 )
    {
      v15 = v1 - 1;
      *v4++ = (*v6 >> 3) | (4 * (v6[1] & 0xF8 | (32 * (v6[2] & 0xF8))));
      v6 += 3;
    }
    v16 = v15 - 2;
    if ( (int)(v15 - 2) >= 0 )
    {
      v17 = (unsigned __int64)v15 >> 1;
      do
      {
        v18 = (v6[1] | (v6[5] << 21)) & 0x1F07C0F8 | ((v6[3] & 0xF8 | (32 * (v6[4] & 0xF8))) << 11);
        v19 = *v6 >> 3;
        v20 = v6[2];
        v6 += 6;
        *(_DWORD *)v4 = (v19 | (v20 << 7)) & 0x3E07C1F | (4 * v18);
        v4 += 2;
        --v17;
      }
      while ( v17 );
    }
    if ( (v16 & 1) != 0 )
    {
      *v4++ = (*v6 >> 3) | (4 * (v6[1] & 0xF8 | (32 * (v6[2] & 0xF8))));
      v6 += 3;
    }
    if ( !--v3 )
      break;
    v6 += v5;
    v4 = (_WORD *)((char *)v4 + v7);
  }
}
