/*
 * XREFs of UpdateRawMouseMode @ 0x1C00CE364
 * Callers:
 *     LockCaptureWindow @ 0x1C0010C8C (LockCaptureWindow.c)
 *     TransferWakeBit @ 0x1C00CCF54 (TransferWakeBit.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1C00CD940 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     SetNewForegroundQueue @ 0x1C00CE270 (SetNewForegroundQueue.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00D5560 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadHidObjects @ 0x1C00D5730 (DestroyThreadHidObjects.c)
 *     UnlockCaptureWindow @ 0x1C00DC4A0 (UnlockCaptureWindow.c)
 * Callees:
 *     PtiMouseFromQ @ 0x1C0037050 (PtiMouseFromQ.c)
 *     HasHidTable @ 0x1C0038CB0 (HasHidTable.c)
 */

__int64 __fastcall UpdateRawMouseMode(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rax

  result = gpqForeground;
  if ( a1 == gpqForeground )
  {
    v3 = PtiMouseFromQ(a1);
    if ( !(unsigned int)HasHidTable(v3)
      || (v6 = PtiMouseFromQ(a1),
          v5 = 1,
          v4 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v6 + 424) + 824LL) + 100LL),
          (v4 & 1) == 0) )
    {
      v5 = 0;
    }
    result = SGDGetUserSessionState(v4);
    *(_DWORD *)(result + 15956) = v5;
  }
  return result;
}
