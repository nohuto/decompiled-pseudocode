/*
 * XREFs of HvlpWritePerfRegister @ 0x140542768
 * Callers:
 *     HvlWritePerfIoPort @ 0x1405407C0 (HvlWritePerfIoPort.c)
 *     HvlWritePerfMsr @ 0x140540830 (HvlWritePerfMsr.c)
 * Callees:
 *     HvcallFastExtended @ 0x1403CBB50 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     HvlpHvToNtStatus @ 0x14045EEB6 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlpWritePerfRegister(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // ax
  _DWORD v6[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v7; // [rsp+48h] [rbp-30h]
  __int64 v8; // [rsp+50h] [rbp-28h]
  __int64 v9; // [rsp+58h] [rbp-20h]

  v6[1] = 0;
  v6[0] = a1;
  v9 = a4;
  v7 = a2;
  v8 = a3;
  v4 = HvcallFastExtended(65563LL, (__int64)v6, 0x20u, 0LL, 0);
  return HvlpHvToNtStatus(v4);
}
