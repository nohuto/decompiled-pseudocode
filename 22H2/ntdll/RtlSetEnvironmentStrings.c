/*
 * XREFs of RtlSetEnvironmentStrings @ 0x1800831C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSizeHeap @ 0x180024160 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpAllocateEnvBlock @ 0x18004BDBC (RtlpAllocateEnvBlock.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     memset @ 0x1800A4600 (memset.c)
 */

NTSTATUS __cdecl RtlSetEnvironmentStrings(PCWCHAR NewEnvironment, SIZE_T NewEnvironmentSize)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  void *Environment; // rsi
  PVOID EnvBlock; // rax
  PVOID v8; // rsi
  PVOID BaseAddress; // [rsp+50h] [rbp+18h]
  SIZE_T v10; // [rsp+58h] [rbp+20h]

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  Environment = ProcessParameters->Environment;
  v10 = RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, Environment);
  if ( v10 >= NewEnvironmentSize )
  {
    memmove(Environment, NewEnvironment, NewEnvironmentSize);
    ProcessParameters->Environment = Environment;
    ProcessParameters->EnvironmentSize = NewEnvironmentSize;
    ++ProcessParameters->EnvironmentVersion;
    memset(&RtlpEnvironLookupTable, 0, 0x468uLL);
  }
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  if ( v10 >= NewEnvironmentSize )
    return 0;
  EnvBlock = RtlpAllocateEnvBlock(NewEnvironmentSize);
  v8 = EnvBlock;
  if ( EnvBlock )
  {
    memmove(EnvBlock, NewEnvironment, NewEnvironmentSize);
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    BaseAddress = ProcessParameters->Environment;
    memset(&RtlpEnvironLookupTable, 0, 0x468uLL);
    ProcessParameters->Environment = v8;
    ProcessParameters->EnvironmentSize = NewEnvironmentSize;
    ++ProcessParameters->EnvironmentVersion;
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    return 0;
  }
  return -1073741670;
}
