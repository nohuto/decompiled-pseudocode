/*
 * XREFs of ?GetMouseInputDataFromIVMouseInput@@YAXQEAU_MOUSE_INPUT_DATA@@QEAU_IVMouseInputData@@@Z @ 0x1C01EC8C0
 * Callers:
 *     ?DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x1C01EC560 (-DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z.c)
 *     ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x1C01EC638 (-DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

void __fastcall GetMouseInputDataFromIVMouseInput(
        struct _MOUSE_INPUT_DATA *const a1,
        struct _IVMouseInputData *const a2)
{
  struct _IVMouseInputData *v2; // r8
  __int64 v3; // rax

  v2 = a2;
  a1->UnitId = *(_WORD *)a2;
  a1->Flags = *((_WORD *)a2 + 2);
  a1->ButtonFlags = *((_WORD *)a2 + 4);
  a1->ButtonData = *((_WORD *)a2 + 6);
  a1->RawButtons = *((_DWORD *)a2 + 4);
  a1->LastX = *((_DWORD *)a2 + 5);
  a1->LastY = *((_DWORD *)a2 + 6);
  a1->ExtraInformation = *((_DWORD *)a2 + 7);
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = *((_QWORD *)v2 + 4);
    LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)v2,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      50,
      (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids,
      v3);
  }
}
