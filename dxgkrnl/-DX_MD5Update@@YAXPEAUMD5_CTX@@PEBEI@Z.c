void __fastcall DX_MD5Update(struct MD5_CTX *a1, const unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // r8
  int *v10; // r9
  __int64 v11; // r10
  __int64 v12; // rax
  int v13; // edx
  _BYTE v14[64]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(_DWORD *)a1;
  v6 = a3;
  v7 = (*(_DWORD *)a1 >> 3) & 0x3F;
  v8 = v3 + 8 * a3;
  if ( v8 < v3 )
    ++*((_DWORD *)a1 + 1);
  *(_DWORD *)a1 = v8;
  *((_DWORD *)a1 + 1) += a3 >> 29;
  while ( v6 )
  {
    --v6;
    *((_BYTE *)a1 + v7 + 24) = *a2++;
    if ( ++v7 == 64 )
    {
      LODWORD(v9) = 2;
      v10 = (int *)v14;
      v11 = 16LL;
      do
      {
        v12 = (unsigned int)(v9 - 2);
        v13 = (*((unsigned __int8 *)a1 + (unsigned int)(v9 - 1) + 24) | ((*((unsigned __int8 *)a1 + (unsigned int)v9 + 24) | (*((unsigned __int8 *)a1 + (unsigned int)(v9 + 1) + 24) << 8)) << 8)) << 8;
        v9 = (unsigned int)(v9 + 4);
        *v10++ = *((unsigned __int8 *)a1 + v12 + 24) | v13;
        --v11;
      }
      while ( v11 );
      TransformMD5((char *)a1 + 8, v14, v9, v10);
      v7 = 0LL;
    }
  }
}
