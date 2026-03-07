__int64 __fastcall EtwpAllocatePmcData(__int64 a1)
{
  ULONG MaximumProcessorCount; // eax
  __int64 *Pool2; // rbx
  __int64 v5; // rax

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  Pool2 = (__int64 *)ExAllocatePool2(64LL, 8 * MaximumProcessorCount + 24, 1484223557LL);
  if ( !Pool2 )
    return 3221225495LL;
  v5 = ExAllocatePool2(64LL, 4LL * *(unsigned int *)((char *)&NlsMbCodePageTag + 6), 1484223557LL);
  *Pool2 = v5;
  if ( !v5 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221225495LL;
  }
  *(_QWORD *)(a1 + 1016) = Pool2;
  return 0LL;
}
