int __fastcall CMouseProcessor::CWheelEvent::GetHitTestAttributes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int v6; // edi
  int v7; // eax
  unsigned int v8; // ebx
  char v9; // cl
  int result; // eax

  v4 = *(_QWORD *)(a1 + 8);
  v6 = *(__int16 *)(v4 + 30);
  if ( !*(_WORD *)(v4 + 30) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7513);
  v7 = *(_DWORD *)(a1 + 28);
  v8 = (((v6 >> 15) & 0xFFFFFFFE) + 3) | 4;
  if ( v7 != 1 )
    v8 = ((v6 >> 15) & 0xFFFFFFFE) + 3;
  v9 = *(_BYTE *)(SGDGetUserSessionState(((v6 >> 15) & 0xFFFFFFFE) + 3, a2, a3, a4) + 13996);
  result = v8 | 0x100;
  if ( (v9 & 4) == 0 )
    return v8;
  return result;
}
