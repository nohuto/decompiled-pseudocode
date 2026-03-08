/*
 * XREFs of MmZeroPageWrite @ 0x1403BB7E4
 * Callers:
 *     CcZeroDataOnDisk @ 0x1403BB780 (CcZeroDataOnDisk.c)
 *     MiZeroPageFile @ 0x140617730 (MiZeroPageFile.c)
 *     PopZeroHiberFile @ 0x140986490 (PopZeroHiberFile.c)
 * Callees:
 *     MiZeroPageWrite @ 0x1403BB864 (MiZeroPageWrite.c)
 */

__int64 __fastcall MmZeroPageWrite(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r10d
  __int64 result; // rax
  int v10; // edi

  v4 = *a3;
  v5 = 0;
  if ( HIDWORD(*a3) )
  {
LABEL_5:
    v10 = 0;
    while ( 1 )
    {
      result = MiZeroPageWrite(a1, a2, 0x40000000LL, a4);
      v5 = result;
      if ( (int)result < 0 )
        break;
      v4 -= 0x40000000LL;
      if ( (unsigned int)++v10 >= 4 )
      {
        if ( HIDWORD(v4) )
          goto LABEL_5;
        goto LABEL_2;
      }
    }
  }
  else
  {
LABEL_2:
    if ( !(_DWORD)v4 )
      return v5;
    result = MiZeroPageWrite(a1, a2, (unsigned int)v4, a4);
    v5 = result;
    if ( (int)result >= 0 )
      return v5;
  }
  return result;
}
