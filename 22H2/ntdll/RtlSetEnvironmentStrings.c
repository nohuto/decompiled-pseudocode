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

__int64 __fastcall RtlSetEnvironmentStrings(void *Src, size_t Size)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  void *Environment; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  void *EnvBlock; // rax
  void *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  void *v13; // [rsp+50h] [rbp+18h]
  unsigned __int64 v14; // [rsp+58h] [rbp+20h]

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  Environment = ProcessParameters->Environment;
  v14 = RtlSizeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Environment);
  if ( v14 >= Size )
  {
    memmove(Environment, Src, Size);
    ProcessParameters->Environment = Environment;
    ProcessParameters->EnvironmentSize = Size;
    ++ProcessParameters->EnvironmentVersion;
    memset(&RtlpEnvironLookupTable, 0, 0x468uLL);
  }
  RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock, v6, v7);
  if ( v14 >= Size )
    return 0LL;
  EnvBlock = (void *)RtlpAllocateEnvBlock(Size);
  v10 = EnvBlock;
  if ( EnvBlock )
  {
    memmove(EnvBlock, Src, Size);
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    v13 = ProcessParameters->Environment;
    memset(&RtlpEnvironLookupTable, 0, 0x468uLL);
    ProcessParameters->Environment = v10;
    ProcessParameters->EnvironmentSize = Size;
    ++ProcessParameters->EnvironmentVersion;
    RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock, v11, v12);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v13);
    return 0LL;
  }
  return 3221225626LL;
}
