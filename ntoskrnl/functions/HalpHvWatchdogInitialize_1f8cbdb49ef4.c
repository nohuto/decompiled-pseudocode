__int64 HalpHvWatchdogInitialize()
{
  __writemsr(0x40000110u, 2uLL);
  return 0LL;
}
