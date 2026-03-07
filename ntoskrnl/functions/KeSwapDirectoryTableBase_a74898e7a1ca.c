__int64 __fastcall KeSwapDirectoryTableBase(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  char v5; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+21h] [rbp-27h]
  char v7; // [rsp+23h] [rbp-25h]
  int v8; // [rsp+24h] [rbp-24h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v9 = a1;
  v6 = 0;
  v7 = 0;
  v5 = 0;
  v8 = a2;
  v10 = a3;
  if ( a2 )
  {
    if ( a2 == 1 )
      v3 = *(_QWORD *)(a1 + 904);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 40);
  }
  KeGenericCallDpc((__int64)KiSwapDirectoryTableBaseTarget, (__int64)&v5);
  return KeFlushProcessTb(v3);
}
