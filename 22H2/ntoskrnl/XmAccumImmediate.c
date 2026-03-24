/*
 * XREFs of XmAccumImmediate @ 0x140396070
 * Callers:
 *     XmEmulateStream @ 0x140396B08 (XmEmulateStream.c)
 * Callees:
 *     XmSetDestinationValue @ 0x140396898 (XmSetDestinationValue.c)
 *     XmGetImmediateSourceValue @ 0x1403968C0 (XmGetImmediateSourceValue.c)
 *     XmSetDataType @ 0x140396CC8 (XmSetDataType.c)
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
