__int64 __fastcall HalpSetTimerAnyMode(__int64 a1, ULONGLONG a2, __int64 a3, unsigned __int64 *a4)
{
  int v7; // eax
  __int64 v8; // r8
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8

  v7 = HalpSetTimer(a1, 3, a2, 1, a4);
  v8 = (unsigned int)v7;
  if ( v7 >= 0
    || (v9 = HalpSetTimer(a1, 2, a2, 1, a4), v8 = (unsigned int)v9, v9 >= 0)
    || (v10 = HalpSetTimer(a1, 1, a2, 1, a4), v8 = (unsigned int)v10, v10 >= 0) )
  {
    HalpTimerClearProblem(a1, 17LL, v8);
    HalpTimerClearProblem(v11, 18LL, v12);
  }
  return (unsigned int)v8;
}
