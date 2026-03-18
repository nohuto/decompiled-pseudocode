/*
 * XREFs of XmSetDestinationValue @ 0x1403A3038
 * Callers:
 *     XmGroup3General @ 0x1403A2770 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x1403A2810 (XmAccumImmediate.c)
 *     XmOpcodeRegister @ 0x1403A2E90 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x1403A2EE0 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x1403A2FD0 (XmGroup1Immediate.c)
 *     XmGroup2By1 @ 0x1403CC4C0 (XmGroup2By1.c)
 *     XmGroup2ByByte @ 0x1403CCF30 (XmGroup2ByByte.c)
 *     XmPopaOp @ 0x1403CFB60 (XmPopaOp.c)
 *     XmGroup2ByCL @ 0x1403D0D90 (XmGroup2ByCL.c)
 *     XmPushPopSegment @ 0x1403D0DF0 (XmPushPopSegment.c)
 *     XmGroup45General @ 0x1403D0E30 (XmGroup45General.c)
 *     XmAccumRegister @ 0x1403D2130 (XmAccumRegister.c)
 *     XmFlagsRegister @ 0x140535030 (XmFlagsRegister.c)
 *     XmGeneralBitOffset @ 0x140535070 (XmGeneralBitOffset.c)
 *     XmGroup7General @ 0x140535190 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x1405351F0 (XmGroup8BitOffset.c)
 *     XmImulImmediate @ 0x140535340 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x1405353C0 (XmLoadSegment.c)
 *     XmPopGeneral @ 0x1405354E0 (XmPopGeneral.c)
 *     XmShiftDouble @ 0x1405355F0 (XmShiftDouble.c)
 *     XmCmpsOp @ 0x1405362F0 (XmCmpsOp.c)
 *     XmScasOp @ 0x140536620 (XmScasOp.c)
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
