/*
 * XREFs of RtlStringCbLengthA @ 0x14050A538
 * Callers:
 *     KiValidateComponentName @ 0x140518D80 (KiValidateComponentName.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1409AC4F0 (IopLiveDumpCallRemovePagesCallbacks.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbLengthA(STRSAFE_PCNZCH psz, size_t cbMax, size_t *pcbLength)
{
  size_t v3; // r9
  size_t v4; // r10
  size_t i; // r11
  NTSTATUS result; // eax

  v3 = 0LL;
  v4 = 0LL;
  if ( psz && cbMax <= 0x7FFFFFFF )
  {
    for ( i = cbMax; i; --i )
    {
      if ( !*psz )
        break;
      ++psz;
    }
    result = i == 0 ? 0xC000000D : 0;
    if ( i )
      v4 = cbMax - i;
  }
  else
  {
    result = -1073741811;
  }
  if ( pcbLength )
  {
    if ( result >= 0 )
      v3 = v4;
    *pcbLength = v3;
  }
  return result;
}
