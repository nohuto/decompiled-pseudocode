/*
 * XREFs of PopSendSessionInfo @ 0x1408F55F0
 * Callers:
 *     PopSetWin32kDisplayTimeout @ 0x1408F5404 (PopSetWin32kDisplayTimeout.c)
 *     PopSetWin32kInputTimeout @ 0x1408F5468 (PopSetWin32kInputTimeout.c)
 * Callees:
 *     PopInvokeWin32Callout @ 0x14066EF08 (PopInvokeWin32Callout.c)
 */

__int64 __fastcall PopSendSessionInfo(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-30h] BYREF
  char v6; // [rsp+24h] [rbp-2Ch]
  __int16 v7; // [rsp+25h] [rbp-2Bh]
  char v8; // [rsp+27h] [rbp-29h]
  int v9; // [rsp+28h] [rbp-28h]
  int v10; // [rsp+2Ch] [rbp-24h]
  __int64 v11; // [rsp+30h] [rbp-20h]
  int v12; // [rsp+38h] [rbp-18h]
  int v13; // [rsp+3Ch] [rbp-14h]
  __int64 v14; // [rsp+40h] [rbp-10h]
  int v15; // [rsp+60h] [rbp+10h] BYREF

  v15 = a1;
  result = 0LL;
  v7 = 0;
  v8 = 0;
  v10 = 0;
  v13 = 0;
  if ( PsWin32CalloutsEstablished )
  {
    v11 = a4;
    v5 = 0;
    v6 = 0;
    v9 = 20;
    v12 = 0;
    v14 = 0LL;
    return PopInvokeWin32Callout(5u, (__int64)&v5, 1u, &v15);
  }
  return result;
}
