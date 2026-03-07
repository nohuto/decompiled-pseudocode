__int64 __fastcall GreCreatePen(unsigned int a1, int a2, int a3, __int64 a4)
{
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a1 <= 4 || a1 - 5 < 2 )
    return GreExtCreatePen(a1, a2, 0, a3, 0LL, 0, 0, 0LL, 0, 1, a4);
  EngSetLastError(0x57u);
  return 0LL;
}
