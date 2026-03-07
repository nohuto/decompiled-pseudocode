char __fastcall WheapHighIrqlLogSelEventHandlerAcquireLock(char a1)
{
  char v1; // dl

  v1 = 0;
  while ( _InterlockedCompareExchange(
            (volatile signed __int32 *)(&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters + 1),
            1,
            0) )
  {
    if ( !a1 )
      return v1;
  }
  return 1;
}
