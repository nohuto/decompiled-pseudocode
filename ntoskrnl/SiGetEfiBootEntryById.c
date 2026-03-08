/*
 * XREFs of SiGetEfiBootEntryById @ 0x140A5CD90
 * Callers:
 *     SiGetEspFromFirmware @ 0x140A5D1A4 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall SiGetEfiBootEntryById(unsigned int *a1, int a2)
{
  __int64 v2; // rax
  unsigned int *result; // rax

  while ( 1 )
  {
    result = a1 + 1;
    if ( a1[3] == a2 )
      break;
    v2 = *a1;
    if ( !(_DWORD)v2 )
      return 0LL;
    a1 = (unsigned int *)((char *)a1 + v2);
  }
  return result;
}
