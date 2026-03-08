/*
 * XREFs of XmPortImmediate @ 0x140394750
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmGetCodeByte @ 0x1403B40F4 (XmGetCodeByte.c)
 *     XmSetDataType @ 0x1403B41C8 (XmSetDataType.c)
 */

__int64 __fastcall XmPortImmediate(__int64 a1)
{
  unsigned __int8 CodeByte; // al
  unsigned int v3; // r8d

  CodeByte = XmGetCodeByte();
  *(_DWORD *)(a1 + 120) = 1;
  *(_DWORD *)(a1 + 108) = CodeByte;
  XmSetDataType(a1);
  return v3;
}
