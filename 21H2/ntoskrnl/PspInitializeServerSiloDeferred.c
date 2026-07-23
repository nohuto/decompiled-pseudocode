/*
 * XREFs of PspInitializeServerSiloDeferred @ 0x1409065D0
 * Callers:
 *     PspQueueDeferredWorkAndWait @ 0x1409066E4 (PspQueueDeferredWorkAndWait.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     sub_1405B3078 @ 0x1405B3078 (sub_1405B3078.c)
 *     ExpTimeZoneInitSiloState @ 0x1405D1B7C (ExpTimeZoneInitSiloState.c)
 *     EtwInitializeSiloState @ 0x14079ADF8 (EtwInitializeSiloState.c)
 *     PspInitializeProtectedProcessParameters @ 0x14079E118 (PspInitializeProtectedProcessParameters.c)
 *     CmInitServerSiloState @ 0x1407A5928 (CmInitServerSiloState.c)
 *     ObInitServerSilo @ 0x1407C9400 (ObInitServerSilo.c)
 *     DbgkInitializeServerSilo @ 0x1408844E8 (DbgkInitializeServerSilo.c)
 *     PsTerminateServerSilo @ 0x140905E60 (PsTerminateServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x140906398 (PspDeleteExternalServerSiloState.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x140906AD8 (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140906C20 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140906D4C (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140906E74 (PspSiloLoadApiSets.c)
 *     PspNotifyServerSiloCreation @ 0x14090B93C (PspNotifyServerSiloCreation.c)
 *     SeInitServerSilo @ 0x14091C234 (SeInitServerSilo.c)
 */

__int64 __fastcall PspInitializeServerSiloDeferred(struct _LIST_ENTRY *a1)
{
  _DWORD *ServerSiloGlobals; // rsi
  struct _LIST_ENTRY *v3; // rcx
  __int64 result; // rax
  int inited; // edi

  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)a1);
  result = sub_1405B3078(v3);
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
