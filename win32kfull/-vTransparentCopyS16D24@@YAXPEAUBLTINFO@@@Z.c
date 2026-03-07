void __fastcall vTransparentCopyS16D24(struct BLTINFO *a1)
{
  int v2; // r14d
  int v3; // r9d
  __int64 v4; // rdx
  int v5; // edi
  _WORD *v6; // rsi
  __int64 v7; // rbp
  _WORD *v8; // r13
  int v9; // r12d
  _BYTE *v10; // r15
  int v11; // edx
  __int64 v12; // rax
  unsigned int (*v13)(struct _XLATEOBJ *, unsigned int); // [rsp+20h] [rbp-58h]
  int v14; // [rsp+88h] [rbp+10h]
  __int64 v15; // [rsp+98h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 8);
  v15 = *(_QWORD *)a1;
  v14 = *((_DWORD *)a1 + 7);
  v13 = XLATE::pfnXlateBetweenBitfields(*(XLATE **)a1);
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 9) + 128LL);
  if ( v4 )
    v5 = **(_DWORD **)(v4 + 112) | *(_DWORD *)(*(_QWORD *)(v4 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v4 + 112) + 8LL);
  else
    LOWORD(v5) = -1;
  v6 = (_WORD *)(*((_QWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 12));
  v7 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14);
  while ( v2 )
  {
    --v2;
    v8 = v6;
    v9 = v3;
    if ( v3 )
    {
      v10 = (_BYTE *)(v7 + 2);
      do
      {
        --v9;
        v11 = (unsigned __int16)(v5 & *v8++);
        if ( v11 != *((_DWORD *)a1 + 37) )
        {
          v12 = ((__int64 (__fastcall *)(__int64))v13)(v15);
          *(v10 - 2) = v12;
          *v10 = BYTE2(v12);
          *(v10 - 1) = BYTE1(v12);
        }
        v10 += 3;
      }
      while ( v9 );
      v3 = v14;
    }
    v6 = (_WORD *)((char *)v6 + *((int *)a1 + 10));
    v7 += *((int *)a1 + 11);
  }
}
