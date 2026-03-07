__int64 __fastcall NVMePowerActive(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r8

  result = *(_DWORD *)(a1 + 1880) ^ (*(_DWORD *)(a1 + 1880) ^ (4 * *(unsigned __int8 *)(a2 + 20))) & 4u;
  *(_DWORD *)(a1 + 1880) = result;
  if ( *(_BYTE *)(a2 + 20) )
  {
    if ( (result & 0x20) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 1920);
      *(_DWORD *)(a1 + 1880) = result & 0xFFFFFFDF;
      StorPortExtendedFunction(33LL, a1, v4, NVMeFStateIdleTimerCallback);
    }
    result = StorPortExtendedFunction(51LL, a1, 0LL, 0LL);
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 1928), 0) )
    {
      result = NVMePerfStateTransition(a1);
      if ( !(_BYTE)result )
        *(_DWORD *)(a1 + 1928) &= ~1u;
    }
  }
  else if ( *(_BYTE *)(a1 + 1889) > 1u )
  {
    NVMeUpdateResumeLatencyTolerance();
    return NVMeSetFStateIdleTimer(a1);
  }
  return result;
}
