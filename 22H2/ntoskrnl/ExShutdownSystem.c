/*
 * XREFs of ExShutdownSystem @ 0x140AAAC18
 * Callers:
 *     PopGracefulShutdown @ 0x140AA0B20 (PopGracefulShutdown.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x140297574 (PsGetServerSiloGlobals.c)
 *     ExpRecordShutdownTime @ 0x1406061B8 (ExpRecordShutdownTime.c)
 *     ObCloseHandle @ 0x14076BDA0 (ObCloseHandle.c)
 *     ExSwapinWorkerThreads @ 0x140A00678 (ExSwapinWorkerThreads.c)
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
    if ( qword_140C31858 )
    {
      ObfDereferenceObject(qword_140C31858);
      qword_140C31858 = 0LL;
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
