char __fastcall anonymous_namespace_::ScrubDelegatedWindow_tagBWND___(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v4; // rax

  v1 = *(_QWORD *)(a1 + 64);
  if ( !v1 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 39);
    return 0;
  }
  v4 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_DWORD *)(a1 + 72) = 0;
  --*(_DWORD *)(v4 + 1344);
  --*(_DWORD *)(v1 + 1344);
  if ( (int)IsClearDelegationCaptureSupported() >= 0
    && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL) + 144LL) == a1 )
  {
    if ( qword_1C02D66F0 )
      qword_1C02D66F0();
  }
  if ( *(_DWORD *)(v1 + 1344) )
    return 0;
  anonymous_namespace_::ScrubDelegateThread(v1);
  return 1;
}
