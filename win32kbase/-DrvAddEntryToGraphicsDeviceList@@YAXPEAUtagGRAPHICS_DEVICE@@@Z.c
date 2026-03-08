/*
 * XREFs of ?DrvAddEntryToGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C018D694
 * Callers:
 *     DrvAddMirrorDriversToRemoteList @ 0x1C00D7164 (DrvAddMirrorDriversToRemoteList.c)
 * Callees:
 *     <none>
 */

void __fastcall DrvAddEntryToGraphicsDeviceList(struct tagGRAPHICS_DEVICE *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  WdLogSingleEntry1(4LL, a1);
  v3 = *(_QWORD *)(SGDGetSessionState(v2) + 24);
  if ( *(_QWORD *)(v3 + 1264) )
    *(_QWORD *)(*(_QWORD *)(v3 + 1272) + 128LL) = a1;
  else
    *(_QWORD *)(v3 + 1264) = a1;
  *(_QWORD *)(v3 + 1272) = a1;
}
