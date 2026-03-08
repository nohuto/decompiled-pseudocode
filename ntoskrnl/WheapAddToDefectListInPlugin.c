/*
 * XREFs of WheapAddToDefectListInPlugin @ 0x14060FE04
 * Callers:
 *     WheaAddrTranslateAndAddToDefectListInPlugin @ 0x140A04FEC (WheaAddrTranslateAndAddToDefectListInPlugin.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall WheapAddToDefectListInPlugin(__int128 *a1)
{
  __int128 v1; // xmm1
  __int128 v2; // xmm0
  int v4; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v5[56]; // [rsp+28h] [rbp-48h] BYREF

  v1 = a1[1];
  v4 = 0;
  memset(&v5[16], 0, 32);
  *(_OWORD *)v5 = 0x3800000004uLL;
  v2 = *a1;
  *(_OWORD *)&v5[24] = v1;
  *(_OWORD *)&v5[8] = v2;
  *(_OWORD *)&v5[40] = a1[2];
  return ((__int64 (__fastcall *)(__int64, _BYTE *, int *, _QWORD))PshedDoPluginCtl)(56LL, v5, &v4, 0LL);
}
