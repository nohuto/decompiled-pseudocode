/*
 * XREFs of sub_1801440B4 @ 0x1801440B4
 * Callers:
 *     sub_180102A80 @ 0x180102A80 (sub_180102A80.c)
 *     sub_180103040 @ 0x180103040 (sub_180103040.c)
 * Callees:
 *     memset @ 0x18006AB8C (memset.c)
 */

__int64 __fastcall sub_1801440B4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 result; // rax
  _QWORD v9[12]; // [rsp+20h] [rbp-60h] BYREF

  if ( (unsigned int)dword_180145008 >= 5 )
  {
    memset(v9, 0, 72);
    LODWORD(v9[7]) = 0;
    LOWORD(v9[0]) = 96;
    v9[9] = a6;
    v9[10] = a7;
    v9[11] = a8;
    HIDWORD(v9[5]) = 0x20000;
    *(_OWORD *)&v9[3] = xmmword_1801B2000;
    BYTE5(v9[0]) = 5;
    BYTE4(v9[0]) = a4;
    v9[6] = a2;
    return EtwLogTraceEvent(qword_180145010, v9);
  }
  return result;
}
