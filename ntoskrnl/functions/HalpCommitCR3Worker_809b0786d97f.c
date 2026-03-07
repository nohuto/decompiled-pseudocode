void __fastcall HalpCommitCR3Worker(PVOID *a1, unsigned int a2)
{
  __int64 v4; // rdi
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v6; // rdx
  LONGLONG v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  void *v10; // rcx

  v4 = 512LL;
  do
  {
    if ( *a1 )
    {
      if ( a2 >= 2 )
        HalpCommitCR3Worker(*a1, a2 - 1);
      PhysicalAddress = MmGetPhysicalAddress(*a1);
      v6 = 1LL;
      v7 = PhysicalAddress.QuadPart & 0xFFFFFFFFFF000LL;
      v8 = 2LL;
      do
      {
        v9 = v6++;
        v10 = (void *)(v7 | v9);
        *a1 = v10;
        v7 = (LONGLONG)v10;
        --v8;
      }
      while ( v8 );
    }
    ++a1;
    --v4;
  }
  while ( v4 );
}
