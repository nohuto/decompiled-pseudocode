/*
 * XREFs of ??0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0030F5C
 * Callers:
 *     ?LogData@VIDMM_PURGE_TELEMETRY@@QEAAXXZ @ 0x1C00F4394 (-LogData@VIDMM_PURGE_TELEMETRY@@QEAAXXZ.c)
 *     ?LogData@VIDMM_TELEMETRY_PAGING_COSTS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00F4494 (-LogData@VIDMM_TELEMETRY_PAGING_COSTS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

DXGAUTOPUSHLOCKFASTSHARED *__fastcall DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED(
        DXGAUTOPUSHLOCKFASTSHARED *this,
        struct DXGPUSHLOCKFAST *a2)
{
  DXGAUTOPUSHLOCKFASTSHARED *result; // rax

  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a2, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)a2 + 4);
  result = this;
  *((_BYTE *)this + 8) = 1;
  return result;
}
