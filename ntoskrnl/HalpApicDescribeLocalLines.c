/*
 * XREFs of HalpApicDescribeLocalLines @ 0x140374568
 * Callers:
 *     HalpApicInitializeLocalUnit @ 0x140372980 (HalpApicInitializeLocalUnit.c)
 * Callees:
 *     HalpInterruptRegisterLine @ 0x1403748A0 (HalpInterruptRegisterLine.c)
 */

__int64 __fastcall HalpApicDescribeLocalLines(_DWORD *a1)
{
  int v1; // eax
  __int64 result; // rax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // [rsp+20h] [rbp-30h] BYREF
  int v8; // [rsp+24h] [rbp-2Ch]
  int v9; // [rsp+28h] [rbp-28h]
  int v10; // [rsp+2Ch] [rbp-24h]
  __int64 v11; // [rsp+30h] [rbp-20h]
  int v12; // [rsp+38h] [rbp-18h]
  __int128 v13; // [rsp+3Ch] [rbp-14h]
  int v14; // [rsp+4Ch] [rbp-4h]

  v1 = a1[2];
  v12 = -1;
  v11 = 0LL;
  v14 = 0;
  v13 = 0LL;
  v9 = 0;
  v10 = 3;
  v8 = -6;
  v7 = v1;
  result = HalpInterruptRegisterLine(&v7);
  if ( (int)result >= 0 )
  {
    if ( !a1[8]
      || (v4 = a1[2],
          v12 = -1,
          v7 = v4,
          v10 = 3,
          v8 = -7,
          v9 = -6,
          result = HalpInterruptRegisterLine(&v7),
          (int)result >= 0) )
    {
      if ( !a1[9]
        || (v6 = a1[2],
            v12 = -1,
            v7 = v6,
            v10 = 3,
            v8 = -8,
            v9 = -7,
            result = HalpInterruptRegisterLine(&v7),
            (int)result >= 0) )
      {
        v5 = a1[2];
        v12 = -1;
        v7 = v5;
        v10 = 5;
        v8 = -10;
        v9 = -9;
        result = HalpInterruptRegisterLine(&v7);
        if ( (int)result >= 0 )
          return 0LL;
      }
    }
  }
  return result;
}
