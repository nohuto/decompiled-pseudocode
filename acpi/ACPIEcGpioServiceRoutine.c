char __fastcall ACPIEcGpioServiceRoutine(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a2 + 882) & 1) == 0 )
    ACPIEcMaskInterrupt(a2);
  KeInsertQueueDpc((PRKDPC)(a2 + 816), 0LL, 0LL);
  return 0;
}
