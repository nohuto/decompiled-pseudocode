/*
 * XREFs of _CmClassPropertyRead @ 0x1402426B4
 * Callers:
 *     _CmGetInstallerClassRegPropWorker @ 0x1406BDC58 (_CmGetInstallerClassRegPropWorker.c)
 *     PiPnpRtlCmActionCallback @ 0x140779F10 (PiPnpRtlCmActionCallback.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140A255C0 (_CmSetInstallerClassRegPropWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmClassPropertyRead(int a1)
{
  if ( a1 > 19 )
    return a1 > 23 && (a1 == 24 || a1 > 25 && a1 <= 28);
  return a1 >= 18 || a1 >= 8 && (a1 == 8 || a1 == 13);
}
