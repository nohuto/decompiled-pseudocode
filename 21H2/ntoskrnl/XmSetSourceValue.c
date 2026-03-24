/*
 * XREFs of XmSetSourceValue @ 0x140396F08
 * Callers:
 *     XmOutOp @ 0x140396620 (XmOutOp.c)
 *     XmGroup3General @ 0x1403966D0 (XmGroup3General.c)
 *     XmMoveGeneral @ 0x1403968E0 (XmMoveGeneral.c)
 *     XmOpcodeRegister @ 0x140396DF0 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x140396E40 (XmGroup1General.c)
 *     XmPopStack @ 0x140396EBC (XmPopStack.c)
 *     XmStosOp @ 0x1403C0D10 (XmStosOp.c)
 *     XmMoveXxGeneral @ 0x1403C36C0 (XmMoveXxGeneral.c)
 *     XmGroup45General @ 0x1403C38A0 (XmGroup45General.c)
 *     XmPushPopSegment @ 0x1403C4060 (XmPushPopSegment.c)
 *     XmPushaOp @ 0x1403C40A0 (XmPushaOp.c)
 *     XmAccumRegister @ 0x1403C4F10 (XmAccumRegister.c)
 *     XmSegmentOffset @ 0x1403C91A0 (XmSegmentOffset.c)
 *     XmMoveSegment @ 0x1403C99F0 (XmMoveSegment.c)
 *     XmBitScanGeneral @ 0x1404E5240 (XmBitScanGeneral.c)
 *     XmFlagsRegister @ 0x1404E5350 (XmFlagsRegister.c)
 *     XmGeneralBitOffset @ 0x1404E5390 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x1404E5430 (XmGeneralRegister.c)
 *     XmLoadSegment @ 0x1404E56E0 (XmLoadSegment.c)
 *     XmShiftDouble @ 0x1404E5910 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x1404E5990 (XmXlatOpcode.c)
 *     XmOutsOp @ 0x1404E63B0 (XmOutsOp.c)
 *     XmCmpsOp @ 0x1404E6610 (XmCmpsOp.c)
 *     XmLodsOp @ 0x1404E6830 (XmLodsOp.c)
 *     XmMovsOp @ 0x1404E68B0 (XmMovsOp.c)
 *     XmScasOp @ 0x1404E6940 (XmScasOp.c)
 *     XmBoundOp @ 0x1404E6BD0 (XmBoundOp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmSetSourceValue(__int64 a1, unsigned __int16 *a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 96) = a2;
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
  *(_DWORD *)(a1 + 108) = result;
  return result;
}
