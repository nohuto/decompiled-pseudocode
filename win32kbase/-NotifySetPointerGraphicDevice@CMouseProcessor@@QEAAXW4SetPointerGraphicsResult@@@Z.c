void __fastcall CMouseProcessor::NotifySetPointerGraphicDevice(__int64 a1, int a2)
{
  __int64 v4; // rbx
  int v5; // edi
  int v6; // edi

  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2085LL);
  v4 = a1 + 3824;
  RIMLockExclusive(v4);
  if ( *(_BYTE *)(v4 + 16) )
  {
    v5 = a2 - 1;
    if ( v5 && (v6 = v5 - 1) != 0 )
    {
      if ( v6 == 1 )
        *(_BYTE *)(v4 + 17) = 1;
    }
    else if ( *(_BYTE *)(v4 + 17) )
    {
      *(_BYTE *)(v4 + 17) = 0;
    }
  }
  *(_QWORD *)(v4 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
}
