__int64 PspTlsInitialize()
{
  int v0; // ebx
  __int64 result; // rax
  char v2; // [rsp+30h] [rbp+8h] BYREF

  RtlpFlsInitialize();
  v0 = 0;
  PspTlsPreAllocatedSlotCount = ExGenRandom(0) & 7;
  if ( !PspTlsPreAllocatedSlotCount )
    return 0LL;
  while ( 1 )
  {
    result = PsTlsAlloc(0LL, 0, (__int64)&v2);
    if ( (int)result < 0 )
      break;
    if ( ++v0 >= (unsigned int)PspTlsPreAllocatedSlotCount )
      return 0LL;
  }
  PspTlsPreAllocatedSlotCount = v0;
  return result;
}
