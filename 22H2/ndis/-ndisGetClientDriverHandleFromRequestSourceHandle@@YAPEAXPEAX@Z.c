/*
 * XREFs of ?ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z @ 0x1C011D738
 * Callers:
 *     ?ndisOidPrePDCloseProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C011D7F0 (-ndisOidPrePDCloseProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPrePDOpenProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C011DB80 (-ndisOidPrePDOpenProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall ndisGetClientDriverHandleFromRequestSourceHandle(_QWORD *a1)
{
  void *result; // rax

  result = 0LL;
  if ( *(_BYTE *)a1 == 18 )
    return (void *)a1[3];
  if ( *(_BYTE *)a1 == 5 )
    return (void *)a1[2];
  return result;
}
