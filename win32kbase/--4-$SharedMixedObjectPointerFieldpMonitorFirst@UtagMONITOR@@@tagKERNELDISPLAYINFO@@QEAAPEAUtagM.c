/*
 * XREFs of ??4?$SharedMixedObjectPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1C0016324
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0014608 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     DestroyMonitor @ 0x1C00B5C00 (DestroyMonitor.c)
 *     ??4tagKERNELDISPLAYINFO@@QEAAAEAU0@AEAU0@@Z @ 0x1C01685BC (--4tagKERNELDISPLAYINFO@@QEAAAEAU0@AEAU0@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorFirst<tagMONITOR>::operator=(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // r8

  v2 = *(a1 - 13);
  if ( a2 )
    *(_QWORD *)(v2 + 16) = *(_QWORD *)(a2 + 48);
  else
    *(_QWORD *)(v2 + 16) = 0LL;
  *a1 = a2;
  return a2;
}
