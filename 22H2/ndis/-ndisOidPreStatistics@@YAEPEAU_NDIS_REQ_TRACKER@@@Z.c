/*
 * XREFs of ?ndisOidPreStatistics@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009E860
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisSSGetCachedOidValue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A7014 (-ndisSSGetCachedOidValue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

char __fastcall ndisOidPreStatistics(struct _NDIS_REQ_TRACKER *a1)
{
  char v1; // r8
  __int64 v2; // r9

  v1 = 0;
  v2 = *(_QWORD *)a1;
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 4) + 4LL) & 0xFFFFFFFD) != 0 )
  {
    v1 = 1;
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  else if ( v2 && *(_QWORD *)(v2 + 4448) )
  {
    return ndisSSGetCachedOidValue(a1);
  }
  return v1;
}
