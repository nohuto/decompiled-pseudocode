/*
 * XREFs of XmGetImmediateSourceValue @ 0x1403B41F4
 * Callers:
 *     XmGroup3General @ 0x1403B3660 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x1403B37B0 (XmAccumImmediate.c)
 *     XmMoveRegImmediate @ 0x1403B3910 (XmMoveRegImmediate.c)
 *     XmGroup1Immediate @ 0x1403B3E30 (XmGroup1Immediate.c)
 *     XmByteImmediate @ 0x1405307A0 (XmByteImmediate.c)
 *     XmImulImmediate @ 0x140530B30 (XmImulImmediate.c)
 *     XmMoveImmediate @ 0x140530C80 (XmMoveImmediate.c)
 *     XmPushImmediate @ 0x140530D20 (XmPushImmediate.c)
 * Callees:
 *     XmGetLongImmediate @ 0x140395F88 (XmGetLongImmediate.c)
 *     XmGetCodeByte @ 0x1403B40F4 (XmGetCodeByte.c)
 *     XmGetWordImmediate @ 0x1403B4350 (XmGetWordImmediate.c)
 */

__int64 __fastcall XmGetImmediateSourceValue(__int64 a1, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 120);
  if ( !v2 )
    return (unsigned __int8)XmGetCodeByte(a1);
  if ( v2 == 1 )
  {
    if ( a2 )
      return (unsigned __int16)XmGetCodeByte(a1);
    else
      return (unsigned __int16)XmGetWordImmediate(a1);
  }
  else if ( a2 )
  {
    return (unsigned int)XmGetCodeByte(a1);
  }
  else
  {
    return XmGetLongImmediate(a1);
  }
}
