__int64 __fastcall HalpBlkAllocatePageTablePage(char a1)
{
  int v1; // eax
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // rbx
  void *v5; // rax
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  v1 = 0;
  if ( a1 )
    v1 = -1;
  LODWORD(v7) = v1;
  v2 = HalpAllocPhysicalMemory(HalpMmLoaderBlock, (unsigned __int64)&v7 & -(__int64)(a1 != 0), 1u);
  v4 = v2;
  if ( v2 )
  {
    LOBYTE(v3) = 1;
    v5 = (void *)HalpMap(v2, 1LL, 1u, v3, 4u);
    if ( v5 )
      memset(v5, 0, 0x1000uLL);
    else
      return 0LL;
  }
  return v4;
}
