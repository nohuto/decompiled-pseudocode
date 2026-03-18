/*
 * XREFs of PtiMouseFromQ @ 0x1C005E080
 * Callers:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C005CFC0 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     UpdateRawMouseMode @ 0x1C005DFA4 (UpdateRawMouseMode.c)
 *     EditionUpdateRawMouseMode @ 0x1C005E010 (EditionUpdateRawMouseMode.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C009EE00 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadHidObjects @ 0x1C009EFD0 (DestroyThreadHidObjects.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C01180A8 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     SetWakeBit @ 0x1C0118350 (SetWakeBit.c)
 *     EditionPostRawMouseInputMessage @ 0x1C014F920 (EditionPostRawMouseInputMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PtiMouseFromQ(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
    return *(_QWORD *)(v1 + 16);
  else
    return *(_QWORD *)(a1 + 96);
}
