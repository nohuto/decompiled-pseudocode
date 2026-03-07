char __fastcall anonymous_namespace_::ScrubDelegatedWindow_tagWND___(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 264);
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 264) = 0LL;
    *(_DWORD *)(a1 + 260) = 0;
    --*(_DWORD *)(v3 + 1344);
    --*(_DWORD *)(v1 + 1344);
    if ( (int)IsClearDelegationCaptureSupported() >= 0
      && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL) + 144LL) == a1 )
    {
      if ( qword_1C02D66F0 )
        qword_1C02D66F0();
    }
    if ( !*(_DWORD *)(v1 + 1344) )
    {
      anonymous_namespace_::ScrubDelegateThread(v1);
      return 1;
    }
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 39LL);
  }
  return 0;
}
