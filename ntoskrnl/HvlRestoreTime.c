/*
 * XREFs of HvlRestoreTime @ 0x140543050
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x1403C6CA0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvlpHvToNtStatus @ 0x140456F16 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlRestoreTime(int a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v4; // ax
  __int64 v5; // [rsp+40h] [rbp-38h] BYREF
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  __int64 v8; // [rsp+50h] [rbp-28h]
  __int64 v9; // [rsp+58h] [rbp-20h]

  if ( (HvlpFlags & 2) != 0 && (HvlpRootFlags & 0x400) != 0 )
    return 0LL;
  v7 = 0;
  v5 = -1LL;
  v6 = a1;
  v8 = a2;
  v9 = a3;
  v4 = HvcallFastExtended(65795LL, (__int64)&v5, 0x20u, 0LL, 0);
  return HvlpHvToNtStatus(v4);
}
