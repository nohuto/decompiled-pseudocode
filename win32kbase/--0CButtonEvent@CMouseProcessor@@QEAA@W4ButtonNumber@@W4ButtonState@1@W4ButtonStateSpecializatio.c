__int64 __fastcall CMouseProcessor::CButtonEvent::CButtonEvent(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v6; // r10
  int v7; // eax
  void *v8; // rax

  v6 = *(_QWORD *)(a5 + 8);
  *(_QWORD *)a1 = &CMouseProcessor::CButtonEvent::`vftable';
  *(_QWORD *)(a1 + 8) = v6;
  *(_DWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 28) = a2;
  *(_DWORD *)(a1 + 32) = a3;
  *(_DWORD *)(a1 + 36) = a4;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 16) = 2;
  if ( !(_DWORD)a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7272);
  if ( ((*(_DWORD *)(a1 + 24) - 1) & *(_DWORD *)(a1 + 24)) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7275);
  v7 = *(_DWORD *)(a1 + 32);
  if ( v7 != 2 && v7 != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7277);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 112LL) & 0x400) == 0 )
  {
    LOBYTE(a2) = *(_DWORD *)(a1 + 32) == 2;
    if ( (unsigned __int8)anonymous_namespace_::IsMouseButtonSwapped(*(unsigned int *)(a1 + 24), a2) )
      *(_DWORD *)(a1 + 24) ^= 3u;
  }
  if ( *(_QWORD *)(a1 + 40) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7284);
  switch ( *(_DWORD *)(a1 + 24) )
  {
    case 1:
      v8 = &CMouseProcessor::CButtonEvent::_dependentInfo;
      goto LABEL_24;
    case 2:
      v8 = &unk_1C02A5C08;
      goto LABEL_24;
    case 4:
      v8 = &unk_1C02A5C20;
      goto LABEL_24;
    case 8:
      v8 = &unk_1C02A5C38;
      goto LABEL_24;
    case 0x10:
      v8 = &unk_1C02A5C50;
LABEL_24:
      *(_QWORD *)(a1 + 40) = v8;
      return a1;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7314);
  return a1;
}
