__int64 HalpTimerSaveProcessorFrequency()
{
  KPCR *Pcr; // rbx
  __int64 Timer; // rax
  unsigned __int64 v2; // rcx
  __int64 result; // rax

  Pcr = KeGetPcr();
  Timer = HalpFindTimer(5, 0, 0, 0, 1);
  if ( Timer )
  {
    *(_QWORD *)Pcr->HalReserved = 10000 * ((*(_QWORD *)(Timer + 192) + 5000LL) / 0x2710uLL);
    v2 = 1000000 * ((*(_QWORD *)(Timer + 192) + 500000LL) / 0xF4240uLL);
    Pcr->StallScaleFactor = v2 / 0xF4240;
    KeGetCurrentPrcb()->MHz = v2 / 0xF4240;
  }
  result = HalpFindTimer(6, 0, 0, 0, 1);
  if ( result )
  {
    result = 10000 * (unsigned int)((*(_QWORD *)(result + 192) + 5000LL) / 0x2710uLL);
    Pcr->HalReserved[3] = result;
  }
  return result;
}
