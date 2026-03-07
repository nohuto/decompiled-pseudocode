__int64 __fastcall HalpInterruptStartBlockedProcessors(unsigned int a1)
{
  __int64 result; // rax
  unsigned int v2; // edi
  int i; // esi
  ULONG_PTR v4; // rbx

  result = HalpGetProcessorStateByNtIndex(a1);
  v2 = 0;
  for ( i = *(_DWORD *)(result + 8); v2 < (unsigned int)HalpInterruptProcessorCount; ++v2 )
  {
    v4 = HalpInterruptProcessorState + ((unsigned __int64)v2 << 6);
    if ( *(_BYTE *)(v4 + 56) && *(_DWORD *)(v4 + 60) == i )
    {
      if ( HalpInterruptStartHyperthreadSiblings )
        result = HalpBlkStartBlockedProcessor(v2, *(unsigned int *)(v4 + 8));
      *(_WORD *)(v4 + 12) = 257;
    }
  }
  return result;
}
