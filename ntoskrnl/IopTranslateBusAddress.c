/*
 * XREFs of IopTranslateBusAddress @ 0x140808DE8
 * Callers:
 *     IopGenericTranslateOrdering @ 0x140808D50 (IopGenericTranslateOrdering.c)
 * Callees:
 *     HalTranslateBusAddress @ 0x1403707F0 (HalTranslateBusAddress.c)
 */

__int64 __fastcall IopTranslateBusAddress(
        PHYSICAL_ADDRESS BusAddress,
        char a2,
        LARGE_INTEGER *TranslatedAddress,
        _BYTE *a4)
{
  ULONG v6; // edi
  ULONG AddressSpace; // [rsp+48h] [rbp+10h] BYREF

  if ( ((a2 - 3) & 0xFB) != 0 )
  {
    if ( a2 != 1 )
      return 3221225485LL;
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  AddressSpace = v6;
  if ( !HalTranslateBusAddress(Isa, 0, BusAddress, &AddressSpace, TranslatedAddress) )
    return 3221225473LL;
  if ( (AddressSpace & 0xFFFFFFF9) == 0 )
  {
    if ( !v6 && a2 == 7 )
      *a4 = 7;
    else
      *a4 = 3;
    return 0LL;
  }
  if ( ((AddressSpace - 1) & 0xFFFFFFFD) == 0 )
  {
    *a4 = 1;
    return 0LL;
  }
  return 3221225485LL;
}
