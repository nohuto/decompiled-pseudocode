__int64 HalpApicX2EndOfInterrupt()
{
  __int64 result; // rax

  result = 0LL;
  __writemsr(0x80Bu, 0LL);
  return result;
}
