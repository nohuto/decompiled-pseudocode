/*
 * XREFs of UpdateRawMouseMode @ 0x1C00525A8
 * Callers:
 *     zzzAttachToQueue @ 0x1C0011EF4 (zzzAttachToQueue.c)
 *     SetNewForegroundQueue @ 0x1C003DC10 (SetNewForegroundQueue.c)
 *     SetWakeBit @ 0x1C0051920 (SetWakeBit.c)
 *     EditionUpdateRawMouseMode @ 0x1C0052580 (EditionUpdateRawMouseMode.c)
 *     LockCaptureWindow @ 0x1C00C09C4 (LockCaptureWindow.c)
 *     TransferWakeBit @ 0x1C00C1750 (TransferWakeBit.c)
 *     DestroyThreadHidObjects @ 0x1C0107960 (DestroyThreadHidObjects.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0108010 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     UnlockCaptureWindow @ 0x1C010B2B0 (UnlockCaptureWindow.c)
 * Callees:
 *     PtiMouseFromQ @ 0x1C005260C (PtiMouseFromQ.c)
 *     HasHidTable @ 0x1C0052630 (HasHidTable.c)
 */

__int64 __fastcall UpdateRawMouseMode(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // ecx

  result = gpqForeground;
  if ( a1 == gpqForeground )
  {
    v4 = PtiMouseFromQ(a1, a2);
    if ( !(unsigned int)HasHidTable(v4)
      || (v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiMouseFromQ(a1, v5) + 424) + 832LL) + 100LL),
          result = 1LL,
          (v6 & 1) == 0) )
    {
      result = 0LL;
    }
    LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = result;
  }
  return result;
}
