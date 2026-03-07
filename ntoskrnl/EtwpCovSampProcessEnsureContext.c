__int64 __fastcall EtwpCovSampProcessEnsureContext(__int64 a1)
{
  unsigned int v1; // ebx
  signed __int64 Pool2; // rax
  __int64 v4; // rdx
  void *v5; // rdi

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 2544) )
  {
    if ( (*(_DWORD *)(a1 + 2172) & 1) != 0 )
    {
      return (unsigned int)-1073741637;
    }
    else
    {
      Pool2 = ExAllocatePool2(256LL, 56LL, 1450669125LL);
      v5 = (void *)Pool2;
      if ( Pool2 )
      {
        *(_OWORD *)Pool2 = 0LL;
        *(_OWORD *)(Pool2 + 16) = 0LL;
        *(_OWORD *)(Pool2 + 32) = 0LL;
        *(_QWORD *)(Pool2 + 48) = 0LL;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2544), Pool2, 0LL) )
        {
          LOBYTE(v4) = 1;
          EtwpCovSampProcessCleanup(Pool2, v4);
          ExFreePoolWithTag(v5, 0x56777445u);
        }
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v1;
}
