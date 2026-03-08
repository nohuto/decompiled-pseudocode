/*
 * XREFs of ??4?$SharedMixedObjectPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1C0014FDC
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0014BB4 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     DestroyMonitor @ 0x1C00B5C00 (DestroyMonitor.c)
 *     ??4tagKERNELDISPLAYINFO@@QEAAAEAU0@AEAU0@@Z @ 0x1C01685BC (--4tagKERNELDISPLAYINFO@@QEAAAEAU0@AEAU0@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorPrimary<tagMONITOR>::operator=(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // r8

  v2 = *(a1 - 12);
  if ( a2 )
    *(_QWORD *)(v2 + 8) = *(_QWORD *)(a2 + 48);
  else
    *(_QWORD *)(v2 + 8) = 0LL;
  *a1 = a2;
  return a2;
}
