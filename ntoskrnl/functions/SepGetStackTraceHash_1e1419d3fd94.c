ULONG __fastcall SepGetStackTraceHash(ULONG *a1)
{
  unsigned int v2; // r14d
  ULONG result; // eax
  unsigned __int16 v4; // di
  ULONG v5; // ebx
  ULONG BackTraceHash; // [rsp+38h] [rbp-79h] BYREF
  __int128 MemoryInformation; // [rsp+40h] [rbp-71h] BYREF
  __int64 v8; // [rsp+50h] [rbp-61h]
  PVOID BackTrace[16]; // [rsp+58h] [rbp-59h] BYREF

  BackTraceHash = 0;
  memset(BackTrace, 0, sizeof(BackTrace));
  v2 = 16;
  v8 = 0LL;
  MemoryInformation = 0LL;
  RtlCaptureStackBackTrace(2u, 0x10u, BackTrace, &BackTraceHash);
  result = RtlWalkFrameChain(BackTrace, 0x10u, 1u);
  if ( result <= 0x10 )
  {
    v4 = 0;
    v2 = result;
    if ( !result )
    {
      v5 = BackTraceHash;
      goto LABEL_12;
    }
  }
  else
  {
    v4 = 0;
  }
  v5 = BackTraceHash;
  do
  {
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           BackTrace[v4],
           (MEMORY_INFORMATION_CLASS)6,
           &MemoryInformation,
           0x18uLL,
           0LL) < 0
      || (unsigned __int64)BackTrace[v4] < (unsigned __int64)MemoryInformation )
    {
      v5 += LODWORD(BackTrace[v4]);
    }
    else
    {
      v5 += LODWORD(BackTrace[v4]) - MemoryInformation;
    }
    result = ++v4;
  }
  while ( v4 < v2 );
LABEL_12:
  *a1 = v5;
  return result;
}
