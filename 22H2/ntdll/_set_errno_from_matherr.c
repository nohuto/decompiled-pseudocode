/*
 * XREFs of _set_errno_from_matherr @ 0x180095560
 * Callers:
 *     _call_matherr @ 0x1800946D4 (_call_matherr.c)
 *     _handle_error @ 0x180094800 (_handle_error.c)
 *     _except1 @ 0x180094EE0 (_except1.c)
 *     _umatherr @ 0x180095594 (_umatherr.c)
 * Callees:
 *     _errno @ 0x1800858B0 (_errno.c)
 */

int *__fastcall set_errno_from_matherr(int a1)
{
  int *result; // rax

  if ( a1 == 1 )
  {
    result = errno();
    *result = 33;
  }
  else
  {
    result = (int *)(unsigned int)(a1 - 2);
    if ( (unsigned int)result <= 1 )
    {
      result = errno();
      *result = 34;
    }
  }
  return result;
}
