/*
 * XREFs of IrqArbpQueryConflictIsa @ 0x1C009E540
 * Callers:
 *     IrqArbQueryConflict @ 0x1C009D820 (IrqArbQueryConflict.c)
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 *     LinkNodeClearPossibleData @ 0x1C0099300 (LinkNodeClearPossibleData.c)
 *     ProcessorpClearData @ 0x1C009B098 (ProcessorpClearData.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C009E4D0 (IrqArbpPrepareForTestOrConflict.c)
 *     IcClearPossibleData @ 0x1C009EFD0 (IcClearPossibleData.c)
 *     ArbQueryConflict @ 0x1C00A2340 (ArbQueryConflict.c)
 */

__int64 __fastcall IrqArbpQueryConflictIsa(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  unsigned int Conflict; // ebx
  _QWORD v6[2]; // [rsp+20h] [rbp-19h] BYREF
  _QWORD v7[12]; // [rsp+30h] [rbp-9h] BYREF

  memset(v7, 0, sizeof(v7));
  v7[3] = a2[1];
  v7[4] = *a2;
  v7[0] = v6;
  v7[1] = v6;
  v6[0] = v7;
  v6[1] = v7;
  LODWORD(v7[2]) = 1;
  result = IrqArbpPrepareForTestOrConflict(a1, (__int64)v6);
  if ( (int)result >= 0 )
  {
    Conflict = ArbQueryConflict(a1, a2);
    ProcessorpClearData(1);
    IcClearPossibleData();
    LinkNodeClearPossibleData();
    return Conflict;
  }
  return result;
}
