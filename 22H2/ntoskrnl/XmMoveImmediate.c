/*
 * XREFs of XmMoveImmediate @ 0x140533150
 * Callers:
 *     XmEmulateStream @ 0x1403BDE80 (XmEmulateStream.c)
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x1403B8BCC (XmEvaluateAddressSpecifier.c)
 *     XmSetDataType @ 0x1403B8E88 (XmSetDataType.c)
 *     XmGetImmediateSourceValue @ 0x1403B8EB4 (XmGetImmediateSourceValue.c)
 */

__int64 __fastcall XmMoveImmediate(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  XmSetDataType(a1);
  *(_QWORD *)(a1 + 88) = XmEvaluateAddressSpecifier(a1, &v3);
  *(_DWORD *)(a1 + 108) = XmGetImmediateSourceValue(a1, 0);
  return 1LL;
}
