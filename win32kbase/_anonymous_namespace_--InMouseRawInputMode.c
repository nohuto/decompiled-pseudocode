char __fastcall anonymous_namespace_::InMouseRawInputMode(__int64 a1, __int64 a2, int a3)
{
  __int64 PtiFromInputDest; // rax
  char v5; // bl
  __int64 v6; // rsi
  bool v7; // zf

  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest();
  v5 = 0;
  v6 = PtiFromInputDest;
  if ( PtiFromInputDest && !(unsigned __int8)IsSpatialDelegationEnabledForThread(PtiFromInputDest) )
  {
    if ( !a3 )
    {
      if ( !qword_1C02D6608 || !(unsigned int)qword_1C02D6608(v6) )
        return v5;
      v7 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 424) + 824LL) + 100LL) & 0x100) == 0;
      goto LABEL_8;
    }
    if ( a3 == 1 )
    {
      if ( !qword_1C02D6608 || !(unsigned int)qword_1C02D6608(v6) )
        return v5;
      v7 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 424) + 824LL) + 100LL) & 2) == 0;
LABEL_8:
      if ( !v7 )
        return 1;
      return v5;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 382LL);
  }
  return 0;
}
