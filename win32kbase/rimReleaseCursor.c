void __fastcall rimReleaseCursor(__int64 a1, int a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // edx
  __int64 v6; // r9

  if ( *(_DWORD *)(a1 + 1032) >= *(_DWORD *)(a1 + 1036) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 761);
  v4 = *(_DWORD *)(a1 + 1036);
  v5 = 0;
  if ( v4 )
  {
    v6 = *(_QWORD *)(a1 + 1024);
    while ( a2 != *(_DWORD *)(v6 + 12LL * v5 + 4) )
    {
      if ( ++v5 >= v4 )
        goto LABEL_10;
    }
    *(_DWORD *)(v6 + 12LL * v5 + 8) = 0;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 1024) + 12LL * *(unsigned int *)(a1 + 1032) + 8) )
      *(_DWORD *)(a1 + 1032) = v5;
  }
LABEL_10:
  if ( *(_DWORD *)(a1 + 1032) >= *(_DWORD *)(a1 + 1036) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 777);
}
