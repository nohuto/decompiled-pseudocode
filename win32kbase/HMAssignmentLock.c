_DWORD *__fastcall HMAssignmentLock(__int64 **a1, int a2)
{
  __int64 *v2; // rdi
  __int64 v3; // rbx

  v2 = a1[1];
  v3 = **a1;
  **a1 = (__int64)v2;
  if ( !v3 || (__int64 *)v3 != v2 )
  {
    if ( v2 )
    {
      if ( (*((_BYTE *)qword_1C02D0E08 + dword_1C02D0E10 * (unsigned int)(unsigned __int16)*(_DWORD *)v2 + 25) & 1) != 0 )
      {
        if ( a2 != 1 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2799LL);
        UserSetLastError(87);
      }
      _InterlockedIncrement((volatile signed __int32 *)v2 + 2);
    }
    if ( v3 && _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 )
      return HMUnlockObjectInternal((_DWORD *)v3);
  }
  return (_DWORD *)v3;
}
