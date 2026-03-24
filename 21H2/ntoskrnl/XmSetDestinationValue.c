/*
 * XREFs of XmSetDestinationValue @ 0x140396F98
 * Callers:
 *     XmGroup3General @ 0x1403966D0 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x140396770 (XmAccumImmediate.c)
 *     XmOpcodeRegister @ 0x140396DF0 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x140396E40 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x140396F30 (XmGroup1Immediate.c)
 *     XmGroup2By1 @ 0x1403C0FA0 (XmGroup2By1.c)
 *     XmGroup2ByByte @ 0x1403C11C0 (XmGroup2ByByte.c)
 *     XmPopaOp @ 0x1403C3640 (XmPopaOp.c)
 *     XmGroup2ByCL @ 0x1403C3840 (XmGroup2ByCL.c)
 *     XmGroup45General @ 0x1403C38A0 (XmGroup45General.c)
 *     XmPushPopSegment @ 0x1403C4060 (XmPushPopSegment.c)
 *     XmAccumRegister @ 0x1403C4F10 (XmAccumRegister.c)
 *     XmFlagsRegister @ 0x1404E5350 (XmFlagsRegister.c)
 *     XmGeneralBitOffset @ 0x1404E5390 (XmGeneralBitOffset.c)
 *     XmGroup7General @ 0x1404E54B0 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x1404E5510 (XmGroup8BitOffset.c)
 *     XmImulImmediate @ 0x1404E5660 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x1404E56E0 (XmLoadSegment.c)
 *     XmPopGeneral @ 0x1404E5800 (XmPopGeneral.c)
 *     XmShiftDouble @ 0x1404E5910 (XmShiftDouble.c)
 *     XmCmpsOp @ 0x1404E6610 (XmCmpsOp.c)
 *     XmScasOp @ 0x1404E6940 (XmScasOp.c)
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
