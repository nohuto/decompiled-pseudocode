/*
 * XREFs of ?Dequeue@CMouseQueue@CMouseProcessor@@QEAA_NPEAURawMouseEvent@2@@Z @ 0x1C0042874
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00423C4 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

char __fastcall CMouseProcessor::CMouseQueue::Dequeue(
        CMouseProcessor::CMouseQueue *this,
        struct CMouseProcessor::RawMouseEvent *a2)
{
  __int16 v3; // cx
  char v4; // di
  char *v5; // rcx
  char *v6; // rdx

  v3 = *((_WORD *)this + 1345);
  if ( !v3 )
    return 0;
  v4 = 1;
  v5 = (char *)this + 168 * (((unsigned __int8)*((_WORD *)this + 1344) - (unsigned __int8)v3 + 1) & 0xF);
  *(_OWORD *)a2 = *(_OWORD *)v5;
  *((_OWORD *)a2 + 1) = *((_OWORD *)v5 + 1);
  *((_OWORD *)a2 + 2) = *((_OWORD *)v5 + 2);
  *((_OWORD *)a2 + 3) = *((_OWORD *)v5 + 3);
  *((_OWORD *)a2 + 4) = *((_OWORD *)v5 + 4);
  *((_OWORD *)a2 + 5) = *((_OWORD *)v5 + 5);
  *((_OWORD *)a2 + 6) = *((_OWORD *)v5 + 6);
  v6 = (char *)a2 + 128;
  *((_OWORD *)v6 - 1) = *((_OWORD *)v5 + 7);
  *(_OWORD *)v6 = *((_OWORD *)v5 + 8);
  *((_OWORD *)v6 + 1) = *((_OWORD *)v5 + 9);
  *((_QWORD *)v6 + 4) = *((_QWORD *)v5 + 20);
  memset(v5, 0, 0xA8uLL);
  if ( --*((_WORD *)this + 1345) >= 0x10u )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6272LL);
  return v4;
}
