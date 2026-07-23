/*
 * XREFs of XmAccumImmediate @ 0x1403968C0
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     XmSetDestinationValue @ 0x1403970E8 (XmSetDestinationValue.c)
 *     XmGetImmediateSourceValue @ 0x140397110 (XmGetImmediateSourceValue.c)
 *     XmSetDataType @ 0x140397518 (XmSetDataType.c)
 */

__int64 __fastcall XmAccumImmediate(__int64 a1)
{
  __int64 result; // rax
  int v3; // r8d

  XmSetDataType();
  XmGetImmediateSourceValue(a1, 0LL);
  XmSetDestinationValue(a1, a1 + 24);
  result = 1LL;
  *(_DWORD *)(a1 + 108) = v3;
  return result;
}
