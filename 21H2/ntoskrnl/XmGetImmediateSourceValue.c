/*
 * XREFs of XmGetImmediateSourceValue @ 0x1403A3060
 * Callers:
 *     XmGroup3General @ 0x1403A2770 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x1403A2810 (XmAccumImmediate.c)
 *     XmMoveRegImmediate @ 0x1403A2920 (XmMoveRegImmediate.c)
 *     XmGroup1Immediate @ 0x1403A2FD0 (XmGroup1Immediate.c)
 *     XmByteImmediate @ 0x140534F80 (XmByteImmediate.c)
 *     XmImulImmediate @ 0x140535340 (XmImulImmediate.c)
 *     XmMoveImmediate @ 0x140535490 (XmMoveImmediate.c)
 *     XmPushImmediate @ 0x140535570 (XmPushImmediate.c)
 * Callees:
 *     XmGetCodeByte @ 0x1403A340C (XmGetCodeByte.c)
 *     XmGetWordImmediate @ 0x1403A34E0 (XmGetWordImmediate.c)
 *     XmGetLongImmediate @ 0x1403D20CC (XmGetLongImmediate.c)
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
