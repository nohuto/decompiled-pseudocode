void __fastcall DX_MD5Final(struct MD5_CTX *a1)
{
  int v1; // eax
  unsigned int v3; // edx
  unsigned int v4; // r8d
  unsigned int v5; // edi
  int *v6; // r9
  __int64 v7; // r8
  __int64 v8; // r10
  __int64 v9; // rax
  int v10; // edx
  char *v11; // rdx
  __int64 v12; // r8
  char v13; // al
  __int64 v14; // rcx
  _BYTE v15[56]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v16; // [rsp+58h] [rbp-20h]
  int v17; // [rsp+5Ch] [rbp-1Ch]

  v1 = *((_DWORD *)a1 + 1);
  v16 = *(_DWORD *)a1;
  v3 = (v16 >> 3) & 0x3F;
  v17 = v1;
  v4 = 56 - v3;
  if ( v3 >= 0x38 )
    v4 = 120 - v3;
  DX_MD5Update(a1, &byte_1C013B0F0, v4);
  v5 = 2;
  v6 = (int *)v15;
  LODWORD(v7) = 2;
  v8 = 14LL;
  do
  {
    v9 = (unsigned int)(v7 - 2);
    v10 = (*((unsigned __int8 *)a1 + (unsigned int)(v7 - 1) + 24) | ((*((unsigned __int8 *)a1 + (unsigned int)v7 + 24) | (*((unsigned __int8 *)a1 + (unsigned int)(v7 + 1) + 24) << 8)) << 8)) << 8;
    v7 = (unsigned int)(v7 + 4);
    *v6++ = *((unsigned __int8 *)a1 + v9 + 24) | v10;
    --v8;
  }
  while ( v8 );
  TransformMD5((char *)a1 + 8, v15, v7, v6);
  v11 = (char *)a1 + 9;
  v12 = 4LL;
  do
  {
    *((_BYTE *)a1 + v5 + 86) = *(v11 - 1);
    v13 = *v11;
    v11 += 4;
    *((_BYTE *)a1 + v5 + 87) = v13;
    *((_BYTE *)a1 + v5 + 88) = *(v11 - 3);
    v14 = v5 + 1;
    v5 += 4;
    *((_BYTE *)a1 + v14 + 88) = *(v11 - 2);
    --v12;
  }
  while ( v12 );
}
