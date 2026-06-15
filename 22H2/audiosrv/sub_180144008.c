/*
 * XREFs of sub_180144008 @ 0x180144008
 * Callers:
 *     sub_180102A80 @ 0x180102A80 (sub_180102A80.c)
 *     sub_180103040 @ 0x180103040 (sub_180103040.c)
 * Callees:
 *     memset @ 0x18006AB8C (memset.c)
 */

__int64 __fastcall sub_180144008(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  _QWORD v9[12]; // [rsp+20h] [rbp-60h] BYREF

  if ( (unsigned int)dword_180145008 >= 5 )
  {
    memset(v9, 0, 0x40uLL);
    HIDWORD(v9[5]) = 0x20000;
    LODWORD(v9[7]) = 0;
    LOWORD(v9[0]) = 96;
    v9[8] = a5;
    v9[10] = 0LL;
    v9[11] = 0LL;
    v9[9] = a6;
    *(_OWORD *)&v9[3] = xmmword_1801B2010;
    BYTE5(v9[0]) = 5;
    BYTE4(v9[0]) = a4;
    v9[6] = a2;
    return EtwLogTraceEvent(qword_180145010, v9);
  }
  return result;
}
