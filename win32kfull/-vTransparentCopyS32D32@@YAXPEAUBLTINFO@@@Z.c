/*
 * XREFs of ?vTransparentCopyS32D32@@YAXPEAUBLTINFO@@@Z @ 0x1C02997C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x1C02DE8B8 (-pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ.c)
 */

void __fastcall vTransparentCopyS32D32(struct BLTINFO *a1)
{
  int v2; // r14d
  unsigned int (*v3)(struct _XLATEOBJ *, unsigned int); // rax
  int v4; // r9d
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // edi
  _DWORD *v8; // rsi
  _DWORD *v9; // rbp
  _DWORD *v10; // r13
  _DWORD *v11; // r12
  int v12; // r15d
  int v13; // edx
  unsigned int (*v14)(struct _XLATEOBJ *, unsigned int); // [rsp+20h] [rbp-58h]
  int v15; // [rsp+88h] [rbp+10h]
  __int64 v16; // [rsp+98h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 8);
  v16 = *(_QWORD *)a1;
  v15 = *((_DWORD *)a1 + 7);
  v3 = XLATE::pfnXlateBetweenBitfields(*(XLATE **)a1);
  v5 = *((_QWORD *)a1 + 9);
  v14 = v3;
  v6 = *(_QWORD *)(v5 + 128);
  if ( v6 || (*(_DWORD *)(v5 + 112) & 0x100) != 0 )
    v7 = **(_DWORD **)(v6 + 112) | *(_DWORD *)(*(_QWORD *)(v6 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v6 + 112) + 8LL);
  else
    v7 = -1;
  v8 = (_DWORD *)(*((_QWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 12));
  v9 = (_DWORD *)(*((_QWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 14));
  while ( v2 )
  {
    --v2;
    v10 = v8;
    v11 = v9;
    v12 = v4;
    if ( v4 )
    {
      do
      {
        --v12;
        v13 = v7 & *v10++;
        if ( v13 != *((_DWORD *)a1 + 37) )
          *v11 = ((__int64 (__fastcall *)(__int64))v14)(v16);
        ++v11;
      }
      while ( v12 );
      v4 = v15;
    }
    v8 = (_DWORD *)((char *)v8 + *((int *)a1 + 10));
    v9 = (_DWORD *)((char *)v9 + *((int *)a1 + 11));
  }
}
