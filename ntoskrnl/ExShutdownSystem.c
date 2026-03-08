/*
 * XREFs of ExShutdownSystem @ 0x140AA79E8
 * Callers:
 *     PopGracefulShutdown @ 0x140A9D970 (PopGracefulShutdown.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ExpRecordShutdownTime @ 0x140603D68 (ExpRecordShutdownTime.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     ExSwapinWorkerThreads @ 0x1409FD778 (ExSwapinWorkerThreads.c)
 */

void ExShutdownSystem()
{
  int v0; // edx
  BOOLEAN v1; // cl
  _QWORD *ServerSiloGlobals; // rbx
  void *v3; // rcx
  void *v4; // rcx

  ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
  if ( v0 )
  {
    if ( v0 == 1 && (PopShutdownCleanly & 2) != 0 )
      ExSwapinWorkerThreads(v1);
  }
  else
  {
    ExpRecordShutdownTime();
    v3 = (void *)ServerSiloGlobals[111];
    ExpTooLateForErrors = 1;
    ExpShuttingDown = 1;
    if ( v3 )
    {
      ObfDereferenceObject(v3);
      ServerSiloGlobals[111] = 0LL;
    }
    v4 = (void *)ServerSiloGlobals[110];
    if ( v4 )
    {
      ObfDereferenceObjectWithTag(v4, 0x65487845u);
      ServerSiloGlobals[110] = 0LL;
    }
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
    if ( ExpControlKey )
    {
      ObfDereferenceObject(ExpControlKey);
      ExpControlKey = 0LL;
    }
    if ( qword_140C31458 )
    {
      ObfDereferenceObject(qword_140C31458);
      qword_140C31458 = 0LL;
    }
    if ( ExpProductTypeKey )
    {
      ObCloseHandle(ExpProductTypeKey, 0);
      ExpProductTypeKey = 0LL;
    }
    if ( ExpSetupKey )
    {
      ObCloseHandle(ExpSetupKey, 0);
      ExpSetupKey = 0LL;
    }
    ExReleasePushLockEx((__int64 *)&ExpKeyManipLock, 0LL);
  }
}
