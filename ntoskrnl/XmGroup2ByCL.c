/*
 * XREFs of XmGroup2ByCL @ 0x140394FE0
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x1403B3F0C (XmEvaluateAddressSpecifier.c)
 *     XmSetDataType @ 0x1403B41C8 (XmSetDataType.c)
 *     XmSetDestinationValue @ 0x1403B4248 (XmSetDestinationValue.c)
 */

__int64 __fastcall XmGroup2ByCL(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  XmSetDataType(a1);
  result = XmEvaluateAddressSpecifier(a1, &v3);
  if ( result )
  {
    *(_DWORD *)(a1 + 108) = *(_BYTE *)(a1 + 28) & 0x1F;
    XmSetDestinationValue(a1, result);
    *(_DWORD *)(a1 + 124) += v3;
    return 1LL;
  }
  return result;
}
