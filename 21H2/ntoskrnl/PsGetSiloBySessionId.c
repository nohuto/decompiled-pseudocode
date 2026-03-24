/*
 * XREFs of PsGetSiloBySessionId @ 0x140634520
 * Callers:
 *     SessionIsInteractive @ 0x140283248 (SessionIsInteractive.c)
 *     SeQuerySessionIdTokenEx @ 0x140634440 (SeQuerySessionIdTokenEx.c)
 *     SeQueryServerSiloToken @ 0x1406B04A0 (SeQueryServerSiloToken.c)
 *     PsIsServiceSession @ 0x1406C27A8 (PsIsServiceSession.c)
 *     EtwWmitraceWorker @ 0x14093C8C4 (EtwWmitraceWorker.c)
 * Callees:
 *     MmGetSessionById @ 0x140206410 (MmGetSessionById.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 */

__int64 __fastcall PsGetSiloBySessionId(
        __int64 a1,
        int (__fastcall **a2)(_DMA_ADAPTER *, _DEVICE_OBJECT *, _MDL *, void *, unsigned int, void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *), void *, unsigned __int8, void *, unsigned int))
{
  struct _DMA_ADAPTER *SessionById; // rax
  int (__fastcall *BuildScatterGatherList)(_DMA_ADAPTER *, _DEVICE_OBJECT *, _MDL *, void *, unsigned int, void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *), void *, unsigned __int8, void *, unsigned int); // rbx
  __int64 result; // rax

  SessionById = (struct _DMA_ADAPTER *)MmGetSessionById(a1, (__int64)a2);
  if ( !SessionById )
    return 3221226581LL;
  BuildScatterGatherList = SessionById[85].DmaOperations[3].BuildScatterGatherList;
  HalPutDmaAdapter(SessionById);
  result = 0LL;
  *a2 = BuildScatterGatherList;
  return result;
}
