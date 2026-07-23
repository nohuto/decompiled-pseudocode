/*
 * XREFs of XmSetDestinationValue @ 0x1403970E8
 * Callers:
 *     XmGroup3General @ 0x140396820 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x1403968C0 (XmAccumImmediate.c)
 *     XmOpcodeRegister @ 0x140396F40 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x140396F90 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x140397080 (XmGroup1Immediate.c)
 *     XmGroup2By1 @ 0x1403C13D0 (XmGroup2By1.c)
 *     XmGroup2ByByte @ 0x1403C15F0 (XmGroup2ByByte.c)
 *     XmPopaOp @ 0x1403C3A70 (XmPopaOp.c)
 *     XmGroup2ByCL @ 0x1403C3C70 (XmGroup2ByCL.c)
 *     XmGroup45General @ 0x1403C3CD0 (XmGroup45General.c)
 *     XmPushPopSegment @ 0x1403C4490 (XmPushPopSegment.c)
 *     XmAccumRegister @ 0x1403C5340 (XmAccumRegister.c)
 *     XmFlagsRegister @ 0x1404E5590 (XmFlagsRegister.c)
 *     XmGeneralBitOffset @ 0x1404E55D0 (XmGeneralBitOffset.c)
 *     XmGroup7General @ 0x1404E56F0 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x1404E5750 (XmGroup8BitOffset.c)
 *     XmImulImmediate @ 0x1404E58A0 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x1404E5920 (XmLoadSegment.c)
 *     XmPopGeneral @ 0x1404E5A40 (XmPopGeneral.c)
 *     XmShiftDouble @ 0x1404E5B50 (XmShiftDouble.c)
 *     XmCmpsOp @ 0x1404E6850 (XmCmpsOp.c)
 *     XmScasOp @ 0x1404E6B80 (XmScasOp.c)
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
