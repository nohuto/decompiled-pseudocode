__int64 __fastcall PpmIdleCheckCoordinatedProcessorDependency(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // r8
  __int64 result; // rax

  v7 = -1LL;
  v8 = PpmTestAndLockProcessor(a1, a4, a3);
  v9 = 0LL;
  if ( v8 >= 0 )
  {
    if ( *(_BYTE *)(PpmPlatformStates + 12)
      && *(_DWORD *)(344LL * *(unsigned int *)(a1 + 33660) + *(_QWORD *)(a1 + 33600) + 1392) > a2 )
    {
      v9 = 2147483650LL;
    }
    else if ( KiClockTimerPerCpuTickScheduling )
    {
      v7 = *(_QWORD *)(a1 + 33648);
    }
  }
  else
  {
    v9 = 2147483653LL;
  }
  result = v9;
  *a5 = v7;
  return result;
}
