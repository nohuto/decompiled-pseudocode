/*
 * XREFs of ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C009FC90
 * Callers:
 *     AllocateProcessHidTable @ 0x1C009E9C8 (AllocateProcessHidTable.c)
 *     FreeHidTLCInfo @ 0x1C009ED94 (FreeHidTLCInfo.c)
 *     AllocateAndLinkHidTLCInfo @ 0x1C009F204 (AllocateAndLinkHidTLCInfo.c)
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C009F8EC (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 *     ?DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z @ 0x1C009FCC0 (-DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C009FDF8 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     ?DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x1C01A9564 (-DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z.c)
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C01A9B10 (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     CleanupHidRequestList @ 0x1C01A9D00 (CleanupHidRequestList.c)
 * Callees:
 *     <none>
 */

void __fastcall RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded(RIMLOCKExclusiveIfNeeded *this)
{
  if ( *(_QWORD *)this )
  {
    RIMUnlockExclusive();
    *(_QWORD *)this = 0LL;
  }
}
