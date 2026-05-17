/*
 * XREFs of RtlpInitEnvironmentBlock @ 0x18004AFB8
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpWow64ThunkEnvironment32To64 @ 0x18004B06C (RtlpWow64ThunkEnvironment32To64.c)
 *     RtlCreateEnvironmentEx @ 0x18004B220 (RtlCreateEnvironmentEx.c)
 *     RtlpAllocateEnvBlock @ 0x18004BDBC (RtlpAllocateEnvBlock.c)
 *     RtlpGetBlockSizeEx @ 0x18004BDE8 (RtlpGetBlockSizeEx.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     memset @ 0x1800A4600 (memset.c)
 */

__int64 RtlpInitEnvironmentBlock()
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  void *Environment; // rbp
  size_t BlockSize; // rdi
  void *EnvBlock; // rax
  void *v4; // rsi
  __int64 result; // rax
  void *v6; // [rsp+30h] [rbp+8h]

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  Environment = ProcessParameters->Environment;
  if ( Environment )
  {
    BlockSize = RtlpGetBlockSizeEx(ProcessParameters->Environment, 1LL);
    EnvBlock = (void *)RtlpAllocateEnvBlock(BlockSize);
    v4 = EnvBlock;
    if ( !EnvBlock )
      return 3221225626LL;
    memmove(EnvBlock, Environment, BlockSize);
    goto LABEL_4;
  }
  BlockSize = 4LL;
  result = RtlCreateEnvironmentEx(0LL);
  if ( (int)result >= 0 )
  {
    v4 = v6;
LABEL_4:
    ++ProcessParameters->EnvironmentVersion;
    ProcessParameters->Environment = v4;
    ProcessParameters->EnvironmentSize = BlockSize;
    memset(&RtlpEnvironLookupTable, 0, 0x468uLL);
    RtlpWow64ThunkEnvironment32To64();
    return 0LL;
  }
  return result;
}
