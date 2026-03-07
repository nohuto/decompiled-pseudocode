void __fastcall CMouseProcessor::CMouseQueue::_Dequeue(
        CMouseProcessor::CMouseQueue *this,
        struct CMouseProcessor::RawMouseEvent *a2)
{
  char *v4; // rcx
  char *v5; // rbx

  if ( !*((_WORD *)this + 1345) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6547LL);
  v4 = (char *)this + 168 * ((*((_BYTE *)this + 2688) - *((_BYTE *)this + 2690) + 1) & 0xF);
  *(_OWORD *)a2 = *(_OWORD *)v4;
  *((_OWORD *)a2 + 1) = *((_OWORD *)v4 + 1);
  *((_OWORD *)a2 + 2) = *((_OWORD *)v4 + 2);
  *((_OWORD *)a2 + 3) = *((_OWORD *)v4 + 3);
  *((_OWORD *)a2 + 4) = *((_OWORD *)v4 + 4);
  *((_OWORD *)a2 + 5) = *((_OWORD *)v4 + 5);
  *((_OWORD *)a2 + 6) = *((_OWORD *)v4 + 6);
  v5 = (char *)a2 + 128;
  *((_OWORD *)v5 - 1) = *((_OWORD *)v4 + 7);
  *(_OWORD *)v5 = *((_OWORD *)v4 + 8);
  *((_OWORD *)v5 + 1) = *((_OWORD *)v4 + 9);
  *((_QWORD *)v5 + 4) = *((_QWORD *)v4 + 20);
  memset(v4, 0, 0xA8uLL);
  if ( --*((_WORD *)this + 1345) >= 0x10u )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6555LL);
}
