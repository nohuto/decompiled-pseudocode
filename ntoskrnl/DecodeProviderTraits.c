/*
 * XREFs of DecodeProviderTraits @ 0x1402315FC
 * Callers:
 *     EtwpWriteUserEvent @ 0x1406AA640 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DecodeProviderTraits(unsigned __int16 *a1, char a2, _WORD *a3, unsigned __int16 **a4)
{
  __int64 result; // rax
  unsigned __int16 *v6; // rcx

  result = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v6 = a1 + 3;
    }
    else
    {
      v6 = 0LL;
      result = *a1;
    }
  }
  else
  {
    v6 = 0LL;
  }
  *a3 = result;
  *a4 = v6;
  return result;
}
