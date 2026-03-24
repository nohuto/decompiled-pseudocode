/*
 * XREFs of PspInitializeServerSiloDeferred @ 0x140906470
 * Callers:
 *     PspQueueDeferredWorkAndWait @ 0x140906584 (PspQueueDeferredWorkAndWait.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140252E18 (PsGetServerSiloGlobals.c)
 *     sub_1405B2E48 @ 0x1405B2E48 (sub_1405B2E48.c)
 *     ExpTimeZoneInitSiloState @ 0x1405D1B7C (ExpTimeZoneInitSiloState.c)
 *     EtwInitializeSiloState @ 0x14079ABF8 (EtwInitializeSiloState.c)
 *     PspInitializeProtectedProcessParameters @ 0x14079DF18 (PspInitializeProtectedProcessParameters.c)
 *     CmInitServerSiloState @ 0x1407A5728 (CmInitServerSiloState.c)
 *     ObInitServerSilo @ 0x1407C90E0 (ObInitServerSilo.c)
 *     DbgkInitializeServerSilo @ 0x140884388 (DbgkInitializeServerSilo.c)
 *     PsTerminateServerSilo @ 0x140905D00 (PsTerminateServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x140906238 (PspDeleteExternalServerSiloState.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x140906978 (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140906AC0 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140906BEC (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140906D14 (PspSiloLoadApiSets.c)
 *     PspNotifyServerSiloCreation @ 0x14090B7DC (PspNotifyServerSiloCreation.c)
 *     SeInitServerSilo @ 0x14091C0D4 (SeInitServerSilo.c)
 */

__int64 __fastcall PspInitializeServerSiloDeferred(struct _LIST_ENTRY *a1)
{
  _DWORD *ServerSiloGlobals; // rsi
  struct _LIST_ENTRY *v3; // rcx
  __int64 result; // rax
  int inited; // edi

  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)a1);
  result = sub_1405B2E48(v3);
  if ( (int)result >= 0 )
  {
    result = PspSiloInitializeUserSharedData(a1);
    if ( (int)result >= 0 )
    {
      result = PspSiloInitializeSystemRootSymlink(a1);
      if ( (int)result >= 0 )
      {
        result = PspInitializeProtectedProcessParameters((__int64)ServerSiloGlobals);
        if ( (int)result >= 0 )
        {
          result = PspSiloLoadApiSets(a1);
          if ( (int)result >= 0 )
          {
            result = PspSiloInitializeIsMultiSessionSku(a1);
            if ( (int)result >= 0 )
            {
              inited = ObInitServerSilo((__int64)a1);
              if ( inited < 0 )
                goto LABEL_16;
              result = ExpTimeZoneInitSiloState((__int64)a1);
              if ( (int)result < 0 )
                return result;
              inited = SeInitServerSilo(a1);
              if ( inited < 0
                || (inited = CmInitServerSiloState((__int64)a1), inited < 0)
                || (inited = EtwInitializeSiloState(a1), inited < 0)
                || (inited = DbgkInitializeServerSilo(a1), inited < 0) )
              {
LABEL_16:
                ServerSiloGlobals[278] = 4;
                PspDeleteExternalServerSiloState((__int64)a1);
              }
              else
              {
                inited = PspNotifyServerSiloCreation(a1);
                if ( inited >= 0 )
                  return 0LL;
                PsTerminateServerSilo((__int64)a1);
              }
              return (unsigned int)inited;
            }
          }
        }
      }
    }
  }
  return result;
}
