/*
 * XREFs of HvlpFlushRangeListTbEx @ 0x1405476CC
 * Callers:
 *     HvlFlushRangeListTb @ 0x1403C689C (HvlFlushRangeListTb.c)
 * Callees:
 *     HvlpCountFlushVaList @ 0x1403C697C (HvlpCountFlushVaList.c)
 *     HvlpFastFlushListTbEx @ 0x140547580 (HvlpFastFlushListTbEx.c)
 *     HvlpSlowFlushListTbEx @ 0x140547AF8 (HvlpSlowFlushListTbEx.c)
 */

void __fastcall HvlpFlushRangeListTbEx(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        char a5,
        unsigned int a6,
        __int64 *a7)
{
  unsigned int v8; // r8d
  __int64 v9; // rax
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  unsigned int v13; // r10d
  char v14; // r11
  __int64 v15[5]; // [rsp+40h] [rbp-28h] BYREF

  memset(v15, 0, 32);
  if ( a5 )
  {
    v15[0] = a1;
    v8 = a3 == 0 ? 4 : 0;
    v9 = v8 | 2;
    if ( a1 )
      v9 = v8;
    v15[1] = v9;
  }
  v10 = HvlpCountFlushVaList(a6, a7);
  if ( v10 + ((HvlpFlags >> 8) & 0xF) + 5 > 0xE || (HvlEnlightenments & 0x80u) == 0 || v14 && v13 + 1 > 0xC )
  {
    LOBYTE(v11) = v14;
    HvlpSlowFlushListTbEx((unsigned int)v15, a2, v11, v12, v13, (__int64)a7, v10);
  }
  else
  {
    HvlpFastFlushListTbEx(v15, a2, v14, v12, v13, a7, v10);
  }
}
