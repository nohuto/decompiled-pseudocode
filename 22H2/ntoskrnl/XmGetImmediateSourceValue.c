/*
 * XREFs of XmGetImmediateSourceValue @ 0x1403968C0
 * Callers:
 *     XmGroup3General @ 0x140395FD0 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x140396070 (XmAccumImmediate.c)
 *     XmMoveRegImmediate @ 0x140396180 (XmMoveRegImmediate.c)
 *     XmGroup1Immediate @ 0x140396830 (XmGroup1Immediate.c)
 *     XmByteImmediate @ 0x1404E51E0 (XmByteImmediate.c)
 *     XmImulImmediate @ 0x1404E55A0 (XmImulImmediate.c)
 *     XmMoveImmediate @ 0x1404E56F0 (XmMoveImmediate.c)
 *     XmPushImmediate @ 0x1404E57D0 (XmPushImmediate.c)
 * Callees:
 *     XmGetCodeByte @ 0x140396C68 (XmGetCodeByte.c)
 *     XmGetWordImmediate @ 0x140396D40 (XmGetWordImmediate.c)
 *     XmGetLongImmediate @ 0x1403C4B34 (XmGetLongImmediate.c)
 */

__int64 __fastcall XmGetImmediateSourceValue(__int64 a1, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 120);
  if ( !v2 )
    return (unsigned __int8)XmGetCodeByte();
  if ( v2 == 1 )
  {
    if ( a2 )
      return (unsigned __int16)(char)XmGetCodeByte();
    else
      return (unsigned __int16)XmGetWordImmediate();
  }
  else if ( a2 )
  {
    return (unsigned int)(char)XmGetCodeByte();
  }
  else
  {
    return XmGetLongImmediate();
  }
}
