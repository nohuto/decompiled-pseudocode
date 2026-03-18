/*
 * XREFs of PspInitializeServerSiloDeferred @ 0x1409AD150
 * Callers:
 *     PspQueueDeferredWorkAndWait @ 0x1409AD28C (PspQueueDeferredWorkAndWait.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140297574 (PsGetServerSiloGlobals.c)
 *     sub_140609258 @ 0x140609258 (sub_140609258.c)
 *     CmInitServerSiloState @ 0x14080EBB4 (CmInitServerSiloState.c)
 *     PspInitializeProtectedProcessParameters @ 0x14084E244 (PspInitializeProtectedProcessParameters.c)
 *     ObInitServerSilo @ 0x14085687C (ObInitServerSilo.c)
 *     RtlNlsInitState @ 0x140863E0C (RtlNlsInitState.c)
 *     DbgkInitializeServerSilo @ 0x140936D30 (DbgkInitializeServerSilo.c)
 *     PsTerminateServerSilo @ 0x1409AC950 (PsTerminateServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x1409ACE68 (PspDeleteExternalServerSiloState.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x1409AD690 (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeIsStateSeparationEnabled @ 0x1409AD6F4 (PspSiloInitializeIsStateSeparationEnabled.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AD83C (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1409AD968 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1409ADAA0 (PspSiloLoadApiSets.c)
 *     PspNotifyServerSiloCreation @ 0x1409B43C4 (PspNotifyServerSiloCreation.c)
 *     SeInitServerSilo @ 0x1409C8EA0 (SeInitServerSilo.c)
 *     EtwInitializeSiloState @ 0x1409E1ED8 (EtwInitializeSiloState.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F8168 (ExpTimeZoneInitSiloState.c)
 *     ExpNlsInitSiloState @ 0x1409FB60C (ExpNlsInitSiloState.c)
 */

__int64 __fastcall PspInitializeServerSiloDeferred(struct _LIST_ENTRY *Object)
{
  _DWORD *ServerSiloGlobals; // rsi
  __int64 result; // rax
  int inited; // edi

  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)Object);
  RtlNlsInitState((__int64)ServerSiloGlobals);
  result = sub_140609258(Object);
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
