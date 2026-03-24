/*
 * XREFs of XmGroup2ByByte @ 0x1403C0E20
 * Callers:
 *     XmEmulateStream @ 0x140396B08 (XmEmulateStream.c)
 * Callees:
 *     XmSetDestinationValue @ 0x140396898 (XmSetDestinationValue.c)
 *     XmEvaluateAddressSpecifier @ 0x140396914 (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x140396C68 (XmGetCodeByte.c)
 *     XmSetDataType @ 0x140396CC8 (XmSetDataType.c)
 */

__int64 __fastcall XmGroup2ByByte(__int64 a1)
{
  unsigned __int16 *v2; // rbx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  XmSetDataType(a1);
  v2 = (unsigned __int16 *)XmEvaluateAddressSpecifier(a1, &v4);
  *(_DWORD *)(a1 + 108) = XmGetCodeByte(a1) & 0x1F;
  XmSetDestinationValue(a1, v2);
  *(_DWORD *)(a1 + 124) += v4;
  return 1LL;
}
