/*
 * XREFs of XmGroup8BitOffset @ 0x1404E5750
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     XmSetDestinationValue @ 0x1403970E8 (XmSetDestinationValue.c)
 *     XmEvaluateAddressSpecifier @ 0x140397164 (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x1403974B8 (XmGetCodeByte.c)
 *     XmGetOffsetAddress @ 0x1403C93AC (XmGetOffsetAddress.c)
 */

__int64 __fastcall XmGroup8BitOffset(__int64 a1)
{
  unsigned __int16 *OffsetAddress; // rdi
  bool v3; // zf
  int v4; // eax
  char v5; // dl
  int v6; // ecx
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  OffsetAddress = (unsigned __int16 *)XmEvaluateAddressSpecifier(a1, &v8);
  LOBYTE(v4) = XmGetCodeByte(a1);
  v3 = *(_BYTE *)(a1 + 142) == 0;
  v4 = (unsigned __int8)v4;
  *(_DWORD *)(a1 + 108) = (unsigned __int8)v4;
  if ( v3 )
  {
    v5 = -4;
    if ( *(_DWORD *)(a1 + 120) != 3 )
      v5 = -2;
    OffsetAddress = (unsigned __int16 *)XmGetOffsetAddress(
                                          a1,
                                          *(_DWORD *)(a1 + 128) + (((unsigned __int8)v4 >> 3) & *(_DWORD *)&v5));
    v4 = *(_DWORD *)(a1 + 108);
  }
  v6 = 31;
  if ( *(_DWORD *)(a1 + 120) != 3 )
    v6 = 15;
  *(_DWORD *)(a1 + 108) = v4 & v6;
  XmSetDestinationValue(a1, OffsetAddress);
  result = 1LL;
  *(_DWORD *)(a1 + 124) += v8 & 3;
  return result;
}
