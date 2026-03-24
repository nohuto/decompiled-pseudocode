/*
 * XREFs of ?DrvAddEntryToGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0143C20
 * Callers:
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00C3560 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DrvAddEntryToGraphicsDeviceList(wchar_t *a1)
{
  __int64 v2; // rax

  v2 = WdLogNewEntry5_WdEvent(a1);
  *(_QWORD *)(v2 + 24) = a1;
  WdLogEvent5_WdEvent(v2);
  if ( gpGraphicsDeviceList )
    *((_QWORD *)gpGraphicsDeviceListLast + 16) = a1;
  else
    gpGraphicsDeviceList = a1;
  gpGraphicsDeviceListLast = (struct tagGRAPHICS_DEVICE *)a1;
}
