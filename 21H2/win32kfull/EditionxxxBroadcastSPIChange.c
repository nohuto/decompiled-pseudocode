/*
 * XREFs of EditionxxxBroadcastSPIChange @ 0x1C0158B30
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     xxxBroadcastMessageEx @ 0x1C00A9E58 (xxxBroadcastMessageEx.c)
 *     RtlInitLargeUnicodeString @ 0x1C00E89FC (RtlInitLargeUnicodeString.c)
 */

__int64 __fastcall EditionxxxBroadcastSPIChange(unsigned int a1, __int64 a2, int a3)
{
  __int128 v6; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v7[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 *v8; // [rsp+58h] [rbp-20h]
  __int64 v9; // [rsp+60h] [rbp-18h]
  __int64 v10; // [rsp+98h] [rbp+20h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v6 = 0LL;
  RtlInitLargeUnicodeString((__int64)&v6, a2);
  UpdateInputSettingWnfState(a1);
  v7[0] = 0;
  v8 = &v10;
  v7[1] = 100;
  return xxxBroadcastMessageEx(
           0LL,
           26LL,
           a1,
           (struct _LARGE_STRING *)&v6,
           a3 != 0 ? 6 : 1,
           (union tagBROADCASTMSG *)v7,
           1,
           0);
}
