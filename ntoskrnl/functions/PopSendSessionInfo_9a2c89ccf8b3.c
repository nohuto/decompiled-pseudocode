__int64 __fastcall PopSendSessionInfo(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-30h] BYREF
  __int16 v6; // [rsp+25h] [rbp-2Bh]
  char v7; // [rsp+27h] [rbp-29h]
  int v8; // [rsp+28h] [rbp-28h]
  int v9; // [rsp+2Ch] [rbp-24h]
  __int64 v10; // [rsp+30h] [rbp-20h]
  int v11; // [rsp+38h] [rbp-18h]
  int v12; // [rsp+3Ch] [rbp-14h]
  __int64 v13; // [rsp+40h] [rbp-10h]
  int v14; // [rsp+60h] [rbp+10h] BYREF

  v14 = a1;
  result = 0LL;
  v6 = 0;
  v7 = 0;
  v9 = 0;
  v12 = 0;
  if ( PsWin32CalloutsEstablished )
  {
    v10 = a4;
    v8 = 20;
    v11 = 0;
    v13 = 0LL;
    return PopInvokeWin32Callout(5LL, &v5, 1LL, &v14, 0);
  }
  return result;
}
