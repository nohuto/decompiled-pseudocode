__int64 __fastcall anonymous_namespace_::GetPtiFromInputDest(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 Queue; // rcx
  __int64 v6; // rax

  v2 = 0LL;
  if ( a2 == 2 )
  {
    if ( a1 )
    {
      if ( *(_DWORD *)(a1 + 92) == 2 )
      {
        v6 = *(_QWORD *)(a1 + 80);
        if ( v6 )
          return *(_QWORD *)(v6 + 16);
      }
    }
  }
  else
  {
    if ( a1 )
      Queue = CInputDest::GetQueue(a1, 0LL);
    else
      Queue = gpqForeground;
    if ( Queue )
    {
      if ( a2 )
      {
        if ( a2 != 1 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 188LL);
          return v2;
        }
        v6 = *(_QWORD *)(Queue + 112);
        if ( v6 )
          return *(_QWORD *)(v6 + 16);
      }
      return *(_QWORD *)(Queue + 96);
    }
  }
  return v2;
}
