void __fastcall vTransparentCopyS32D24(struct BLTINFO *a1)
{
  int v2; // r14d
  unsigned int (*v3)(struct _XLATEOBJ *, unsigned int); // rax
  int v4; // r9d
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // edi
  _DWORD *v8; // rsi
  __int64 v9; // rbp
  _DWORD *v10; // r13
  int v11; // r12d
  _BYTE *v12; // r15
  int v13; // edx
  __int64 v14; // rax
  unsigned int (*v15)(struct _XLATEOBJ *, unsigned int); // [rsp+20h] [rbp-58h]
  int v16; // [rsp+88h] [rbp+10h]
  __int64 v17; // [rsp+98h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 8);
  v17 = *(_QWORD *)a1;
  v16 = *((_DWORD *)a1 + 7);
  v3 = XLATE::pfnXlateBetweenBitfields(*(XLATE **)a1);
  v5 = *((_QWORD *)a1 + 9);
  v15 = v3;
  v6 = *(_QWORD *)(v5 + 128);
  if ( v6 || (*(_DWORD *)(v5 + 112) & 0x100) != 0 )
    v7 = **(_DWORD **)(v6 + 112) | *(_DWORD *)(*(_QWORD *)(v6 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v6 + 112) + 8LL);
  else
    v7 = -1;
  v8 = (_DWORD *)(*((_QWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 12));
  v9 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14);
  while ( v2 )
  {
    --v2;
    v10 = v8;
    v11 = v4;
    if ( v4 )
    {
      v12 = (_BYTE *)(v9 + 2);
      do
      {
        --v11;
        v13 = v7 & *v10++;
        if ( v13 != *((_DWORD *)a1 + 37) )
        {
          v14 = ((__int64 (__fastcall *)(__int64))v15)(v17);
          *((_WORD *)v12 - 1) = v14;
          *v12 = BYTE2(v14);
        }
        v12 += 3;
      }
      while ( v11 );
      v4 = v16;
    }
    v8 = (_DWORD *)((char *)v8 + *((int *)a1 + 10));
    v9 += *((int *)a1 + 11);
  }
}
