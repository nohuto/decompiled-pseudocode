void __fastcall vDirectStretch32(struct _STR_BLT *a1)
{
  __int64 v1; // r8
  int v3; // r14d
  int v4; // r9d
  int v5; // r11d
  __int64 v6; // rbp
  int v7; // edx
  int v8; // ebx
  unsigned int v9; // esi
  _DWORD *v10; // rax
  int v11; // r8d
  int v12; // r10d
  _DWORD *v13; // rcx
  __int64 v14; // r12
  __int64 v15; // r8
  unsigned int v16; // ecx
  _DWORD *v17; // r10
  unsigned int v18; // edi
  _DWORD *v19; // r9
  unsigned int v20; // [rsp+50h] [rbp+8h]
  int v21; // [rsp+58h] [rbp+10h]
  int *v22; // [rsp+60h] [rbp+18h]
  __int64 v23; // [rsp+68h] [rbp+20h]

  v1 = *((int *)a1 + 7);
  v3 = *((_DWORD *)a1 + 9);
  v4 = *((_DWORD *)a1 + 8) - v1;
  v5 = *((_DWORD *)a1 + 13);
  v6 = *(_QWORD *)a1 + 4LL * *((int *)a1 + 3);
  v7 = 0;
  v8 = *((_DWORD *)a1 + 11);
  v9 = *((_DWORD *)a1 + 15);
  v21 = v5;
  v10 = (_DWORD *)(*((_QWORD *)a1 + 2) + 4 * v1);
  v11 = *((_DWORD *)a1 + 12);
  v20 = *((_DWORD *)a1 + 10);
  v12 = *((_DWORD *)a1 + 6) - 4 * v4;
  if ( v3 > 0 )
  {
    v13 = (_DWORD *)((char *)a1 + 8);
    v22 = (int *)((char *)a1 + 8);
    if ( v11 )
      v7 = *v13 * v11;
    else
      v22 = (int *)((char *)a1 + 8);
    v14 = v12;
    v15 = 4LL * v4;
    v23 = v15;
    do
    {
      v16 = *((_DWORD *)a1 + 14);
      v17 = (_DWORD *)((char *)v10 + v15);
      v18 = v5 + v9;
      v19 = (_DWORD *)v6;
      if ( v10 != (_DWORD *)((char *)v10 + v15) )
      {
        do
        {
          *v10++ = *v19;
          v19 += (v8 + v16 < v16) + (unsigned __int64)v20;
          v16 += v8;
        }
        while ( v10 != v17 );
        v15 = v23;
        v5 = v21;
      }
      v6 += v7;
      if ( v18 < v9 )
        v6 += *v22;
      v10 = (_DWORD *)((char *)v10 + v14);
      v9 = v18;
      --v3;
    }
    while ( v3 );
  }
}
