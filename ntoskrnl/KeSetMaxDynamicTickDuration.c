__int64 __fastcall KeSetMaxDynamicTickDuration(unsigned __int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)KeMaximumIncrement;
  if ( (unsigned int)KeMaximumIncrement < a1 )
    a1 = (unsigned int)KeMaximumIncrement;
  _InterlockedExchange64(&KiMaxDynamicTickDuration, a1);
  return result;
}
