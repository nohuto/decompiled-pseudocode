/*
 * XREFs of HvlCreatePasidSpace @ 0x1405406D0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x1403C6CA0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x140456EEE (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x140456F16 (HvlpHvToNtStatus.c)
 *     HvlpHandleInsufficientMemory @ 0x14053DA58 (HvlpHandleInsufficientMemory.c)
 */

__int64 __fastcall HvlCreatePasidSpace(int a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp-38h] BYREF
  int v7; // [rsp+48h] [rbp-30h]
  int v8; // [rsp+4Ch] [rbp-2Ch]
  unsigned __int64 v9; // [rsp+50h] [rbp-28h]
  __int64 v10; // [rsp+58h] [rbp-20h]

  v10 = 0LL;
  v6 = -1LL;
  v7 = a1;
  v8 = a2;
  v9 = __readmsr(0x277u);
  while ( 1 )
  {
    LOWORD(v2) = HvcallFastExtended(65693LL, (__int64)&v6, 0x20u, 0LL, 0);
    if ( (HvlpFlags & 2) == 0 || !HvlpHvStatusIsInsufficientMemory(v2) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v2, v3, v2, v4) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v2);
}
