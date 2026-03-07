__int64 __fastcall LockExchangeW32Thread(__int64 a1, __int64 a2)
{
  if ( a1 )
    ReferenceW32Thread();
  return ExchangeW32ThreadLock(a1, a2);
}
