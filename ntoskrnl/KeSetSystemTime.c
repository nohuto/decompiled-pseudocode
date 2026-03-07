__int64 __fastcall KeSetSystemTime(__int64 a1, __int64 a2, int a3)
{
  char v4; // [rsp+20h] [rbp-30h] BYREF
  __int16 v5; // [rsp+21h] [rbp-2Fh]
  char v6; // [rsp+23h] [rbp-2Dh]
  int v7; // [rsp+24h] [rbp-2Ch]
  __int64 v8; // [rsp+28h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-20h]
  __int64 v10; // [rsp+38h] [rbp-18h]
  char v11; // [rsp+40h] [rbp-10h]
  int v12; // [rsp+41h] [rbp-Fh]

  v8 = a1;
  v9 = a2;
  v5 = 0;
  v6 = 0;
  v10 = 0LL;
  v12 = 0;
  v4 = 0;
  v11 = 0;
  v7 = a3;
  return KeGenericCallDpcEx(KiSetSystemTimeDpc, &v4);
}
