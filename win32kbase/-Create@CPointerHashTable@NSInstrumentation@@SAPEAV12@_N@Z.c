struct NSInstrumentation::CPointerHashTable *__fastcall NSInstrumentation::CPointerHashTable::Create(char a1)
{
  __int64 Pool2; // rax
  __int64 v3; // rbx
  struct NSInstrumentation::CPointerHashTable *result; // rax
  void *v5; // rax
  char v6; // al

  Pool2 = ExAllocatePool2(262LL, 56LL, 944337749LL);
  v3 = Pool2;
  if ( !Pool2 )
    return 0LL;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  *(_DWORD *)(Pool2 + 40) = 0;
  *(_DWORD *)(Pool2 + 44) = 0;
  *(_DWORD *)(Pool2 + 48) = 0;
  *(_BYTE *)(Pool2 + 52) &= ~1u;
  *(_DWORD *)(Pool2 + 24) = 0;
  *(_DWORD *)(Pool2 + 28) = 0;
  *(_QWORD *)Pool2 = 0LL;
  *(_DWORD *)(Pool2 + 16) = 0;
  v5 = (void *)ExAllocatePool2(262LL, 4096LL, 944337749LL);
  *(_QWORD *)(v3 + 32) = v5;
  if ( !v5 )
  {
    NSInstrumentation::CPointerHashTable::Destroy((PVOID)v3);
    return 0LL;
  }
  memset(v5, 0, 0x1000uLL);
  v6 = *(_BYTE *)(v3 + 52);
  *(_DWORD *)(v3 + 48) = 0;
  *(_DWORD *)(v3 + 40) = 256;
  *(_BYTE *)(v3 + 52) = a1 | v6 & 0xFE;
  result = (struct NSInstrumentation::CPointerHashTable *)v3;
  *(_DWORD *)(v3 + 44) = 8;
  return result;
}
