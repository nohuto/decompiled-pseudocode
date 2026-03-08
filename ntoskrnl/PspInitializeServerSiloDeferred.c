/*
 * XREFs of PspInitializeServerSiloDeferred @ 0x1409AA0D0
 * Callers:
 *     PspQueueDeferredWorkAndWait @ 0x1409AA20C (PspQueueDeferredWorkAndWait.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     sub_140606E08 @ 0x140606E08 (sub_140606E08.c)
 *     RtlNlsInitState @ 0x1408107AC (RtlNlsInitState.c)
 *     CmInitServerSiloState @ 0x140816884 (CmInitServerSiloState.c)
 *     PspInitializeProtectedProcessParameters @ 0x14084AAB4 (PspInitializeProtectedProcessParameters.c)
 *     ObInitServerSilo @ 0x14085264C (ObInitServerSilo.c)
 *     DbgkInitializeServerSilo @ 0x140933D20 (DbgkInitializeServerSilo.c)
 *     PsTerminateServerSilo @ 0x1409A98D0 (PsTerminateServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x1409A9DE8 (PspDeleteExternalServerSiloState.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x1409AA610 (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeIsStateSeparationEnabled @ 0x1409AA674 (PspSiloInitializeIsStateSeparationEnabled.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AA7BC (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1409AA8E8 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1409AAA20 (PspSiloLoadApiSets.c)
 *     PspNotifyServerSiloCreation @ 0x1409B1374 (PspNotifyServerSiloCreation.c)
 *     SeInitServerSilo @ 0x1409C5E50 (SeInitServerSilo.c)
 *     EtwInitializeSiloState @ 0x1409DF038 (EtwInitializeSiloState.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F52D8 (ExpTimeZoneInitSiloState.c)
 *     ExpNlsInitSiloState @ 0x1409F877C (ExpNlsInitSiloState.c)
 */

__int64 __fastcall PspInitializeServerSiloDeferred(struct _LIST_ENTRY *Object)
{
  _DWORD *ServerSiloGlobals; // rsi
  __int64 result; // rax
  int inited; // edi

  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)Object);
  RtlNlsInitState((__int64)ServerSiloGlobals);
  result = sub_140606E08(Object);
  if ( (int)result >= 0 )
  {
    result = PspSiloInitializeUserSharedData(Object);
    if ( (int)result >= 0 )
    {
      result = PspSiloInitializeSystemRootSymlink(Object);
      if ( (int)result >= 0 )
      {
        result = PspInitializeProtectedProcessParameters((__int64)ServerSiloGlobals);
        if ( (int)result >= 0 )
        {
          result = PspSiloLoadApiSets(Object);
          if ( (int)result >= 0 )
          {
            result = PspSiloInitializeIsMultiSessionSku(Object);
            if ( (int)result >= 0 )
            {
              result = PspSiloInitializeIsStateSeparationEnabled(Object);
              if ( (int)result >= 0 )
              {
                inited = ObInitServerSilo(Object);
                if ( inited < 0 )
                  goto LABEL_18;
                result = ExpTimeZoneInitSiloState(Object);
                if ( (int)result >= 0 )
                {
                  result = ExpNlsInitSiloState(Object);
                  if ( (int)result >= 0 )
                  {
                    inited = SeInitServerSilo(Object);
                    if ( inited >= 0 )
                    {
                      inited = CmInitServerSiloState();
                      if ( inited >= 0 )
                      {
                        inited = EtwInitializeSiloState(Object);
                        if ( inited >= 0 )
                        {
                          inited = DbgkInitializeServerSilo(Object);
                          if ( inited >= 0 )
                          {
                            inited = PspNotifyServerSiloCreation(Object);
                            if ( inited >= 0 )
                              return 0LL;
                            PsTerminateServerSilo((__int64)Object);
                            return (unsigned int)inited;
                          }
                        }
                      }
                    }
LABEL_18:
                    ServerSiloGlobals[326] = 4;
                    PspDeleteExternalServerSiloState((__int64)Object);
                    return (unsigned int)inited;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
