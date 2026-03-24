/*
 * XREFs of RIMAllocateAndLinkHidTLCInfo @ 0x1C00AC134
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00572E8 (RIMCreateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C0162D0C (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C01674DC (RIMIDECreateHIDDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1C017F394 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     RIMSearchHidTLCInfo @ 0x1C00AC2AC (RIMSearchHidTLCInfo.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00AC318 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00AC35C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RIMIsLegacyDevice @ 0x1C00AC394 (RIMIsLegacyDevice.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

_WORD *__fastcall RIMAllocateAndLinkHidTLCInfo(unsigned __int16 a1, unsigned __int16 a2)
{
  _WORD *v4; // rbx
  _WORD *v5; // rax
  int v6; // edx
  _WORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  char v11; // [rsp+68h] [rbp+20h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v11, (struct RIMLOCK *)&gTLCInfoLock);
  v4 = 0LL;
  if ( (unsigned int)RIMIsLegacyDevice(a1, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 117LL);
  if ( RIMSearchHidTLCInfo(a1, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 122LL);
  v5 = Win32AllocPoolZInit(0x30uLL, 1886417746LL);
  v7 = v5;
  if ( v5 )
  {
    v5[8] = a1;
    v5[9] = a2;
    v8 = RawInputManagerObject::gHidRequestTable;
    if ( *(_UNKNOWN **)(RawInputManagerObject::gHidRequestTable + 8LL) != &RawInputManagerObject::gHidRequestTable )
      __fastfail(3u);
    *((_QWORD *)v7 + 1) = &RawInputManagerObject::gHidRequestTable;
    *(_QWORD *)v7 = v8;
    *(_QWORD *)(v8 + 8) = v7;
    v9 = qword_1C0255470;
    RawInputManagerObject::gHidRequestTable = v7;
    while ( (__int64 *)v9 != &qword_1C0255470 )
    {
      if ( *(_WORD *)(v9 + 16) == a1 )
      {
        *((_DWORD *)v7 + 8) = *(_DWORD *)(v9 + 20);
        break;
      }
      v9 = *(_QWORD *)v9;
    }
    v4 = v7;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v6, 1, 10, (__int64)&WPP_a0b5b16cda2033ba1f9b108e5e9119e6_Traceguids);
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v11);
  return v4;
}
