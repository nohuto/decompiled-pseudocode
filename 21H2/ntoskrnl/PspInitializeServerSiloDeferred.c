/*
 * XREFs of PspInitializeServerSiloDeferred @ 0x1409AC180
 * Callers:
 *     PspQueueDeferredWorkAndWait @ 0x1409AC2BC (PspQueueDeferredWorkAndWait.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140204738 (PsGetServerSiloGlobals.c)
 *     sub_140639DA4 @ 0x140639DA4 (sub_140639DA4.c)
 *     PspInitializeProtectedProcessParameters @ 0x140854454 (PspInitializeProtectedProcessParameters.c)
 *     ObInitServerSilo @ 0x140859318 (ObInitServerSilo.c)
 *     CmInitServerSiloState @ 0x140861E8C (CmInitServerSiloState.c)
 *     RtlNlsInitState @ 0x14086379C (RtlNlsInitState.c)
 *     DbgkInitializeServerSilo @ 0x140927240 (DbgkInitializeServerSilo.c)
 *     PsTerminateServerSilo @ 0x1409AB9B0 (PsTerminateServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x1409ABED8 (PspDeleteExternalServerSiloState.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x1409AC6C0 (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeIsStateSeparationEnabled @ 0x1409AC724 (PspSiloInitializeIsStateSeparationEnabled.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AC86C (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1409AC998 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1409ACAD0 (PspSiloLoadApiSets.c)
 *     PspNotifyServerSiloCreation @ 0x1409B1E4C (PspNotifyServerSiloCreation.c)
 *     SeInitServerSilo @ 0x1409C5A90 (SeInitServerSilo.c)
 *     EtwInitializeSiloState @ 0x1409DEF5C (EtwInitializeSiloState.c)
 *     ExpTimeZoneInitSiloState @ 0x1409F8178 (ExpTimeZoneInitSiloState.c)
 *     ExpNlsInitSiloState @ 0x1409FB4F4 (ExpNlsInitSiloState.c)
 */

__int64 __fastcall PspInitializeServerSiloDeferred(struct _LIST_ENTRY *Object)
{
  _DWORD *ServerSiloGlobals; // rsi
  __int64 result; // rax
  int inited; // edi

  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)Object);
  RtlNlsInitState((__int64)ServerSiloGlobals);
  result = sub_140639DA4(Object);
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
