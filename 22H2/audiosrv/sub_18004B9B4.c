/*
 * XREFs of sub_18004B9B4 @ 0x18004B9B4
 * Callers:
 *     sub_180010670 @ 0x180010670 (sub_180010670.c)
 *     sub_18004B2D0 @ 0x18004B2D0 (sub_18004B2D0.c)
 *     ?getZName@UnDecorator@@CA?AVDName@@_N0@Z_0 @ 0x180059000 (-getZName@UnDecorator@@CA-AVDName@@_N0@Z_0.c)
 *     sub_180065320 @ 0x180065320 (sub_180065320.c)
 *     sub_180118DBC @ 0x180118DBC (sub_180118DBC.c)
 *     sub_180119B6C @ 0x180119B6C (sub_180119B6C.c)
 *     sub_180119D08 @ 0x180119D08 (sub_180119D08.c)
 *     sub_18011A840 @ 0x18011A840 (sub_18011A840.c)
 *     sub_18011E704 @ 0x18011E704 (sub_18011E704.c)
 *     sub_18011EEEC @ 0x18011EEEC (sub_18011EEEC.c)
 *     sub_18011F504 @ 0x18011F504 (sub_18011F504.c)
 *     sub_1801224A0 @ 0x1801224A0 (sub_1801224A0.c)
 *     sub_180122700 @ 0x180122700 (sub_180122700.c)
 *     sub_180122780 @ 0x180122780 (sub_180122780.c)
 *     sub_180122B70 @ 0x180122B70 (sub_180122B70.c)
 * Callees:
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 */

__int64 __fastcall sub_18004B9B4(__int64 a1, int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 8) )
  {
    sub_1800BB2C8(3221225612LL);
    JUMPOUT(0x18004B9DBLL);
  }
  return *(_QWORD *)a1 + 8LL * a2;
}
