__int64 HalpTimerFindIdealPerformanceCounterSource()
{
  int v0; // ebx
  __int64 result; // rax

  if ( HalpTimerPlatformSourceForced )
    goto LABEL_9;
  if ( HalpIsHvPresent() )
    goto LABEL_21;
  v0 = 0x2000;
  if ( (unsigned __int8)HalpTimerDeepestIdleState > 1u )
    v0 = 24576;
  result = HalpFindTimer(5, 3, v0, 0, 0);
  if ( !result )
  {
    result = HalpFindTimer(9, 3, v0, 0, 0);
    if ( !result )
    {
LABEL_21:
      if ( !HalpHvCpuManager || qword_140C62128 || (result = HalpFindTimer(3, 2, 24576, 0, 0)) == 0 )
      {
        result = HalpFindTimer(7, 2, 0, 0, 0);
        if ( !result )
        {
LABEL_9:
          result = HalpFindTimer(10, 2, 24576, 0, 0);
          if ( !result )
          {
            result = HalpFindTimer(3, 2, 24576, 0, 0);
            if ( !result )
            {
              result = HalpFindTimer(1, 2, 24576, 0, 0);
              if ( !result )
              {
                if ( HalpIsHvPresent() )
                  return 0LL;
                result = HalpFindTimer(0, 2, 24576, 0, 0);
                if ( !result )
                  return 0LL;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
