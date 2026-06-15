/*
 * XREFs of sub_18002E6A0 @ 0x18002E6A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002E784 @ 0x18002E784 (sub_18002E784.c)
 *     sub_18002E880 @ 0x18002E880 (sub_18002E880.c)
 *     sub_18002EAA8 @ 0x18002EAA8 (sub_18002EAA8.c)
 *     sub_18002EACC @ 0x18002EACC (sub_18002EACC.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800CB290 @ 0x1800CB290 (sub_1800CB290.c)
 */

__int64 __fastcall sub_18002E6A0(__int64 a1, float a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // edi
  double v11; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    v11 = a2;
    sub_1800CB290(*((_QWORD *)off_18019C348 + 2), 16, a3, *(_QWORD *)(a1 + 728), SLOBYTE(v11));
  }
  if ( (unsigned __int8)sub_18002EAA8() )
  {
    sub_18002EACC(a1);
    v8 = sub_18002E880(a1, v7, a3, a4);
    v9 = v8;
    if ( v8 < 0 )
    {
      sub_18004BD84(retaddr, 840LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", (unsigned int)v8);
      return v9;
    }
    else
    {
      sub_18002E784(a1);
      return 0LL;
    }
  }
  else
  {
    sub_18004BD84(retaddr, 832LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", 2147942487LL);
    return 2147942487LL;
  }
}
