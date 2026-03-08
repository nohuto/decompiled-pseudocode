/*
 * XREFs of XmAccumImmediate @ 0x1403B37B0
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmSetDataType @ 0x1403B41C8 (XmSetDataType.c)
 *     XmGetImmediateSourceValue @ 0x1403B41F4 (XmGetImmediateSourceValue.c)
 *     XmSetDestinationValue @ 0x1403B4248 (XmSetDestinationValue.c)
 */

__int64 __fastcall XmAccumImmediate(__int64 a1)
{
  __int64 result; // rax
  int v3; // r8d

  XmSetDataType(a1);
  XmGetImmediateSourceValue(a1, 0LL);
  XmSetDestinationValue(a1, a1 + 24);
  result = 1LL;
  *(_DWORD *)(a1 + 108) = v3;
  return result;
}
