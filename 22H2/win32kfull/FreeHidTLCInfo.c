/*
 * XREFs of FreeHidTLCInfo @ 0x1C009ED94
 * Callers:
 *     ?DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z @ 0x1C009FCC0 (-DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C009FDF8 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     ?DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x1C01A9564 (-DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z.c)
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C01A9B10 (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     CleanupHidRequestList @ 0x1C01A9D00 (CleanupHidRequestList.c)
 * Callees:
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C009FBE0 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C009FC90 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 */

void __fastcall FreeHidTLCInfo(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = SGDGetUserSessionState(a1);
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v5, (struct RIMLOCK *)(v2 + 288));
  v3 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v4 = (_QWORD *)a1[1], (_QWORD *)*v4 != a1) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  Win32FreePool(a1);
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v5);
}
