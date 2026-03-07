__int64 __fastcall PushScope(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v12; // r10d
  _QWORD *v13; // rdx
  char v14; // cl
  __int64 v16[3]; // [rsp+30h] [rbp-18h] BYREF

  v16[0] = 0LL;
  v12 = PushFrame((__int64)a1, 1347371859, 0x50u, (__int64)ParseScope, v16);
  if ( !v12 )
  {
    v13 = (_QWORD *)v16[0];
    a1[15] = a2;
    v13[4] = a3;
    v13[5] = a4;
    v13[6] = a1[10];
    v14 = gdwfAMLI;
    a1[10] = a5;
    if ( (v14 & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a5 + 112));
      v13 = (_QWORD *)v16[0];
    }
    v13[7] = a1[11];
    a1[11] = a6;
    v13[8] = a1[40];
    a1[40] = a7;
    v13[9] = a8;
  }
  return v12;
}
