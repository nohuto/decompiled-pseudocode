/*
 * XREFs of PopVerifierFlushMemoryBeforeSleep @ 0x140AA46C4
 * Callers:
 *     PoBroadcastSystemState @ 0x140AA38F8 (PoBroadcastSystemState.c)
 * Callees:
 *     MmPerformMemoryListCommand @ 0x140A849F4 (MmPerformMemoryListCommand.c)
 *     MmIsVerifierEnabled @ 0x140AB9E10 (MmIsVerifierEnabled.c)
 */

__int64 PopVerifierFlushMemoryBeforeSleep()
{
  __int64 result; // rax
  __int64 v1; // rbx
  ULONG VerifierFlags; // [rsp+30h] [rbp+8h] BYREF

  VerifierFlags = 0;
  MmIsVerifierEnabled(&VerifierFlags);
  result = (unsigned int)PopSimulate;
  if ( (PopSimulate & 0x80u) != 0 || (VerifierFlags & 2) != 0 )
  {
    v1 = 2LL;
    do
    {
      MmPerformMemoryListCommand();
      MmPerformMemoryListCommand();
      MmPerformMemoryListCommand();
      --v1;
    }
    while ( v1 );
    return MmPerformMemoryListCommand();
  }
  return result;
}
