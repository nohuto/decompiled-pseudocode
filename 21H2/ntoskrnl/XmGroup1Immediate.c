/*
 * XREFs of XmGroup1Immediate @ 0x140397080
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     XmSetDestinationValue @ 0x1403970E8 (XmSetDestinationValue.c)
 *     XmGetImmediateSourceValue @ 0x140397110 (XmGetImmediateSourceValue.c)
 *     XmEvaluateAddressSpecifier @ 0x140397164 (XmEvaluateAddressSpecifier.c)
 *     XmSetDataType @ 0x140397518 (XmSetDataType.c)
 */

__int64 __fastcall XmGroup1Immediate(_DWORD *a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  int v4; // r8d
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  XmSetDataType();
  v2 = XmEvaluateAddressSpecifier(a1, &v5);
  XmGetImmediateSourceValue(a1, a1[28] & 2);
  XmSetDestinationValue(a1, v2);
  a1[31] += v5;
  result = 1LL;
  a1[27] = v4;
  return result;
}
