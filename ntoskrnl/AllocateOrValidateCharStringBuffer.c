/*
 * XREFs of AllocateOrValidateCharStringBuffer @ 0x140303E1C
 * Callers:
 *     RtlUnicodeStringToCountedOemString @ 0x14079F7A0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1407A0140 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlUnicodeStringToOemString @ 0x14085D450 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1408716E0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1409B5BB0 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     ExpAllocateStringRoutine @ 0x140777DB0 (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall AllocateOrValidateCharStringBuffer(char a1, unsigned int a2, __int64 *a3, _WORD *a4)
{
  unsigned int v4; // ebx
  __int16 v5; // si
  __int64 StringRoutine; // rax

  v4 = 0;
  v5 = a2;
  if ( a1 )
  {
    StringRoutine = ExpAllocateStringRoutine(a2);
    *a3 = StringRoutine;
    if ( StringRoutine )
    {
      *a4 = v5;
      return 0LL;
    }
    else
    {
      *a4 = 0;
      return 3221225495LL;
    }
  }
  else
  {
    if ( a2 > (unsigned __int16)*a4 || !*a3 )
      return (unsigned int)-2147483643;
    return v4;
  }
}
