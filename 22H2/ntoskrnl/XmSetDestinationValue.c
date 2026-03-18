/*
 * XREFs of XmSetDestinationValue @ 0x1403B8F08
 * Callers:
 *     XmGroup2ByByte @ 0x140396960 (XmGroup2ByByte.c)
 *     XmGroup2ByCL @ 0x140398A40 (XmGroup2ByCL.c)
 *     XmGroup2By1 @ 0x1403991A0 (XmGroup2By1.c)
 *     XmAccumRegister @ 0x14039A4E0 (XmAccumRegister.c)
 *     XmGroup45General @ 0x14039C7B0 (XmGroup45General.c)
 *     XmPushPopSegment @ 0x14039ECB0 (XmPushPopSegment.c)
 *     XmPopaOp @ 0x14039ECF0 (XmPopaOp.c)
 *     XmFlagsRegister @ 0x1403A4F20 (XmFlagsRegister.c)
 *     XmGroup3General @ 0x1403B8320 (XmGroup3General.c)
 *     XmAccumImmediate @ 0x1403B8470 (XmAccumImmediate.c)
 *     XmOpcodeRegister @ 0x1403B8A20 (XmOpcodeRegister.c)
 *     XmGroup1General @ 0x1403B8A70 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x1403B8AF0 (XmGroup1Immediate.c)
 *     XmGeneralBitOffset @ 0x140532D20 (XmGeneralBitOffset.c)
 *     XmGroup7General @ 0x140532E50 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x140532EB0 (XmGroup8BitOffset.c)
 *     XmImulImmediate @ 0x140533000 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x140533080 (XmLoadSegment.c)
 *     XmPopGeneral @ 0x1405331A0 (XmPopGeneral.c)
 *     XmShiftDouble @ 0x140533270 (XmShiftDouble.c)
 *     XmCmpsOp @ 0x140533EF0 (XmCmpsOp.c)
 *     XmScasOp @ 0x140534220 (XmScasOp.c)
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
