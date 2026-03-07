__int64 __fastcall HalpRtcFixedStall(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  char v5; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  do
  {
    v5 = 0;
    do
      ((void (__fastcall *)(_QWORD, __int64, char *))HalpTimerRtcApi)(0LL, 10LL, &v5);
    while ( v5 < 0 );
    do
      ((void (__fastcall *)(_QWORD, __int64, char *))HalpTimerRtcApi)(0LL, 10LL, &v5);
    while ( v5 >= 0 );
    v3 += 10000000LL;
  }
  while ( v3 < a2 );
  return v3 & -(__int64)(a2 != 0);
}
