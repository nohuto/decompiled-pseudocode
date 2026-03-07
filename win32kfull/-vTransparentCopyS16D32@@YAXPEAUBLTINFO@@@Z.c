void __fastcall vTransparentCopyS16D32(struct BLTINFO *a1)
{
  int v2; // r14d
  int v3; // r9d
  __int64 v4; // rdx
  int v5; // edi
  _WORD *v6; // rsi
  _DWORD *v7; // rbp
  _WORD *v8; // r13
  _DWORD *v9; // r12
  int v10; // r15d
  int v11; // edx
  unsigned int (*v12)(struct _XLATEOBJ *, unsigned int); // [rsp+20h] [rbp-58h]
  int v13; // [rsp+88h] [rbp+10h]
  __int64 v14; // [rsp+98h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 8);
  v14 = *(_QWORD *)a1;
  v13 = *((_DWORD *)a1 + 7);
  v12 = XLATE::pfnXlateBetweenBitfields(*(XLATE **)a1);
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 9) + 128LL);
  if ( v4 )
    v5 = **(_DWORD **)(v4 + 112) | *(_DWORD *)(*(_QWORD *)(v4 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v4 + 112) + 8LL);
  else
    LOWORD(v5) = -1;
  v6 = (_WORD *)(*((_QWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 12));
  v7 = (_DWORD *)(*((_QWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 14));
  while ( v2 )
  {
    --v2;
    v8 = v6;
    v9 = v7;
    v10 = v3;
    if ( v3 )
    {
      do
      {
        --v10;
        v11 = (unsigned __int16)(v5 & *v8++);
        if ( v11 != *((_DWORD *)a1 + 37) )
          *v9 = ((__int64 (__fastcall *)(__int64))v12)(v14);
        ++v9;
      }
      while ( v10 );
      v3 = v13;
    }
    v6 = (_WORD *)((char *)v6 + *((int *)a1 + 10));
    v7 = (_DWORD *)((char *)v7 + *((int *)a1 + 11));
  }
}
