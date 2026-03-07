void __fastcall lambda_1fab3903b5a8bfcd713af340c69f2789_::operator()(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // rbx
  unsigned int i; // esi
  unsigned int v5; // edi

  v3 = *(_QWORD *)(a2 + 424);
  for ( i = *a3; v3; v3 = *(_QWORD *)(v3 + 40) )
  {
    v5 = i;
    if ( (*(_DWORD *)(v3 + 188) & 4) != 0 && i == 2 && !(unsigned int)RIMIsWakeCapableDevice(v3) )
      v5 = 1;
    if ( (unsigned int)RIMSetDeviceInputMode((struct RIMDEV *)v3, v5) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 378LL);
  }
}
