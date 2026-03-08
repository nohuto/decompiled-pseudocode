/*
 * XREFs of ?ContainsMotionData@MouseInputDataEx@CMouseProcessor@@QEBA_NXZ @ 0x1C007B140
 * Callers:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C007A458 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C007A654 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMouseProcessor::MouseInputDataEx::ContainsMotionData(CMouseProcessor::MouseInputDataEx *this)
{
  bool result; // al

  if ( (*((_BYTE *)this + 2) & 1) != 0 )
    return 1;
  result = 0;
  if ( *((_DWORD *)this + 3) || *((_DWORD *)this + 4) )
    return 1;
  return result;
}
