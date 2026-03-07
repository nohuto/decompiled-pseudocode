__int64 __fastcall ImpAllocate(__int64 a1, char a2, char a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbx

  v6 = (-(__int64)(a2 != 0) & 0xC0) + 64;
  if ( (unsigned int)Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage() )
  {
    v7 = (-(__int64)(a2 != 0) & 0xC0) + 68;
    if ( !a3 )
      v7 = v6;
  }
  else
  {
    v7 = (-(__int64)(a2 != 0) & 0xC0) + 68;
    if ( !a3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
  }
  return ExAllocatePool2(v7, a1, 1836084809LL);
}
