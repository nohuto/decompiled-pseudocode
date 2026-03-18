/*
 * XREFs of ?DrvAddEntryToGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0170880
 * Callers:
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00D1F30 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DrvAddEntryToGraphicsDeviceList(wchar_t *a1)
{
  WdLogSingleEntry1(4LL, a1);
  if ( gpGraphicsDeviceList )
    *((_QWORD *)gpGraphicsDeviceListLast + 16) = a1;
  else
    gpGraphicsDeviceList = a1;
  gpGraphicsDeviceListLast = (struct tagGRAPHICS_DEVICE *)a1;
}
