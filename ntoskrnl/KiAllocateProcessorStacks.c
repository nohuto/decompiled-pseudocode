__int64 __fastcall KiAllocateProcessorStacks(__int64 a1, unsigned int a2)
{
  __int64 KernelStack; // rax
  unsigned int v5; // esi
  __int64 result; // rax
  void *IndependentPages; // rax
  unsigned int v8; // esi
  __int64 v9; // rbp

  KernelStack = MmCreateKernelStack(0, a2, 0LL);
  *(_QWORD *)(a1 + 64) = KernelStack;
  if ( KernelStack
    && (unsigned __int8)MmAllocateIsrStack(a1 + 72, a2)
    && (unsigned __int8)MmAllocateIsrStack(a1 + 80, a2) )
  {
    v5 = 1;
    while ( (unsigned __int8)MmAllocateIsrStack(a1 + 8 * (v5 + 11LL), a2) )
    {
      if ( ++v5 > 4 )
      {
        if ( !(_BYTE)KiKernelCetEnabled )
          return 0LL;
        result = KiCreateKernelShadowStack(0, 4, 0, a2, a1 + 136, a1 + 128);
        if ( (int)result >= 0 )
        {
          IndependentPages = (void *)MmAllocateIndependentPagesEx(4096LL, a2, -1LL, 1LL);
          *(_QWORD *)(a1 + 224) = IndependentPages;
          if ( !IndependentPages )
            return 3221225495LL;
          memset(IndependentPages, 0, 0x1000uLL);
          v8 = 1;
          while ( 1 )
          {
            v9 = v8;
            result = KiCreateKernelShadowStack(0, 3, 0, a2, a1 + 184 + 8LL * v8, a1 + 144 + 8LL * v8);
            if ( (int)result < 0 )
              break;
            ++v8;
            *(_QWORD *)(*(_QWORD *)(a1 + 224) + 8 * v9) = *(_QWORD *)(a1 + 8 * v9 + 144);
            if ( v8 > 4 )
              return 0LL;
          }
        }
        return result;
      }
    }
  }
  return 3221225495LL;
}
