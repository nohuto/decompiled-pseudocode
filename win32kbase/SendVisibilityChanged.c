/*
 * XREFs of SendVisibilityChanged @ 0x1C00D1D20
 * Callers:
 *     <none>
 * Callees:
 *     SendMessageTo @ 0x1C0081230 (SendMessageTo.c)
 */

__int64 __fastcall SendVisibilityChanged(unsigned __int8 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]

  v6 = 0LL;
  memset(v5, 0, sizeof(v5));
  DWORD2(v5[0]) = a1;
  return SendMessageTo(0LL, (__int64)v5, 40LL, a4);
}
