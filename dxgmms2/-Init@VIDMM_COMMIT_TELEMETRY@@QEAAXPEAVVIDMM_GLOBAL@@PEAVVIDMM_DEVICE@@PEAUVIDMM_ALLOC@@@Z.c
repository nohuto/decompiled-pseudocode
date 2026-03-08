/*
 * XREFs of ?Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x1C00B5A20
 * Callers:
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A8210 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00B7F80 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::Init(
        VIDMM_COMMIT_TELEMETRY *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_DEVICE *a3,
        struct VIDMM_ALLOC *a4)
{
  if ( !*((_BYTE *)this + 24) && a2 )
  {
    if ( a3 )
    {
      *((_QWORD *)this + 1) = a3;
      *((_QWORD *)this + 2) = a4;
      *(_QWORD *)this = a2;
      *((_BYTE *)this + 24) = 1;
    }
  }
}
