/*
 * XREFs of XmSetDestinationValue @ 0x140396898
 * Callers:
 *     XmGroup3General @ 0x140395FD0 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x140396070 (XmAccumImmediate.c)
 *     XmOpcodeRegister @ 0x1403966F0 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x140396740 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x140396830 (XmGroup1Immediate.c)
 *     XmGroup2By1 @ 0x1403C0C00 (XmGroup2By1.c)
 *     XmGroup2ByByte @ 0x1403C0E20 (XmGroup2ByByte.c)
 *     XmPopaOp @ 0x1403C32A0 (XmPopaOp.c)
 *     XmGroup2ByCL @ 0x1403C34A0 (XmGroup2ByCL.c)
 *     XmGroup45General @ 0x1403C3500 (XmGroup45General.c)
 *     XmPushPopSegment @ 0x1403C3CC0 (XmPushPopSegment.c)
 *     XmAccumRegister @ 0x1403C4B70 (XmAccumRegister.c)
 *     XmFlagsRegister @ 0x1404E5290 (XmFlagsRegister.c)
 *     XmGeneralBitOffset @ 0x1404E52D0 (XmGeneralBitOffset.c)
 *     XmGroup7General @ 0x1404E53F0 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x1404E5450 (XmGroup8BitOffset.c)
 *     XmImulImmediate @ 0x1404E55A0 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x1404E5620 (XmLoadSegment.c)
 *     XmPopGeneral @ 0x1404E5740 (XmPopGeneral.c)
 *     XmShiftDouble @ 0x1404E5850 (XmShiftDouble.c)
 *     XmCmpsOp @ 0x1404E6550 (XmCmpsOp.c)
 *     XmScasOp @ 0x1404E6880 (XmScasOp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmSetDestinationValue(__int64 a1, unsigned __int16 *a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 88) = a2;
  if ( v2 )
  {
    if ( v2 == 1 )
      result = *a2;
    else
      result = *(unsigned int *)a2;
  }
  else
  {
    result = *(unsigned __int8 *)a2;
  }
  *(_DWORD *)(a1 + 104) = result;
  return result;
}
