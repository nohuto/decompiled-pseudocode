/*
 * XREFs of RIMIDEValidateInjectionTime @ 0x1C01C530C
 * Callers:
 *     RIMIDEGetTimeStampDelta @ 0x1C01C3440 (RIMIDEGetTimeStampDelta.c)
 * Callees:
 *     <none>
 */

char __fastcall RIMIDEValidateInjectionTime(int a1, int a2, unsigned int a3, int a4, int a5)
{
  char result; // al
  unsigned int v7; // ecx

  result = 0;
  if ( a4 && !a1 || !a2 && !a1 )
    return 1;
  if ( a4 )
    return (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - a1 <= 0x1388;
  if ( a2 || !a1 || a5 )
  {
    v7 = a1 - a2;
    if ( v7 )
    {
      if ( v7 <= a3 )
        return (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - a1 <= 0x1388;
    }
  }
  return result;
}
