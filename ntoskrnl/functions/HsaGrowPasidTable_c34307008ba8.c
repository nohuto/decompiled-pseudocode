__int64 __fastcall HsaGrowPasidTable(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rbx
  __int64 Pool2; // rax
  unsigned int v8; // esi
  unsigned int v9; // edi
  void *v10; // rax

  if ( a3 >= 0x40000 )
    return 3221225659LL;
  v6 = *(_QWORD **)(a2 + 40);
  if ( !v6 )
  {
    Pool2 = ExAllocatePool2(64LL, 0x2000LL, 1634492744LL);
    *(_QWORD *)(a2 + 40) = Pool2;
    v6 = (_QWORD *)Pool2;
    if ( !Pool2 )
      return 3221225626LL;
  }
  v8 = 0;
  v9 = a3 >> 9;
  do
  {
    if ( (*(_BYTE *)v6 & 1) == 0 )
    {
      v10 = (void *)ExAllocatePool2(64LL, 4096LL, 1634492744LL);
      if ( !v10 )
        return 3221225626LL;
      v6[512] = v10;
      *v6 = *v6 ^ (*v6 ^ MmGetPhysicalAddress(v10).QuadPart & 0xFFFFFFFFFFFFF000uLL) & 0xFFFFFFFFFF000LL | 1;
    }
    ++v8;
    ++v6;
  }
  while ( v8 <= v9 );
  return 0LL;
}
