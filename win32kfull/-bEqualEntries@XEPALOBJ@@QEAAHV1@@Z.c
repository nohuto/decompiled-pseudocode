/*
 * XREFs of ?bEqualEntries@XEPALOBJ@@QEAAHV1@@Z @ 0x1C02DA538
 * Callers:
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C0019BA8 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     EngHTBlt @ 0x1C02E0A38 (EngHTBlt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XEPALOBJ::bEqualEntries(__int64 *a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rcx
  unsigned int v4; // r9d
  int v5; // eax
  __int64 v6; // r9
  __int64 v7; // r10
  unsigned __int64 v8; // rax

  v2 = 0;
  if ( !a2 )
    return 0LL;
  v3 = *a1;
  v4 = *(_DWORD *)(v3 + 28);
  if ( v4 != *(_DWORD *)(a2 + 28) )
    return 0LL;
  v5 = *(_DWORD *)(v3 + 24);
  if ( (v5 & 1) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 24) & 1) != 0 )
    {
      if ( v4 )
      {
        while ( ((*(_DWORD *)(*(_QWORD *)(v3 + 112) + 4LL * v2) ^ *(_DWORD *)(*(_QWORD *)(a2 + 112) + 4LL * v2)) & 0xFFFFFF) == 0 )
        {
          if ( ++v2 >= v4 )
            return 1LL;
        }
        return 0LL;
      }
      return 1LL;
    }
    return 0LL;
  }
  if ( (v5 & 2) == 0 )
  {
    if ( (v5 & 4) != 0 )
    {
      if ( (*(_DWORD *)(a2 + 24) & 4) == 0 )
        return 0LL;
    }
    else if ( (v5 & 8) == 0 || (*(_DWORD *)(a2 + 24) & 8) == 0 )
    {
      return 0LL;
    }
    return 1LL;
  }
  if ( (*(_DWORD *)(a2 + 24) & 2) == 0 )
    return 0LL;
  v6 = *(_QWORD *)(v3 + 112);
  v7 = *(_QWORD *)(a2 + 112);
  v8 = *(_QWORD *)v6 - *(_QWORD *)v7;
  if ( *(_QWORD *)v6 == *(_QWORD *)v7 )
    v8 = *(unsigned int *)(v6 + 8) - (unsigned __int64)*(unsigned int *)(v7 + 8);
  LOBYTE(v2) = v8 == 0;
  return v2;
}
