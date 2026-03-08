/*
 * XREFs of HvlpGetVtlCallVa @ 0x140676440
 * Callers:
 *     HvlEnableVsmCalls @ 0x140B7294C (HvlEnableVsmCalls.c)
 * Callees:
 *     HvcallFastExtended @ 0x1403C6CA0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 HvlpGetVtlCallVa()
{
  char *v0; // rbx
  __int64 result; // rax
  __int128 v2; // [rsp+40h] [rbp-48h] BYREF
  __int64 v3; // [rsp+50h] [rbp-38h] BYREF
  int v4; // [rsp+58h] [rbp-30h]
  int v5; // [rsp+5Ch] [rbp-2Ch]
  int v6; // [rsp+60h] [rbp-28h]

  v3 = -1LL;
  v0 = 0LL;
  v2 = 0LL;
  v5 = 0;
  v4 = -2;
  v6 = 851970;
  result = HvcallFastExtended(0x100010050LL, (__int64)&v3, 0x14u, (__int64)&v2, 0x10u);
  if ( !(_WORD)result )
    v0 = (char *)HvlpHypercallCodeVa + (v2 & 0xFFF);
  *(_QWORD *)&HvlpVsmVtlCallVa = v0;
  return result;
}
