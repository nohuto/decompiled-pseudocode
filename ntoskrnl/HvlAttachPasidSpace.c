/*
 * XREFs of HvlAttachPasidSpace @ 0x140540510
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x1403C6CA0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x140456EEE (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x140456F16 (HvlpHvToNtStatus.c)
 *     HvlpHandleInsufficientMemory @ 0x14053DA58 (HvlpHandleInsufficientMemory.c)
 */

__int64 __fastcall HvlAttachPasidSpace(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r9
  _QWORD v6[2]; // [rsp+40h] [rbp-38h] BYREF
  int v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+54h] [rbp-24h]

  v8 = 0;
  v6[0] = -1LL;
  v6[1] = a1;
  v7 = a2;
  while ( 1 )
  {
    LOWORD(v2) = HvcallFastExtended(65698LL, (__int64)v6, 0x18u, 0LL, 0);
    if ( (HvlpFlags & 2) == 0 || !HvlpHvStatusIsInsufficientMemory(v2) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v2, v3, v2, v4) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v2);
}
