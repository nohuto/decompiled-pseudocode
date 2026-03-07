__int64 __fastcall PopUpdatePdcSystemIdleState(char a1)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  unsigned int v4; // ebx
  __int64 v5; // rcx

  PopAcquirePowerRequestPushLock(1);
  v4 = 0;
  if ( byte_140C3D6F4 && byte_140C3F253 != a1 )
  {
    byte_140C3F253 = a1;
    if ( a1 )
    {
      qword_140C3F258 = MEMORY[0xFFFFF78000000008];
      PopPowerRequestSetExecutionRequiredTimeoutTimer();
    }
    else
    {
      qword_140C3F258 = 0LL;
      KeCancelTimer2((__int64)&PopPowerRequestExecutionRequiredTimeoutTimer, 0LL, v2, v3);
    }
    PopPowerRequestHandleExecutionEnablementUpdate();
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  if ( qword_140C6ABD0 )
  {
    LOBYTE(v5) = a1;
    return (unsigned int)qword_140C6ABD0(v5);
  }
  return v4;
}
