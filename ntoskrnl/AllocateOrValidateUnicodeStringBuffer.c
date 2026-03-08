/*
 * XREFs of AllocateOrValidateUnicodeStringBuffer @ 0x1403051CC
 * Callers:
 *     RtlDowncaseUnicodeString @ 0x14076C0F0 (RtlDowncaseUnicodeString.c)
 *     RtlOemStringToCountedUnicodeString @ 0x14078C3F0 (RtlOemStringToCountedUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x1407A3D00 (RtlUpcaseUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x140868F30 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     ExpAllocateStringRoutine @ 0x140777DB0 (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall AllocateOrValidateUnicodeStringBuffer(char a1, unsigned int a2, __int64 *a3, _WORD *a4)
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
