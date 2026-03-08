/*
 * XREFs of ?vTransparentCopyS24D16@@YAXPEAUBLTINFO@@@Z @ 0x1C0299190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x1C02DE8B8 (-pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ.c)
 */

void __fastcall vTransparentCopyS24D16(struct BLTINFO *a1)
{
  int v1; // r13d
  int v3; // ebp
  __int64 v4; // rsi
  _WORD *v5; // rdi
  _WORD *v6; // r14
  int v7; // r12d
  unsigned __int8 *v8; // r15
  int v9; // eax
  int v10; // edx
  int v11; // [rsp+78h] [rbp+10h]
  __int64 v12; // [rsp+80h] [rbp+18h]
  unsigned int (*v13)(struct _XLATEOBJ *, unsigned int); // [rsp+88h] [rbp+20h]

  v1 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 8);
  v12 = *(_QWORD *)a1;
  v11 = v1;
  v13 = XLATE::pfnXlateBetweenBitfields(*(XLATE **)a1);
  v4 = *((_QWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 12);
  v5 = (_WORD *)(*((_QWORD *)a1 + 2) + 2 * *((_DWORD *)a1 + 14));
  while ( v3 )
  {
    --v3;
    v6 = v5;
    v7 = v1;
    if ( v1 )
    {
      v8 = (unsigned __int8 *)(v4 + 1);
      do
      {
        v9 = *v8;
        --v7;
        v10 = v8[1];
        v8 += 3;
        if ( (*(v8 - 4) | ((v9 | (v10 << 8)) << 8)) != *((_DWORD *)a1 + 37) )
          *v6 = ((__int64 (__fastcall *)(__int64))v13)(v12);
        ++v6;
      }
      while ( v7 );
      v1 = v11;
    }
    v4 += *((int *)a1 + 10);
    v5 = (_WORD *)((char *)v5 + *((int *)a1 + 11));
  }
}
