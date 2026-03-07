__int64 __fastcall PfFbBufferListAllocateTemporary(PEX_RUNDOWN_REF RunRef, signed int a2)
{
  void *Pool2; // rax
  __int64 result; // rax

  if ( a2 + _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[14], a2) > SLODWORD(RunRef[11].Count) )
  {
    result = 3221225773LL;
  }
  else
  {
    Pool2 = (void *)ExAllocatePool2(RunRef[9].Count, a2, HIDWORD(RunRef[8].Ptr));
    if ( Pool2 )
    {
      PfFbBufferListInsertInFree(RunRef, Pool2, 0);
      return 0LL;
    }
    result = 3221225626LL;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[14], -a2);
  return result;
}
