__int64 _GetStackTraceSum(void)
{
  unsigned int v0; // ebx
  unsigned int v1; // ebp
  ULONG v2; // eax
  unsigned __int16 v3; // di
  int v4; // eax
  __int128 MemoryInformation; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v7; // [rsp+40h] [rbp-B8h]
  PVOID Callers[16]; // [rsp+50h] [rbp-A8h] BYREF

  v0 = 0;
  memset(Callers, 0, sizeof(Callers));
  v7 = 0LL;
  MemoryInformation = 0LL;
  v1 = 16;
  v2 = RtlWalkFrameChain(Callers, 0x10u, 1u);
  if ( v2 <= 0x10 )
  {
    v3 = 0;
    v1 = v2;
    if ( !v2 )
      return v0;
  }
  else
  {
    v3 = 0;
  }
  do
  {
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           Callers[v3],
           MemoryWorkingSetExList|MemorySectionName,
           &MemoryInformation,
           0x18uLL,
           0LL) < 0
      || (unsigned __int64)Callers[v3] < (unsigned __int64)MemoryInformation )
    {
      v4 = (int)Callers[v3];
    }
    else
    {
      v4 = LODWORD(Callers[v3]) - MemoryInformation;
    }
    ++v3;
    v0 += v4;
  }
  while ( v3 < v1 );
  return v0;
}
