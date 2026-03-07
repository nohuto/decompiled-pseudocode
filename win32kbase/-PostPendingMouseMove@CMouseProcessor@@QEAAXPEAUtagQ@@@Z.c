void __fastcall CMouseProcessor::PostPendingMouseMove(CMouseProcessor *this, struct tagQ *a2)
{
  int v4; // eax
  __int64 v5; // [rsp+28h] [rbp-30h] BYREF
  int v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+40h] [rbp-18h]

  if ( (*((_DWORD *)a2 + 99) & 0x20) != 0 )
  {
    if ( qword_1C02D7280 && (unsigned int)qword_1C02D7280() )
    {
      v4 = *((_DWORD *)a2 + 50);
      v7 = *((_QWORD *)a2 + 24);
      v8 = v4;
    }
    else
    {
      v8 = 18;
      v7 = *((_QWORD *)gpsi + 620);
    }
    v5 = v7;
    v6 = v8;
    CMouseProcessor::PostMouseMoveToQ(this, a2, (const struct tagLOGICALPOINT *)&v5);
    if ( (*((_DWORD *)a2 + 99) & 0x20) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1640LL);
  }
}
