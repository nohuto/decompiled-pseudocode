/*
 * XREFs of UpdateRawMouseMode @ 0x1C00ABF48
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     SetNewForegroundQueue @ 0x1C007FCD0 (SetNewForegroundQueue.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1C00A898C (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     LockCaptureWindow @ 0x1C00AAA80 (LockCaptureWindow.c)
 *     SetWakeBit @ 0x1C00ABE30 (SetWakeBit.c)
 *     EditionUpdateRawMouseMode @ 0x1C00ABF30 (EditionUpdateRawMouseMode.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00ADF5C (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     UnlockCaptureWindow @ 0x1C0102730 (UnlockCaptureWindow.c)
 *     DestroyThreadHidObjects @ 0x1C01028F0 (DestroyThreadHidObjects.c)
 * Callees:
 *     PtiMouseFromQ @ 0x1C00ABFA8 (PtiMouseFromQ.c)
 *     HasHidTable @ 0x1C00ABFD0 (HasHidTable.c)
 */

__int64 __fastcall UpdateRawMouseMode(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ecx

  result = gpqForeground;
  if ( a1 == gpqForeground )
  {
    v6 = PtiMouseFromQ(a1, a2, a3, a4);
    if ( !(unsigned int)HasHidTable(v6)
      || (v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiMouseFromQ(a1, v7, v8, v9) + 424) + 832LL) + 100LL),
          result = 1LL,
          (v10 & 1) == 0) )
    {
      result = 0LL;
    }
    LODWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) = result;
  }
  return result;
}
