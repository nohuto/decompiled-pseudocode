char HalpBlkPoPerformPpmOperation()
{
  _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // rbx
  volatile __int32 *p_Handler; // r11
  int Handler; // eax
  char result; // al

  ExceptionList = KeGetPcr()->NtTib.ExceptionList;
  p_Handler = (volatile __int32 *)&ExceptionList[138].Handler;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)&ExceptionList[139], 2, 1) != 1 )
    return 0;
  if ( HIDWORD(ExceptionList[139].Next) == 3 )
  {
    KeGetPcr()->NtTib.ExceptionList[141].Next = ExceptionList[140].Next;
  }
  else
  {
    Handler = (int)ExceptionList[139].Handler;
    if ( Handler == 1 )
    {
      HalpBlkPoPerformPpmOperationForMsr(&ExceptionList[138].Handler);
    }
    else if ( Handler == 2 )
    {
      HalpBlkPoPerformPpmOperationForIoPort(&ExceptionList[138].Handler);
    }
    else
    {
      __debugbreak();
    }
  }
  _InterlockedIncrement64((volatile signed __int64 *)&ExceptionList[8]);
  result = 1;
  _InterlockedExchange(p_Handler + 2, 0);
  return result;
}
