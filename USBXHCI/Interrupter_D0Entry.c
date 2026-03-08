/*
 * XREFs of Interrupter_D0Entry @ 0x1C0014924
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C00144B0 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C000A8E4 (Controller_IsControllerAccessible.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C0014B54 (Interrupter_InterrupterRegisterIntialize.c)
 *     Interrupter_Initialize @ 0x1C0014CBC (Interrupter_Initialize.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0030E00 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall Interrupter_D0Entry(__int64 a1, int a2, char a3)
{
  char v6; // [rsp+30h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v6 = a2;
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_qL(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      a2,
      9,
      33,
      (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
      a1,
      v6);
  }
  if ( Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    if ( !a3 )
      Interrupter_Initialize(a1);
    Interrupter_InterrupterRegisterIntialize(a1);
  }
  return 0LL;
}
