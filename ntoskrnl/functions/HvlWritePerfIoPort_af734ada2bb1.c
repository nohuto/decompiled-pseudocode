__int64 __fastcall HvlWritePerfIoPort(__int64 a1, __int16 a2, __int16 a3, unsigned int a4, unsigned int a5)
{
  __int16 v5; // ax
  __int64 v7; // [rsp+20h] [rbp-18h]

  HIDWORD(v7) = 0x200000;
  LOWORD(v7) = a2;
  if ( a3 == 1 )
  {
    v5 = 0;
  }
  else if ( a3 == 2 )
  {
    v5 = 1;
  }
  else
  {
    v5 = 2;
    if ( a3 != 4 )
      return 3221225485LL;
  }
  WORD1(v7) = v5;
  return HvlpWritePerfRegister(a1, v7, a4, a5);
}
