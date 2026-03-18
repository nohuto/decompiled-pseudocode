/*
 * XREFs of ConvertPointCoordinates @ 0x1C003C35C
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C003BCDC (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x1C01A243C (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x1C01A73A0 (rimGetCompleteFrameFromIVCompleteFrame.c)
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x1C01BE664 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 *     SynthesizeMitTouchInput @ 0x1C01F2134 (SynthesizeMitTouchInput.c)
 * Callees:
 *     ?ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z @ 0x1C003C3EC (-ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z.c)
 */

__int64 __fastcall ConvertPointCoordinates(__int64 a1, int *a2, int *a3, _QWORD *a4)
{
  unsigned int v7; // esi
  int v9; // [rsp+54h] [rbp+Ch]
  __int64 plResult; // [rsp+58h] [rbp+10h] BYREF

  v9 = HIDWORD(a1);
  plResult = 0LL;
  v7 = ConvertCoordinatesWithRoundingNoBounding(*a2, a2[2], *a3, a3[2], a1, (LONG *)&plResult);
  if ( !v7 )
    return 0LL;
  ConvertCoordinatesWithRoundingNoBounding(a2[1], a2[3], a3[1], a3[3], v9, (LONG *)&plResult + 1);
  *a4 = plResult;
  return v7;
}
