__int64 __fastcall CAccessibilityTimer::ForwardInputToISMTimers(int a1, int a2, int a3, __int64 a4)
{
  int v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+24h] [rbp-14h]
  int v7; // [rsp+28h] [rbp-10h]

  v5 = a1;
  v7 = a2;
  v6 = a3 != 0;
  if ( (_DWORD)a4 )
    v6 = (a3 != 0) | 2;
  return SendMessageTo(17LL, (__int64)&v5, 12LL, a4);
}
