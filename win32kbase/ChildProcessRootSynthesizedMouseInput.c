void ChildProcessRootSynthesizedMouseInput()
{
  char **Instance; // rsi
  char *v1; // rdi
  __int64 v2; // rax
  unsigned int v3; // r14d
  __int64 v4; // r15
  unsigned __int64 i; // rbp
  __int64 v6; // rcx
  struct tagPOINT v7; // [rsp+30h] [rbp-48h] BYREF
  __int128 v8; // [rsp+38h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-30h]
  __int64 v10; // [rsp+50h] [rbp-28h]

  Instance = (char **)InputVirtualization::RootSynthesizedMouseList::GetInstance();
  CPushLock::AcquireLockExclusive((CPushLock *)(Instance + 2));
  while ( 1 )
  {
    v1 = *Instance;
    if ( *Instance == (char *)Instance )
      break;
    if ( *((char ***)v1 + 1) != Instance || (v2 = *(_QWORD *)v1, *(char **)(*(_QWORD *)v1 + 8LL) != v1) )
      __fastfail(3u);
    *Instance = (char *)v2;
    v3 = 0;
    *(_QWORD *)(v2 + 8) = Instance;
    v4 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    for ( i = gliQpcFreq.QuadPart * v4 / 0x3E8uLL; v3 < *((_DWORD *)v1 + 8); ++v3 )
    {
      v10 = 0LL;
      v8 = 0LL;
      v9 = *((_QWORD *)v1 + 3);
      v6 = *((_QWORD *)v1 + 2);
      v7 = gptCursorAsync;
      SynthesizePTPMouseInput(
        v6,
        (__int64)&v1[28 * v3 + 36],
        v4,
        i,
        *(_DWORD *)&v1[28 * v3 + 60],
        (struct PTPMouseInputData *)&v7);
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
  }
  CPushLock::ReleaseLock((CPushLock *)(Instance + 2));
}
