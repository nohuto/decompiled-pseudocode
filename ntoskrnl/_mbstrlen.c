/*
 * XREFs of _mbstrlen @ 0x1403D7BF4
 * Callers:
 *     mbstowcs @ 0x1403D4670 (mbstowcs.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x1406EA670 (RtlAnsiCharToUnicodeChar.c)
 */

size_t __cdecl mbstrlen(const char *Str)
{
  const char *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = Str;
  while ( (unsigned __int16)RtlAnsiCharToUnicodeChar(&v3) )
    ;
  return v3 - Str - 1;
}
