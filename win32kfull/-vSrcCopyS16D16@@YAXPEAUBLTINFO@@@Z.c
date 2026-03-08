/*
 * XREFs of ?vSrcCopyS16D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02ED6A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x1C02DE8B8 (-pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ.c)
 */

void __fastcall vSrcCopyS16D16(XLATE **a1)
{
  XLATE *v1; // rbp
  unsigned int v2; // r12d
  int v3; // r14d
  _WORD *v4; // rdi
  _WORD *v5; // rbx
  __int64 v6; // rax
  int v7; // r10d
  int v8; // r13d
  int v9; // edx
  unsigned int v10; // eax
  unsigned __int64 v11; // r8
  int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // eax
  char v15; // r8
  unsigned __int64 v16; // rdx
  int v17; // eax
  int v18; // ecx
  __int64 (__fastcall *v19)(struct _XLATEOBJ *, unsigned int); // r15
  unsigned int v20; // esi
  int v21; // [rsp+50h] [rbp+8h]

  v1 = *a1;
  v2 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 8);
  v4 = (_WORD *)((char *)a1[1] + 2 * *((_DWORD *)a1 + 12));
  v5 = (_WORD *)((char *)a1[2] + 2 * *((_DWORD *)a1 + 14));
  v6 = *((_QWORD *)*a1 + 6);
  v7 = *((_DWORD *)a1 + 11) - 2 * v2;
  v8 = *((_DWORD *)a1 + 10) - 2 * v2;
  v21 = v7;
  v9 = *(_DWORD *)(*((_QWORD *)*a1 + 5) + 24LL);
  if ( (v9 & 0x200000) != 0 && _bittest((const signed __int32 *)(v6 + 24), 0x16u) )
  {
    while ( 1 )
    {
      v10 = v2;
      if ( ((unsigned __int8)v5 & 2) != 0 )
      {
        v10 = v2 - 1;
        *v5++ = *v4 & 0x1F | (2 * (*v4 & 0xFFE0)) | (*v4 >> 4) & 0x20;
        ++v4;
      }
      if ( (int)(v10 - 2) >= 0 )
      {
        v11 = (unsigned __int64)v10 >> 1;
        do
        {
          v12 = *(_DWORD *)v4 & 0x1F001F;
          v13 = (2 * (*(_DWORD *)v4 & 0xFFE07FE0)) | (*(_DWORD *)v4 >> 4) & 0x200020;
          v4 += 2;
          *(_DWORD *)v5 = v12 | v13;
          v5 += 2;
          --v11;
        }
        while ( v11 );
      }
      if ( (((_BYTE)v10 - 2) & 1) != 0 )
      {
        *v5++ = *v4 & 0x1F | (2 * (*v4 & 0xFFE0)) | (*v4 >> 4) & 0x20;
        ++v4;
      }
      if ( !--v3 )
        break;
      v4 = (_WORD *)((char *)v4 + v8);
      v5 = (_WORD *)((char *)v5 + v7);
    }
  }
  else if ( (v9 & 0x400000) != 0 && _bittest((const signed __int32 *)(v6 + 24), 0x15u) )
  {
    while ( 1 )
    {
      v14 = v2;
      if ( ((unsigned __int8)v5 & 2) != 0 )
      {
        v14 = v2 - 1;
        *v5++ = *v4 & 0x1F | (*v4 >> 1) & 0x7FE0;
        ++v4;
      }
      v15 = v14 - 2;
      if ( (int)(v14 - 2) >= 0 )
      {
        v16 = (unsigned __int64)v14 >> 1;
        do
        {
          v17 = *(_DWORD *)v4 & 0x1F001F;
          v18 = (*(_DWORD *)v4 >> 1) & 0x7FE07FE0;
          v4 += 2;
          *(_DWORD *)v5 = v17 | v18;
          v5 += 2;
          --v16;
        }
        while ( v16 );
      }
      if ( (v15 & 1) != 0 )
      {
        *v5++ = *v4 & 0x1F | (*v4 >> 1) & 0x7FE0;
        ++v4;
      }
      if ( !--v3 )
        break;
      v4 = (_WORD *)((char *)v4 + v8);
      v5 = (_WORD *)((char *)v5 + v7);
    }
  }
  else
  {
    v19 = XLATE::pfnXlateBetweenBitfields(v1);
    while ( 1 )
    {
      v20 = v2;
      do
      {
        *v5++ = v19((struct _XLATEOBJ *)v1, (unsigned __int16)*v4++);
        --v20;
      }
      while ( v20 );
      if ( !--v3 )
        break;
      v4 = (_WORD *)((char *)v4 + v8);
      v5 = (_WORD *)((char *)v5 + v21);
    }
  }
}
