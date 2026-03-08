/*
 * XREFs of VslSetPlaceholderPages @ 0x1404570C8
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x14034A0A8 (MiUpdateSlabPagePlaceholderState.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslSetPlaceholderPages(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  _QWORD v9[14]; // [rsp+20h] [rbp-88h] BYREF

  v5 = a3;
  v6 = a4;
  memset(v9, 0, 0x68uLL);
  v9[1] = a1;
  v9[2] = a2;
  v9[3] = v5;
  v9[4] = v6;
  return VslpEnterIumSecureMode(2u, 255, 0, (__int64)v9);
}
