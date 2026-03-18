/*
 * XREFs of XmAccumImmediate @ 0x1403A2810
 * Callers:
 *     XmEmulateStream @ 0x1403A32AC (XmEmulateStream.c)
 * Callees:
 *     XmSetDestinationValue @ 0x1403A3038 (XmSetDestinationValue.c)
 *     XmGetImmediateSourceValue @ 0x1403A3060 (XmGetImmediateSourceValue.c)
 *     XmSetDataType @ 0x1403A346C (XmSetDataType.c)
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
