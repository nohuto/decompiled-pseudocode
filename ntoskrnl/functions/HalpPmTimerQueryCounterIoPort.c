__int64 __fastcall HalpPmTimerQueryCounterIoPort(__int64 a1)
{
  __int64 result; // rax

  LODWORD(result) = __indword(*(_QWORD *)(a1 + 8));
  return (unsigned int)result;
}
