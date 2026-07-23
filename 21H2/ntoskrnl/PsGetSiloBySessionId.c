/*
 * XREFs of PsGetSiloBySessionId @ 0x14068FAB4
 * Callers:
 *     SessionIsInteractive @ 0x14027141C (SessionIsInteractive.c)
 *     SeQueryServerSiloToken @ 0x14060EDA0 (SeQueryServerSiloToken.c)
 *     PsIsServiceSession @ 0x140621468 (PsIsServiceSession.c)
 *     SeQuerySessionIdTokenEx @ 0x14068FA10 (SeQuerySessionIdTokenEx.c)
 *     EtwWmitraceWorker @ 0x14093CA94 (EtwWmitraceWorker.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MmGetSessionById @ 0x1402AAD40 (MmGetSessionById.c)
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
