__int64 __fastcall HvlpHandleInsufficientMemory(__int16 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx

  v4 = 1LL;
  if ( a1 != 117 && a1 != 130 )
    LOBYTE(v4) = 0;
  LOBYTE(a3) = v4;
  LOBYTE(a4) = (unsigned __int16)(a1 - 129) <= 1u;
  return HvlpDepositPages(0LL, v4, a3, a4);
}
