/*
 * XREFs of sub_180023320 @ 0x180023320
 * Callers:
 *     sub_180010670 @ 0x180010670 (sub_180010670.c)
 *     sub_18001BF70 @ 0x18001BF70 (sub_18001BF70.c)
 *     sub_18001E300 @ 0x18001E300 (sub_18001E300.c)
 *     sub_180020B94 @ 0x180020B94 (sub_180020B94.c)
 *     sub_180020F10 @ 0x180020F10 (sub_180020F10.c)
 *     sub_180021130 @ 0x180021130 (sub_180021130.c)
 *     sub_180021660 @ 0x180021660 (sub_180021660.c)
 *     sub_180021FB0 @ 0x180021FB0 (sub_180021FB0.c)
 *     sub_180022AC0 @ 0x180022AC0 (sub_180022AC0.c)
 *     sub_180022C90 @ 0x180022C90 (sub_180022C90.c)
 *     sub_180022D60 @ 0x180022D60 (sub_180022D60.c)
 *     sub_180022DE0 @ 0x180022DE0 (sub_180022DE0.c)
 *     sub_1800230F0 @ 0x1800230F0 (sub_1800230F0.c)
 *     sub_180023540 @ 0x180023540 (sub_180023540.c)
 *     sub_1800271DC @ 0x1800271DC (sub_1800271DC.c)
 *     sub_18002732C @ 0x18002732C (sub_18002732C.c)
 *     sub_180028AD0 @ 0x180028AD0 (sub_180028AD0.c)
 *     sub_1800291D4 @ 0x1800291D4 (sub_1800291D4.c)
 *     sub_180049150 @ 0x180049150 (sub_180049150.c)
 *     sub_180054760 @ 0x180054760 (sub_180054760.c)
 *     ?getZName@UnDecorator@@CA?AVDName@@_N0@Z_0 @ 0x180059000 (-getZName@UnDecorator@@CA-AVDName@@_N0@Z_0.c)
 *     sub_180059A8C @ 0x180059A8C (sub_180059A8C.c)
 *     sub_18005A334 @ 0x18005A334 (sub_18005A334.c)
 *     sub_18011AC34 @ 0x18011AC34 (sub_18011AC34.c)
 *     sub_18011D640 @ 0x18011D640 (sub_18011D640.c)
 *     sub_180122F24 @ 0x180122F24 (sub_180122F24.c)
 * Callees:
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 */

__int64 __fastcall sub_180023320(__int64 a1, int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 8) )
  {
    sub_1800BB2C8(3221225612LL);
    JUMPOUT(0x180023347LL);
  }
  return *(_QWORD *)a1 + 16LL * a2;
}
