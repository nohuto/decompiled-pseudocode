__int64 __fastcall HalpRtcArmTimer(__int64 *a1, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+58h] [rbp+10h] BYREF
  char v10; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v9 = 0;
  v10 = 0;
  v8[0] = 0;
  if ( ((a2 - 1) & 0xFFFFFFFD) != 0 )
  {
    HalSetTimerProblem((__int64)a1, 3, 0);
    return 3221225485LL;
  }
  else
  {
    v6 = 0LL;
    v7 = 1LL;
    if ( a3 )
      v7 = a3;
    *a1 = v7;
    if ( a2 == 1 )
      v6 = v7;
    a1[1] = v6;
    ((void (__fastcall *)(_QWORD, __int64, char *, __int64))HalpTimerRtcApi)(0LL, 11LL, &v9, 1LL);
    v9 = v9 & 1 | 0x42;
    ((void (__fastcall *)(_QWORD, __int64, char *, __int64))qword_140D0DD78)(0LL, 11LL, &v9, 1LL);
    ((void (__fastcall *)(_QWORD, __int64, char *, __int64))HalpTimerRtcApi)(0LL, 12LL, &v10, 1LL);
    ((void (__fastcall *)(_QWORD, __int64, _BYTE *, __int64))HalpTimerRtcApi)(0LL, 13LL, v8, 1LL);
    do
    {
      ((void (__fastcall *)(_QWORD, __int64, char *, __int64))HalpTimerRtcApi)(0LL, 12LL, &v10, 1LL);
      if ( v10 >= 0 )
        break;
      ++v3;
    }
    while ( v3 < 0xA );
    return 0LL;
  }
}
