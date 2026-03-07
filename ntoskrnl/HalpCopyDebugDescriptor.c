char *__fastcall HalpCopyDebugDescriptor(__int64 a1)
{
  unsigned int v2; // ecx
  size_t v3; // rsi
  char *v4; // rax
  char *v5; // rdi
  __int64 v6; // rdx
  _OWORD *v7; // rax
  _OWORD *v8; // rcx
  __int128 v9; // xmm1

  if ( !a1 )
    return 0LL;
  v2 = *(_DWORD *)(a1 + 216) + *(_DWORD *)(a1 + 232) + 272;
  v3 = v2;
  v4 = (char *)(HalpMmLoaderBlock ? HalpMmAllocateMemoryInternal(v2, 1u) : ExAllocatePool2(256LL, v2, 0x646C6148u));
  v5 = v4;
  if ( !v4 )
    return 0LL;
  memset(v4, 0, v3);
  v6 = 2LL;
  v7 = v5;
  v8 = (_OWORD *)a1;
  do
  {
    *v7 = *v8;
    v7[1] = v8[1];
    v7[2] = v8[2];
    v7[3] = v8[3];
    v7[4] = v8[4];
    v7[5] = v8[5];
    v7[6] = v8[6];
    v7 += 8;
    v9 = v8[7];
    v8 += 8;
    *(v7 - 1) = v9;
    --v6;
  }
  while ( v6 );
  *v7 = *v8;
  *((_QWORD *)v5 + 26) = v5 + 272;
  *((_QWORD *)v5 + 28) = &v5[*(unsigned int *)(a1 + 216) + 272];
  memmove(v5 + 272, *(const void **)(a1 + 208), *(unsigned int *)(a1 + 216));
  memmove(*((void **)v5 + 28), *(const void **)(a1 + 224), *(unsigned int *)(a1 + 232));
  return v5;
}
