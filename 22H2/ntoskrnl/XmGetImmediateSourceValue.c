/*
 * XREFs of XmGetImmediateSourceValue @ 0x1403B8EB4
 * Callers:
 *     XmGroup3General @ 0x1403B8320 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x1403B8470 (XmAccumImmediate.c)
 *     XmMoveRegImmediate @ 0x1403B85D0 (XmMoveRegImmediate.c)
 *     XmGroup1Immediate @ 0x1403B8AF0 (XmGroup1Immediate.c)
 *     XmByteImmediate @ 0x140532C70 (XmByteImmediate.c)
 *     XmImulImmediate @ 0x140533000 (XmImulImmediate.c)
 *     XmMoveImmediate @ 0x140533150 (XmMoveImmediate.c)
 *     XmPushImmediate @ 0x1405331F0 (XmPushImmediate.c)
 * Callees:
 *     XmGetLongImmediate @ 0x1403999E8 (XmGetLongImmediate.c)
 *     XmGetCodeByte @ 0x1403B8DB4 (XmGetCodeByte.c)
 *     XmGetWordImmediate @ 0x1403B9010 (XmGetWordImmediate.c)
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
