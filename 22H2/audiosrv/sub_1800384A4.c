/*
 * XREFs of sub_1800384A4 @ 0x1800384A4
 * Callers:
 *     sub_180046F90 @ 0x180046F90 (sub_180046F90.c)
 *     sub_180049150 @ 0x180049150 (sub_180049150.c)
 *     ?getZName@UnDecorator@@CA?AVDName@@_N0@Z_0 @ 0x180059000 (-getZName@UnDecorator@@CA-AVDName@@_N0@Z_0.c)
 *     sub_1800592F4 @ 0x1800592F4 (sub_1800592F4.c)
 *     sub_180059784 @ 0x180059784 (sub_180059784.c)
 *     sub_180059888 @ 0x180059888 (sub_180059888.c)
 *     sub_180059A8C @ 0x180059A8C (sub_180059A8C.c)
 *     sub_18005AAD0 @ 0x18005AAD0 (sub_18005AAD0.c)
 *     sub_18005B7B4 @ 0x18005B7B4 (sub_18005B7B4.c)
 *     sub_18005B960 @ 0x18005B960 (sub_18005B960.c)
 *     sub_18005B9E8 @ 0x18005B9E8 (sub_18005B9E8.c)
 *     sub_180067BDC @ 0x180067BDC (sub_180067BDC.c)
 *     sub_180118DBC @ 0x180118DBC (sub_180118DBC.c)
 *     sub_180119030 @ 0x180119030 (sub_180119030.c)
 *     sub_1801195CC @ 0x1801195CC (sub_1801195CC.c)
 *     sub_180119954 @ 0x180119954 (sub_180119954.c)
 *     sub_180119D08 @ 0x180119D08 (sub_180119D08.c)
 *     sub_18011AC34 @ 0x18011AC34 (sub_18011AC34.c)
 *     sub_18011D640 @ 0x18011D640 (sub_18011D640.c)
 *     sub_18011E704 @ 0x18011E704 (sub_18011E704.c)
 *     sub_1801230A8 @ 0x1801230A8 (sub_1801230A8.c)
 *     sub_180123150 @ 0x180123150 (sub_180123150.c)
 *     sub_180123190 @ 0x180123190 (sub_180123190.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800384A4(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = _o_free(v2);
    *a1 = 0LL;
  }
  *((_DWORD *)a1 + 2) = 0;
  *((_DWORD *)a1 + 3) = 0;
  return result;
}
