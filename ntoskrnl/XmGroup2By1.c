/*
 * XREFs of XmGroup2By1 @ 0x140395740
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x1403B3F0C (XmEvaluateAddressSpecifier.c)
 *     XmSetDataType @ 0x1403B41C8 (XmSetDataType.c)
 *     XmSetDestinationValue @ 0x1403B4248 (XmSetDestinationValue.c)
 */

__int64 __fastcall XmGroup2By1(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // r8d
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  XmSetDataType(a1);
  result = XmEvaluateAddressSpecifier(a1, &v4);
  if ( result )
  {
    *(_DWORD *)(a1 + 108) = 1;
    XmSetDestinationValue(a1, result);
    result = v3;
    *(_DWORD *)(a1 + 124) += v4;
  }
  return result;
}
