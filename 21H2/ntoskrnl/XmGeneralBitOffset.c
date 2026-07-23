/*
 * XREFs of XmGeneralBitOffset @ 0x1404E55D0
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     XmSetSourceValue @ 0x140397058 (XmSetSourceValue.c)
 *     XmSetDestinationValue @ 0x1403970E8 (XmSetDestinationValue.c)
 *     XmEvaluateAddressSpecifier @ 0x140397164 (XmEvaluateAddressSpecifier.c)
 *     XmGetOffsetAddress @ 0x1403C93AC (XmGetOffsetAddress.c)
 */

__int64 __fastcall XmGeneralBitOffset(__int64 a1)
{
  __int64 v2; // rcx
  int *OffsetAddress; // r8
  int v4; // edx
  int v5; // ecx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  XmEvaluateAddressSpecifier(a1, (int *)&v7);
  XmSetSourceValue(a1, (unsigned __int16 *)(a1 + 4 * (v7 + 6LL)));
  if ( !*(_BYTE *)(a1 + 142) )
  {
    v4 = 536870908;
    if ( *(_DWORD *)(a1 + 120) != 3 )
      v4 = 536870910;
    OffsetAddress = XmGetOffsetAddress(v2, *(_DWORD *)(a1 + 128) + ((*(_DWORD *)(a1 + 108) >> 3) & (unsigned int)v4));
  }
  v5 = 31;
  if ( *(_DWORD *)(a1 + 120) != 3 )
    v5 = 15;
  *(_DWORD *)(a1 + 108) &= v5;
  XmSetDestinationValue(a1, (unsigned __int16 *)OffsetAddress);
  return 1LL;
}
