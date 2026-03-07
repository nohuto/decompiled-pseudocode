void *__fastcall IntpAllocateProcessorContext(unsigned __int16 a1, _BYTE *a2)
{
  ULONG ActiveProcessorCount; // eax
  __int64 Pool2; // rax
  void *v5; // rbx
  size_t v6; // rbp
  unsigned __int8 v7; // di
  _BYTE *v8; // rsi
  struct _PROCESSOR_NUMBER v10; // [rsp+30h] [rbp+8h] BYREF

  v10.Group = a1;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0);
  if ( ActiveProcessorCount - 1 > 0xFD )
    IntPartCriticalFailure(0x1001uLL, ActiveProcessorCount);
  *a2 = ActiveProcessorCount;
  Pool2 = ExAllocatePool2(64LL, 2LL * (unsigned __int8)ActiveProcessorCount, 0x5049654Bu);
  v5 = (void *)Pool2;
  if ( Pool2 )
  {
    v6 = (unsigned __int8)*a2;
    v7 = 0;
    if ( (_BYTE)v6 )
    {
      v8 = (_BYTE *)Pool2;
      do
      {
        v10 = 0;
        v10.Number = v7;
        *v8 = v7++;
        v8[1] = IntPartGetProcessorEfficiencyClass(&v10);
        v8 += 2;
      }
      while ( v7 < (unsigned __int8)v6 );
    }
    qsort(v5, v6, 2uLL, IntpProcessorCompareEfficiencyClass);
  }
  return v5;
}
