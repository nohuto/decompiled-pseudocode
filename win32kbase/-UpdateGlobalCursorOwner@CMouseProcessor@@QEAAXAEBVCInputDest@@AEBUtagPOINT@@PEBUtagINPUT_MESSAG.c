void __fastcall CMouseProcessor::UpdateGlobalCursorOwner(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct tagPOINT *a3,
        const struct tagINPUT_MESSAGE_SOURCE *a4)
{
  _QWORD *v8; // rbx
  _QWORD *updated; // rdi
  struct tagQ *v10; // rsi
  __int64 v11; // rbx

  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5153LL);
  if ( *((_DWORD *)a2 + 23) == 2 )
  {
    v8 = (_QWORD *)*((_QWORD *)a2 + 10);
    if ( v8 )
    {
      updated = (_QWORD *)ApiSetEditionUpdateCursorOnMouseMove(v8, *a3);
      v10 = *(struct tagQ **)(v8[2] + 432LL);
      if ( v10 != gpqCursor )
      {
        if ( gpqCursor )
        {
          if ( *((_QWORD *)gpqCursor + 14) )
          {
            CoalesceInputSourceMouseMoves(gpqCursor, a4);
            EtwTraceWakePump(*(_QWORD *)(*((_QWORD *)gpqCursor + 14) + 16LL), 0LL, 0);
            *((_DWORD *)gpqCursor + 99) |= 0x20u;
            if ( qword_1C02D6700 )
              qword_1C02D6700(*(_QWORD *)(*((_QWORD *)gpqCursor + 14) + 16LL), 2LL);
          }
          if ( updated && *updated != *v8 )
          {
            if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 && qword_1C02D7118 )
              qword_1C02D7118(v8[3], 39LL, *v8);
            v11 = updated[3];
            if ( (*(_DWORD *)(v11 + 48) & 0x5C0) != 0 )
            {
              CBaseProcessor::PostQEventWork(1472LL, **(_QWORD **)(v11 + 184), 1LL);
              *(_DWORD *)(v11 + 48) &= 0xFFFFFA3F;
            }
          }
        }
        gpqCursor = v10;
        if ( qword_1C02D7188 )
          qword_1C02D7188();
        if ( CMouseProcessor::UpdatePointerGraphicDevice::OnGlobalCursorOwnerComputed((CMouseProcessor *)((char *)this + 3824))
          && (int)IsSetPointerSupported() >= 0 )
        {
          if ( qword_1C02D6B60 )
            qword_1C02D6B60(1LL);
        }
      }
    }
  }
}
