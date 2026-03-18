/*
 * XREFs of XmAccumImmediate @ 0x1403B8470
 * Callers:
 *     XmEmulateStream @ 0x1403BDE80 (XmEmulateStream.c)
 * Callees:
 *     XmSetDataType @ 0x1403B8E88 (XmSetDataType.c)
 *     XmGetImmediateSourceValue @ 0x1403B8EB4 (XmGetImmediateSourceValue.c)
 *     XmSetDestinationValue @ 0x1403B8F08 (XmSetDestinationValue.c)
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
