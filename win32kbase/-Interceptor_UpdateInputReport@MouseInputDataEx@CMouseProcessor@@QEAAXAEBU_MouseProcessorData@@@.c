void __fastcall CMouseProcessor::MouseInputDataEx::Interceptor_UpdateInputReport(
        CMouseProcessor::MouseInputDataEx *this,
        const struct _MouseProcessorData *a2)
{
  __int16 v4; // cx
  int v5; // eax
  _DWORD *v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h]

  if ( *(_WORD *)this == 0xFFFF )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2383);
  if ( (*((_BYTE *)this + 2) & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2386);
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)this, 0x8000) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2389);
  if ( (*((_BYTE *)a2 + 12) & 1) != 0 )
  {
    v4 = *((_WORD *)this + 1) | 1;
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 1);
    v5 = *((_DWORD *)a2 + 2);
    *((_WORD *)this + 1) = v4;
    *((_DWORD *)this + 4) = v5;
    if ( (*((_BYTE *)a2 + 12) & 2) != 0 )
      *((_WORD *)this + 1) = v4 | 2;
    if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)this, 4) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2407);
    *((_DWORD *)this + 18) &= ~8u;
    v6 = (_DWORD *)((char *)a2 + 20);
  }
  else
  {
    v6 = (_DWORD *)((char *)a2 + 20);
    if ( (*((_DWORD *)a2 + 5) & 0x10) != 0 )
    {
      *((_DWORD *)this + 3) = *((_DWORD *)a2 + 1);
      *((_DWORD *)this + 4) = *((_DWORD *)a2 + 2);
      *((_DWORD *)this + 18) = *((_DWORD *)this + 18) & 0xFFFFFFF3 | 4;
    }
  }
  HIDWORD(v7) = *((_DWORD *)a2 + 4);
  LODWORD(v7) = 2;
  *((_QWORD *)this + 10) = v7;
  if ( (*v6 & 2) != 0 )
    *((_DWORD *)this + 18) |= 0x800u;
  if ( (*v6 & 4) != 0 )
    *((_DWORD *)this + 18) |= 2u;
  if ( (*v6 & 0x20) != 0 )
    *((_DWORD *)this + 18) |= 0x2000u;
  if ( (*v6 & 0x40) != 0 )
    *((_DWORD *)this + 18) |= 0x4000u;
}
