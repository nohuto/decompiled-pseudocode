/*
 * XREFs of XmMoveImmediate @ 0x140535490
 * Callers:
 *     XmEmulateStream @ 0x1403A32AC (XmEmulateStream.c)
 * Callees:
 *     XmGetImmediateSourceValue @ 0x1403A3060 (XmGetImmediateSourceValue.c)
 *     XmEvaluateAddressSpecifier @ 0x1403A30B4 (XmEvaluateAddressSpecifier.c)
 *     XmSetDataType @ 0x1403A346C (XmSetDataType.c)
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
