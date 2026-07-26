/*
 * XREFs of ?ndisOidPrePhysicalMedium@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0009070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisOidPrePhysicalMedium(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  int v3; // r9d
  __int64 v4; // r8
  int v5; // ecx

  v1 = *((_QWORD *)a1 + 4);
  v2 = *((_QWORD *)a1 + 2);
  v3 = *(_DWORD *)(v1 + 32);
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 32);
  }
  else
  {
    v4 = 0LL;
    if ( *(_QWORD *)a1 )
      v4 = *(_QWORD *)a1;
  }
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  else
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) < 4u )
    {
      *(_DWORD *)(v1 + 56) = 4;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    else
    {
      v5 = *(_DWORD *)(v4 + 1832);
      if ( v3 == 66050 && v5 == 14 )
        v5 = 0;
      **(_DWORD **)(v1 + 40) = v5;
      *(_DWORD *)(v1 + 52) = 4;
    }
  }
  return 1;
}
