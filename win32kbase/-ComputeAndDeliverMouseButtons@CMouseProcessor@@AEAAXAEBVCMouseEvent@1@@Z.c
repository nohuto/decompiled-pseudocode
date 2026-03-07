void __fastcall CMouseProcessor::ComputeAndDeliverMouseButtons(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // esi
  unsigned int i; // ebp
  int v11; // r9d
  int v12; // eax
  __int64 v13; // [rsp+40h] [rbp-68h] BYREF
  int v14; // [rsp+48h] [rbp-60h]
  _BYTE v15[48]; // [rsp+50h] [rbp-58h] BYREF

  v6 = (**(__int64 (__fastcall ***)(const struct CMouseProcessor::CMouseEvent *))a2)(a2) & 0xF3FF;
  if ( !v6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3402);
  v9 = 1;
  for ( i = *(unsigned __int16 *)(*((_QWORD *)a2 + 1) + 30LL); v6; i >>= 2 )
  {
    if ( (v6 & 3) != 0 )
    {
      if ( (v6 & 1) != 0 )
      {
        if ( !*(_DWORD *)(SGDGetUserSessionState(v5, v4, v7, v8) + 15912) || (v11 = 1, (i & 1) == 0) )
          v11 = 0;
        CMouseProcessor::CButtonEvent::CButtonEvent((__int64)v15, v9, 1, v11, (__int64)a2);
        CMouseProcessor::ProcessMouseButton(this, (const struct CMouseProcessor::CButtonEvent *)v15);
      }
      if ( (v6 & 2) != 0 )
      {
        CMouseProcessor::CButtonEvent::CButtonEvent((__int64)v15, v9, 2, 0, (__int64)a2);
        CMouseProcessor::ProcessMouseButton(this, (const struct CMouseProcessor::CButtonEvent *)v15);
      }
      v5 = *((_QWORD *)a2 + 1);
      if ( (*(_BYTE *)(v5 + 112) & 1) == 0 && *(_DWORD *)(v5 + 108) != 1 )
      {
        v12 = *(_DWORD *)(v5 + 140);
        v13 = *(_QWORD *)(v5 + 132);
        v14 = v12;
        if ( !(unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer((__int64)&v13, v4, 0LL) )
          break;
      }
    }
    v9 *= 2;
    v6 >>= 2;
  }
}
