/*
 * XREFs of PspCompleteServerSiloShutdownDeferred @ 0x1409060C0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloState @ 0x14023C5EC (PsGetServerSiloState.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PspSendJobNotification @ 0x14024234C (PspSendJobNotification.c)
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     PspUnlockJob @ 0x140682390 (PspUnlockJob.c)
 *     PspLockJobShared @ 0x1406823FC (PspLockJobShared.c)
 *     PspDeleteExternalServerSiloState @ 0x140906398 (PspDeleteExternalServerSiloState.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140906F44 (PspTerminateSiloSubsystemProcesses.c)
 *     PspNotifyServerSiloTermination @ 0x14090BA44 (PspNotifyServerSiloTermination.c)
 */

void __fastcall PspCompleteServerSiloShutdownDeferred(PADAPTER_OBJECT DmaAdapter)
{
  void *ServerSiloGlobals; // rdi
  __int64 v3; // rcx
  struct _DMA_ADAPTER *v4; // rcx
  struct _DMA_ADAPTER *v5; // rcx
  struct _DMA_ADAPTER *v6; // rcx
  int v7; // esi
  struct _KTHREAD *CurrentThread; // rdi

  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)DmaAdapter);
  if ( (unsigned int)PsGetServerSiloState(v3) != 3 )
    NT_ASSERT("PsGetServerSiloState(Silo) == SERVERSILO_TERMINATING");
  PspTerminateSiloSubsystemProcesses();
  v4 = (struct _DMA_ADAPTER *)*((_QWORD *)ServerSiloGlobals + 110);
  if ( v4 )
  {
    HalPutDmaAdapter(v4);
    *((_QWORD *)ServerSiloGlobals + 110) = 0LL;
  }
  v5 = (struct _DMA_ADAPTER *)*((_QWORD *)ServerSiloGlobals + 111);
  if ( v5 )
  {
    HalPutDmaAdapter(v5);
    *((_QWORD *)ServerSiloGlobals + 111) = 0LL;
  }
  PspNotifyServerSiloTermination(DmaAdapter);
  PspDeleteExternalServerSiloState(DmaAdapter);
  v6 = (struct _DMA_ADAPTER *)*((_QWORD *)ServerSiloGlobals + 109);
  if ( v6 )
  {
    HalPutDmaAdapter(v6);
    *((_QWORD *)ServerSiloGlobals + 109) = 0LL;
  }
  v7 = *((_DWORD *)ServerSiloGlobals + 279);
  CurrentThread = KeGetCurrentThread();
  PspLockJobShared((__int64)DmaAdapter, (__int64)CurrentThread);
  if ( DmaAdapter[28].DmaOperations && (HIDWORD(DmaAdapter[54].DmaOperations) & 0x2000) != 0 )
    PspSendJobNotification((__int64)DmaAdapter, 13LL, v7, 0);
  PspUnlockJob((__int64)DmaAdapter, (__int64)CurrentThread);
  HalPutDmaAdapter(DmaAdapter);
}
