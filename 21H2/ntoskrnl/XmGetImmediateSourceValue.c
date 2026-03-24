/*
 * XREFs of XmGetImmediateSourceValue @ 0x140396FC0
 * Callers:
 *     XmGroup3General @ 0x1403966D0 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x140396770 (XmAccumImmediate.c)
 *     XmMoveRegImmediate @ 0x140396880 (XmMoveRegImmediate.c)
 *     XmGroup1Immediate @ 0x140396F30 (XmGroup1Immediate.c)
 *     XmByteImmediate @ 0x1404E52A0 (XmByteImmediate.c)
 *     XmImulImmediate @ 0x1404E5660 (XmImulImmediate.c)
 *     XmMoveImmediate @ 0x1404E57B0 (XmMoveImmediate.c)
 *     XmPushImmediate @ 0x1404E5890 (XmPushImmediate.c)
 * Callees:
 *     XmGetCodeByte @ 0x140397368 (XmGetCodeByte.c)
 *     XmGetWordImmediate @ 0x140397440 (XmGetWordImmediate.c)
 *     XmGetLongImmediate @ 0x1403C4ED4 (XmGetLongImmediate.c)
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
