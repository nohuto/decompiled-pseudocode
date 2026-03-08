/*
 * XREFs of PtiMouseFromQ @ 0x1C0037050
 * Callers:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C00219C0 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     EditionUpdateRawMouseMode @ 0x1C0036FE0 (EditionUpdateRawMouseMode.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C00388C0 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     SetWakeBit @ 0x1C0038B60 (SetWakeBit.c)
 *     UpdateRawMouseMode @ 0x1C00CE364 (UpdateRawMouseMode.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00D5560 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadHidObjects @ 0x1C00D5730 (DestroyThreadHidObjects.c)
 *     EditionPostRawMouseInputMessage @ 0x1C0142A40 (EditionPostRawMouseInputMessage.c)
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
