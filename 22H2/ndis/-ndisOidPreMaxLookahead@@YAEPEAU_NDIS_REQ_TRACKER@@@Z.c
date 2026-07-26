/*
 * XREFs of ?ndisOidPreMaxLookahead@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009D560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ndisOidPreMaxLookahead(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r9
  char v2; // r8
  __int64 v3; // rdx

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v3 = *((_QWORD *)a1 + 4);
  if ( *(_QWORD *)a1 && (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) == 0 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v3 + 48) >= 4u )
    {
      v2 = 1;
      **(_DWORD **)(v3 + 40) = *(_DWORD *)(v1 + 596);
      *(_DWORD *)(v3 + 52) = 4;
    }
    else
    {
      *(_DWORD *)(v3 + 56) = 4;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
  }
  return v2;
}
