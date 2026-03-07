__int64 __fastcall CInputDest::GetQueue(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v3; // edx
  __int64 v4; // rax
  __int64 v5; // rax

  v2 = 0LL;
  if ( *(_DWORD *)a1 )
  {
    if ( a2 )
    {
      v3 = a2 - 1;
      if ( v3 )
      {
        if ( v3 == 1 )
          goto LABEL_5;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 670LL);
      }
    }
    else if ( *(_DWORD *)(a1 + 92) == 2 )
    {
LABEL_5:
      if ( *(_DWORD *)(a1 + 92) )
      {
        v4 = *(_QWORD *)(a1 + 80);
        if ( v4 )
          v5 = *(_QWORD *)(v4 + 16);
        else
          v5 = 0LL;
        if ( v5 )
          return *(_QWORD *)(v5 + 432);
      }
    }
    return v2;
  }
  return 0LL;
}
