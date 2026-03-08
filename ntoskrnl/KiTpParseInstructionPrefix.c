/*
 * XREFs of KiTpParseInstructionPrefix @ 0x140AF147C
 * Callers:
 *     KiTpParseInstruction @ 0x140AF1450 (KiTpParseInstruction.c)
 * Callees:
 *     KiTpFetchInstructionBytes @ 0x140AF13B4 (KiTpFetchInstructionBytes.c)
 */

__int64 __fastcall KiTpParseInstructionPrefix(char *a1)
{
  __int64 result; // rax
  unsigned __int8 *v3; // rax
  char v4; // cl
  char v5; // al
  bool v6; // zf
  char v7; // al
  unsigned __int8 v8; // [rsp+38h] [rbp+18h] BYREF
  int v9; // [rsp+40h] [rbp+20h] BYREF
  int v10; // [rsp+48h] [rbp+28h] BYREF

  v10 = 0;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    result = KiTpFetchInstructionBytes((__int64)a1, &v8, 1, &v10);
    if ( (int)result < 0 )
      return result;
    if ( v8 > 0x65u )
    {
      if ( v8 == 102 )
      {
        v3 = (unsigned __int8 *)&v9 + 2;
      }
      else if ( v8 == 103 )
      {
        v3 = (unsigned __int8 *)&v9 + 3;
      }
      else
      {
        if ( v8 != 240 && (unsigned int)v8 - 242 > 1 )
        {
LABEL_20:
          if ( (_WORD)v9 )
            return 3221225659LL;
          v4 = 64;
          v5 = v10;
          if ( (v8 & 0xF0) == 0x40 )
            a1[25] = v8;
          else
            v5 = v10 - 1;
          v6 = (a1[25] & 8) == 0;
          a1[21] = v5;
          a1[4] = 0;
          if ( v6 )
          {
            v7 = 32;
            if ( BYTE2(v9) == 102 )
              v7 = 16;
            a1[1] = v7;
          }
          else
          {
            a1[1] = 64;
          }
          if ( HIBYTE(v9) == 103 )
            v4 = 32;
          result = 0LL;
          *a1 = v4;
          return result;
        }
        v3 = (unsigned __int8 *)&v9;
      }
    }
    else
    {
      if ( v8 != 101 && v8 != 38 && v8 != 46 && v8 != 54 && v8 != 62 && v8 != 100 )
        goto LABEL_20;
      v3 = (unsigned __int8 *)&v9 + 1;
    }
    if ( *v3 )
      return 3221225473LL;
    *v3 = v8;
  }
}
