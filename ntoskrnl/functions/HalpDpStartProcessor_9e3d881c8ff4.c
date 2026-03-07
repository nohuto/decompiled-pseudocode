__int64 __fastcall HalpDpStartProcessor(ULONG_PTR BugCheckParameter2, _DWORD *a2, __int64 a3, unsigned int a4)
{
  int v4; // ebx
  ULONG_PTR v5; // rsi
  ULONG_PTR MaximumRegisteredProcessorCount; // r14
  unsigned int v10; // ecx
  __int64 result; // rax

  v4 = 0;
  v5 = (unsigned int)BugCheckParameter2;
  MaximumRegisteredProcessorCount = (unsigned int)HalpQueryMaximumRegisteredProcessorCount();
  if ( (int)HalGetProcessorIdByNtNumber((unsigned int)v5) < 0 )
    KeBugCheckEx(0x5Cu, 0x2001uLL, (unsigned int)v5, (unsigned int)MaximumRegisteredProcessorCount, 0LL);
  v10 = 0;
  if ( a4 )
  {
    while ( *a2 )
    {
      ++v10;
      ++a2;
      if ( v10 >= a4 )
        goto LABEL_8;
    }
    v4 = *(_DWORD *)(a3 + 4LL * v10);
  }
LABEL_8:
  if ( v10 == a4 )
    KeBugCheckEx(0x5Cu, 0x2001uLL, v5, 0LL, 1uLL);
  result = HalpInterruptStartProcessor(v5, v4, 3, (const void *)(HalpHiberProcState + 1472 * v5));
  if ( (_DWORD)result != 4 )
    KeBugCheckEx(0x5Cu, 0x2001uLL, v5, MaximumRegisteredProcessorCount, 2uLL);
  return result;
}
