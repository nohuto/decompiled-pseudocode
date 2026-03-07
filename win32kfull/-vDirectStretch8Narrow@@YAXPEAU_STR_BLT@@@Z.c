void __fastcall vDirectStretch8Narrow(struct _STR_BLT *a1)
{
  _BYTE *v2; // r9
  _BYTE *v3; // r8
  int v4; // ebx
  int v5; // ecx
  int v6; // r12d
  unsigned int v7; // r11d
  __int64 v8; // r14
  unsigned int v9; // esi
  unsigned int v10; // r10d
  _BYTE *v11; // rbp
  _BYTE *v12; // rdi
  bool v13; // cf
  int v14; // [rsp+48h] [rbp+8h]
  int v15; // [rsp+50h] [rbp+10h]
  __int64 v16; // [rsp+58h] [rbp+18h]
  __int64 v17; // [rsp+60h] [rbp+20h]

  v2 = (_BYTE *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 7));
  v3 = (_BYTE *)(*(_QWORD *)a1 + *((int *)a1 + 3));
  v4 = *((_DWORD *)a1 + 9);
  v5 = *((_DWORD *)a1 + 8) - *((_DWORD *)a1 + 7);
  v6 = *((_DWORD *)a1 + 13);
  v7 = *((_DWORD *)a1 + 15);
  v14 = *((_DWORD *)a1 + 11);
  v15 = v6;
  if ( v4 > 0 )
  {
    v16 = *((unsigned int *)a1 + 10);
    v17 = *((_DWORD *)a1 + 6) - v5;
    v8 = *((_DWORD *)a1 + 2) * *((_DWORD *)a1 + 12);
    do
    {
      v9 = *((_DWORD *)a1 + 14);
      v10 = v6 + v7;
      v11 = &v2[v5];
      v12 = v3;
      do
      {
        v13 = v14 + v9 < v9;
        *v2 = *v12;
        v9 += v14;
        v12 += v16 + v13;
        ++v2;
      }
      while ( v2 != v11 );
      v3 += v8;
      v6 = v15;
      if ( v10 < v7 )
        v3 += *((int *)a1 + 2);
      v2 += v17;
      v7 = v10;
      --v4;
    }
    while ( v4 );
  }
}
