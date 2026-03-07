__int64 __fastcall GetMouseSensitivity(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx

  v5 = *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 16008);
  if ( a1 )
  {
    if ( (unsigned int)(*(_DWORD *)(v5 + 104) - 1) > 0x13 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 535);
    *a1 = *(_DWORD *)(v5 + 108);
  }
  return CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity((CMouseAcceleration::MOUSE_SENSITIVITY_INFO *)(v5 + 104));
}
