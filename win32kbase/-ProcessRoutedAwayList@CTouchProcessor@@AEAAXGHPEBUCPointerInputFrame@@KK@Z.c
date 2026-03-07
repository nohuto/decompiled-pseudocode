void __fastcall CTouchProcessor::ProcessRoutedAwayList(
        struct _KTHREAD **this,
        unsigned __int16 a2,
        int a3,
        const struct CPointerInputFrame *a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 **v10; // rax
  _QWORD *v11; // rax
  __int64 *v12[16]; // [rsp+40h] [rbp-118h] BYREF
  _BYTE v13[128]; // [rsp+C0h] [rbp-98h] BYREF

  if ( a3 && !a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10590);
  CTouchProcessor::PopRoutedAwayTarget(this, (__int64)v12, a2);
  while ( LODWORD(v12[0]) )
  {
    if ( a3 )
    {
      if ( a4 )
      {
        v10 = (__int64 **)CInputDest::CInputDest((CInputDest *)v13, v12);
        CTouchProcessor::GenerateRoutedReleasedMessage(
          (__int64)this,
          (__int64)a4,
          a5,
          a6,
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)a4 + 32) + 360LL), 4),
          -__CFSHR__(*(_DWORD *)(*((_QWORD *)a4 + 32) + 360LL), 5),
          v10);
      }
    }
    v11 = (_QWORD *)CTouchProcessor::PopRoutedAwayTarget(this, (__int64)v13, a2);
    CInputDest::operator=((__int64)v12, v11);
    CInputDest::SetEmpty((CInputDest *)v13);
  }
  CInputDest::SetEmpty((CInputDest *)v12);
}
