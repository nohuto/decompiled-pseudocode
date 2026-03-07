__int64 __fastcall SendOrientationChanged(double a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  double v6; // [rsp+28h] [rbp-30h]
  __int128 v7; // [rsp+30h] [rbp-28h]
  __int64 v8; // [rsp+40h] [rbp-18h]

  v5[1] = 0;
  v8 = 0LL;
  v6 = a1;
  v5[0] = 5;
  v7 = 0LL;
  return SendMessageTo(0LL, (__int64)v5, 40LL, a4);
}
