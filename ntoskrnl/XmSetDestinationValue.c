/*
 * XREFs of XmSetDestinationValue @ 0x1403B4248
 * Callers:
 *     XmGroup2ByByte @ 0x140394790 (XmGroup2ByByte.c)
 *     XmGroup2ByCL @ 0x140394FE0 (XmGroup2ByCL.c)
 *     XmGroup2By1 @ 0x140395740 (XmGroup2By1.c)
 *     XmAccumRegister @ 0x1403968E0 (XmAccumRegister.c)
 *     XmGroup45General @ 0x140398BB0 (XmGroup45General.c)
 *     XmPushPopSegment @ 0x14039A410 (XmPushPopSegment.c)
 *     XmPopaOp @ 0x14039A450 (XmPopaOp.c)
 *     XmFlagsRegister @ 0x14039F940 (XmFlagsRegister.c)
 *     XmGroup3General @ 0x1403B3660 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x1403B37B0 (XmAccumImmediate.c)
 *     XmOpcodeRegister @ 0x1403B3D60 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x1403B3DB0 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x1403B3E30 (XmGroup1Immediate.c)
 *     XmGeneralBitOffset @ 0x140530850 (XmGeneralBitOffset.c)
 *     XmGroup7General @ 0x140530980 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x1405309E0 (XmGroup8BitOffset.c)
 *     XmImulImmediate @ 0x140530B30 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x140530BB0 (XmLoadSegment.c)
 *     XmPopGeneral @ 0x140530CD0 (XmPopGeneral.c)
 *     XmShiftDouble @ 0x140530DA0 (XmShiftDouble.c)
 *     XmCmpsOp @ 0x140531A20 (XmCmpsOp.c)
 *     XmScasOp @ 0x140531D50 (XmScasOp.c)
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
