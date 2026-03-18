/*
 * XREFs of XmGroup2ByCL @ 0x1403D0D90
 * Callers:
 *     XmEmulateStream @ 0x1403A32AC (XmEmulateStream.c)
 * Callees:
 *     XmSetDestinationValue @ 0x1403A3038 (XmSetDestinationValue.c)
 *     XmEvaluateAddressSpecifier @ 0x1403A30B4 (XmEvaluateAddressSpecifier.c)
 *     XmSetDataType @ 0x1403A346C (XmSetDataType.c)
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
    XmSetDestinationValue(a1, (unsigned __int16 *)result);
    *(_DWORD *)(a1 + 124) += v3;
    return 1LL;
  }
  return result;
}
