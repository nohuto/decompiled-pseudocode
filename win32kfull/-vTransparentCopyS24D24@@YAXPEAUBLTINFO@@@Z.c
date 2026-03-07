void __fastcall vTransparentCopyS24D24(struct BLTINFO *a1)
{
  int v1; // r13d
  int v3; // ebp
  __int64 v4; // rdi
  __int64 v5; // rsi
  int v6; // r12d
  _BYTE *v7; // r14
  unsigned __int8 *v8; // r15
  int v9; // eax
  int v10; // edx
  __int64 v11; // rax
  int v12; // [rsp+78h] [rbp+10h]
  __int64 v13; // [rsp+80h] [rbp+18h]
  unsigned int (*v14)(struct _XLATEOBJ *, unsigned int); // [rsp+88h] [rbp+20h]

  v1 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 8);
  v13 = *(_QWORD *)a1;
  v12 = v1;
  v14 = XLATE::pfnXlateBetweenBitfields(*(XLATE **)a1);
  v4 = *((_QWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 12);
  v5 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14);
  while ( v3 )
  {
    --v3;
    v6 = v1;
    if ( v1 )
    {
      v7 = (_BYTE *)(v5 + 2);
      v8 = (unsigned __int8 *)(v4 + 1);
      do
      {
        v9 = *v8;
        --v6;
        v10 = v8[1];
        v8 += 3;
        if ( (*(v8 - 4) | ((v9 | (v10 << 8)) << 8)) != *((_DWORD *)a1 + 37) )
        {
          v11 = ((__int64 (__fastcall *)(__int64))v14)(v13);
          *(v7 - 2) = v11;
          *v7 = BYTE2(v11);
          *(v7 - 1) = BYTE1(v11);
        }
        v7 += 3;
      }
      while ( v6 );
      v1 = v12;
    }
    v4 += *((int *)a1 + 10);
    v5 += *((int *)a1 + 11);
  }
}
