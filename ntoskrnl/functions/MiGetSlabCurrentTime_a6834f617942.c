__int64 MiGetSlabCurrentTime()
{
  __int64 result; // rax
  __int64 v1; // r11

  result = KiQueryUnbiasedInterruptTime();
  if ( !result )
    return v1;
  return result;
}
