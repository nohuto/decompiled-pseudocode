void __fastcall CMouseProcessor::PostPendingMouseMoveToInputDest(CMouseProcessor *this, const struct CInputDest *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 PendingMouseMovePoint; // rax
  __int64 v9; // xmm0_8
  const struct CInputDest *v10; // rdx
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+38h] [rbp-20h]
  _BYTE v13[24]; // [rsp+40h] [rbp-18h] BYREF

  if ( QHelper::HasPendingMouseMove(a2, a2) )
  {
    if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment(v5, v4, v6, v7) != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5563);
    PendingMouseMovePoint = QHelper::GetPendingMouseMovePoint((__int64)v13, (__int64)a2);
    v9 = *(_QWORD *)PendingMouseMovePoint;
    LODWORD(PendingMouseMovePoint) = *(_DWORD *)(PendingMouseMovePoint + 8);
    v11 = v9;
    v12 = PendingMouseMovePoint;
    CMouseProcessor::PostMouseMoveToInputDest((__int64 *)this, (__int64)a2, 0LL, (unsigned __int16 *)&v11, 1, 0LL);
    if ( QHelper::HasPendingMouseMove(a2, v10) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5571);
  }
}
