/*
 * XREFs of sub_180126598 @ 0x180126598
 * Callers:
 *     sub_1800D70A0 @ 0x1800D70A0 (sub_1800D70A0.c)
 * Callees:
 *     sub_180047278 @ 0x180047278 (sub_180047278.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1801259DC @ 0x1801259DC (sub_1801259DC.c)
 *     sub_1801352FC @ 0x1801352FC (sub_1801352FC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180126598(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // edi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0;
  v11 = 0LL;
  sub_180047278(&v11);
  v7 = sub_1801259DC(&v11);
  v8 = v7;
  if ( v7 < 0 )
  {
    sub_18004BD84((int)retaddr, 111, (int)"avcore\\audiocore\\server\\lib\\spatialsettings\\SpatialProviders.h", v7);
LABEL_6:
    v6 = v8;
    goto LABEL_7;
  }
  if ( !v11 )
  {
    v8 = -2147418113;
    goto LABEL_6;
  }
  sub_1801352FC(v11, a1, a2, a3);
LABEL_7:
  sub_180047278(&v11);
  return v6;
}
