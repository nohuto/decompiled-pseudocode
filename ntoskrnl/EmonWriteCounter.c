unsigned __int64 __fastcall EmonWriteCounter(unsigned int a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 result; // rax

  if ( a1 >= EmonNumberArchCounters )
    return __readmsr(0x38Du);
  __writemsr(a1 + 193, a2);
  result = a3;
  __writemsr(a1 + 390, a3);
  return result;
}
