__int64 __fastcall rimFindLastDeviceFrame(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx

  v2 = 0LL;
  if ( !*(_QWORD *)(a2 + 192) )
    return *(_QWORD *)(*(_QWORD *)(a2 + 472) + 1064LL);
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
    v3 = *(_QWORD *)(a2 + 24);
  else
    v3 = *(_QWORD *)(a2 + 16);
  v4 = a1 + 744;
  v5 = *(_QWORD *)(v4 + 8);
  do
  {
    if ( v5 == v4 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 712);
      return v2;
    }
    v6 = v5 - 8;
    v5 = *(_QWORD *)(v5 + 8);
  }
  while ( *(_QWORD *)(v6 + 32) != v3 );
  return v6;
}
