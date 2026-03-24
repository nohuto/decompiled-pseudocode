/*
 * XREFs of UpdateRawMouseMode @ 0x1C0052508
 * Callers:
 *     zzzAttachToQueue @ 0x1C0011EF4 (zzzAttachToQueue.c)
 *     SetNewForegroundQueue @ 0x1C003DB70 (SetNewForegroundQueue.c)
 *     SetWakeBit @ 0x1C0051880 (SetWakeBit.c)
 *     EditionUpdateRawMouseMode @ 0x1C00524E0 (EditionUpdateRawMouseMode.c)
 *     LockCaptureWindow @ 0x1C00C0664 (LockCaptureWindow.c)
 *     TransferWakeBit @ 0x1C00C13F0 (TransferWakeBit.c)
 *     DestroyThreadHidObjects @ 0x1C01075E0 (DestroyThreadHidObjects.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0107C90 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     UnlockCaptureWindow @ 0x1C010AF30 (UnlockCaptureWindow.c)
 * Callees:
 *     PtiMouseFromQ @ 0x1C005256C (PtiMouseFromQ.c)
 *     HasHidTable @ 0x1C0052590 (HasHidTable.c)
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
    *(&WPP_MAIN_CB.AlignmentRequirement + 1) = result;
  }
  return result;
}
