struct NSInstrumentation::CPointerHashTable *__fastcall NSInstrumentation::CPointerHashTable::Create()
{
  __int64 Pool2; // rax
  __int64 v1; // rbx
  void *v2; // rax
  struct NSInstrumentation::CPointerHashTable *result; // rax

  Pool2 = ExAllocatePool2(262LL, 56LL, 944337749LL);
  v1 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_DWORD *)(Pool2 + 40) = 0;
    *(_DWORD *)(Pool2 + 44) = 0;
    *(_DWORD *)(Pool2 + 48) = 0;
    *(_BYTE *)(Pool2 + 52) &= ~1u;
    *(_DWORD *)(Pool2 + 24) = 0;
    *(_DWORD *)(Pool2 + 28) = 0;
    *(_QWORD *)Pool2 = 0LL;
    *(_DWORD *)(Pool2 + 16) = 0;
    v2 = (void *)ExAllocatePool2(262LL, 4096LL, 944337749LL);
    *(_QWORD *)(v1 + 32) = v2;
    if ( v2 )
    {
      memset_0(v2, 0, 0x1000uLL);
      *(_DWORD *)(v1 + 48) = 0;
      result = (struct NSInstrumentation::CPointerHashTable *)v1;
      *(_BYTE *)(v1 + 52) &= ~1u;
      *(_DWORD *)(v1 + 40) = 256;
      *(_DWORD *)(v1 + 44) = 8;
      return result;
    }
    NSInstrumentation::CPointerHashTable::Destroy((_QWORD *)v1);
  }
  return 0LL;
}
