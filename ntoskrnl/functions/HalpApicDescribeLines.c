__int64 __fastcall HalpApicDescribeLines(__int64 a1)
{
  int v2; // eax
  __int64 result; // rax
  int v4; // eax
  int v5; // [rsp+20h] [rbp-30h] BYREF
  int v6; // [rsp+24h] [rbp-2Ch]
  int v7; // [rsp+28h] [rbp-28h]
  int v8; // [rsp+2Ch] [rbp-24h]
  int v9; // [rsp+30h] [rbp-20h]
  int v10; // [rsp+34h] [rbp-1Ch]
  int v11; // [rsp+38h] [rbp-18h]
  __int128 v12; // [rsp+3Ch] [rbp-14h]
  int v13; // [rsp+4Ch] [rbp-4h]

  v9 = 0;
  v13 = 0;
  v10 = -1;
  v11 = -1;
  v2 = *(_DWORD *)(a1 + 8);
  v12 = 0LL;
  v8 = 6;
  v6 = 1;
  v7 = 7;
  v5 = v2;
  result = HalpInterruptRegisterLine(&v5);
  if ( (int)result >= 0 )
  {
    v4 = *(unsigned __int8 *)(a1 + 25);
    v6 = 0;
    v7 = v4;
    v11 = *(_DWORD *)(a1 + 28);
    v5 = *(_DWORD *)(a1 + 8);
    v8 = 2;
    return HalpInterruptRegisterLine(&v5);
  }
  return result;
}
