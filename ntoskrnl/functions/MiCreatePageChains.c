char *__fastcall MiCreatePageChains(__int64 a1, unsigned int a2, int a3)
{
  int v6; // ebp
  unsigned int v7; // esi
  __int64 v8; // rdi
  char *Pool; // rax
  char *v10; // rcx
  _QWORD *v11; // rax
  char *result; // rax
  int v13[10]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0;
  v13[0] = 0;
  v6 = MiSelectEngine(a2, 0LL, v13, &v14);
  if ( v6 == 3 )
    return 0LL;
  v7 = v14;
  v8 = v14;
  Pool = (char *)MiAllocatePool(64, 40LL * v14 + 112, 0x6D5A694Du);
  v10 = Pool;
  if ( !Pool )
    return 0LL;
  if ( v7 )
  {
    v11 = Pool + 128;
    do
    {
      v11[1] = v11;
      *v11 = v11;
      v11 += 5;
      --v8;
    }
    while ( v8 );
  }
  *((_DWORD *)v10 + 16) = v13[0];
  result = v10;
  *(_QWORD *)v10 = a1;
  *((_DWORD *)v10 + 6) = v7;
  *((_DWORD *)v10 + 17) = a2;
  *((_DWORD *)v10 + 5) = a3;
  *((_DWORD *)v10 + 18) = v6;
  *((_DWORD *)v10 + 20) = 1;
  return result;
}
