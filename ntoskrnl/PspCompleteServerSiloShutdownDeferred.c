/*
 * XREFs of PspCompleteServerSiloShutdownDeferred @ 0x1409A9B20
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     PspSendJobNotification @ 0x14030201C (PspSendJobNotification.c)
 *     PsGetServerSiloState @ 0x1403552EC (PsGetServerSiloState.c)
 *     PspUnlockJob @ 0x1406FBF7C (PspUnlockJob.c)
 *     PspLockJobShared @ 0x1406FBFC0 (PspLockJobShared.c)
 *     PspDeleteExternalServerSiloState @ 0x1409A9DE8 (PspDeleteExternalServerSiloState.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1409AAAF0 (PspTerminateSiloSubsystemProcesses.c)
 *     PspNotifyServerSiloTermination @ 0x1409B147C (PspNotifyServerSiloTermination.c)
 */

LONG_PTR __fastcall PspCompleteServerSiloShutdownDeferred(_QWORD *Object)
{
  void *ServerSiloGlobals; // rdi
  __int64 v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  int v7; // esi
  struct _KTHREAD *CurrentThread; // rdi

  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)Object);
  if ( (unsigned int)PsGetServerSiloState(v3) != 3 )
    NT_ASSERT("PsGetServerSiloState(Silo) == SERVERSILO_TERMINATING");
  PspTerminateSiloSubsystemProcesses();
  v4 = (void *)*((_QWORD *)ServerSiloGlobals + 110);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *((_QWORD *)ServerSiloGlobals + 110) = 0LL;
  }
  v5 = (void *)*((_QWORD *)ServerSiloGlobals + 111);
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    *((_QWORD *)ServerSiloGlobals + 111) = 0LL;
  }
  PspNotifyServerSiloTermination(Object);
  PspDeleteExternalServerSiloState(Object);
  v6 = (void *)*((_QWORD *)ServerSiloGlobals + 109);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    *((_QWORD *)ServerSiloGlobals + 109) = 0LL;
  }
  v7 = *((_DWORD *)ServerSiloGlobals + 327);
  CurrentThread = KeGetCurrentThread();
  PspLockJobShared((__int64)Object, (__int64)CurrentThread);
  if ( Object[69] && (Object[136] & 0x2000) != 0 )
    PspSendJobNotification((__int64)Object, 13LL, v7, 0);
  PspUnlockJob((__int64)Object, (__int64)CurrentThread);
  return ObfDereferenceObject(Object);
}
