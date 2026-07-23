/*
 * XREFs of XmGetImmediateSourceValue @ 0x140397110
 * Callers:
 *     XmGroup3General @ 0x140396820 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x1403968C0 (XmAccumImmediate.c)
 *     XmMoveRegImmediate @ 0x1403969D0 (XmMoveRegImmediate.c)
 *     XmGroup1Immediate @ 0x140397080 (XmGroup1Immediate.c)
 *     XmByteImmediate @ 0x1404E54E0 (XmByteImmediate.c)
 *     XmImulImmediate @ 0x1404E58A0 (XmImulImmediate.c)
 *     XmMoveImmediate @ 0x1404E59F0 (XmMoveImmediate.c)
 *     XmPushImmediate @ 0x1404E5AD0 (XmPushImmediate.c)
 * Callees:
 *     XmGetCodeByte @ 0x1403974B8 (XmGetCodeByte.c)
 *     XmGetWordImmediate @ 0x140397590 (XmGetWordImmediate.c)
 *     XmGetLongImmediate @ 0x1403C5304 (XmGetLongImmediate.c)
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
