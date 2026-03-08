/*
 * XREFs of PnprSwap @ 0x1405610DC
 * Callers:
 *     PnprEndMirroring @ 0x140A997C0 (PnprEndMirroring.c)
 *     PnprInitiateReplaceOperation @ 0x140A99894 (PnprInitiateReplaceOperation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PnprSwapFinalize @ 0x140561300 (PnprSwapFinalize.c)
 *     MmUnmapReservedMapping @ 0x14061C4D0 (MmUnmapReservedMapping.c)
 *     PnprMirrorMarkedPages @ 0x140A9A0AC (PnprMirrorMarkedPages.c)
 */

__int64 PnprSwap()
{
  __int64 v0; // rcx
  int v1; // edi
  __int64 v2; // rdx
  int v3; // ecx
  int v4; // eax
  __int64 v5; // rax
  __int64 (__fastcall *v6)(_QWORD); // rax
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  __int64 i; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 result; // rax

  v0 = PnprContext;
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) && (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
  {
    if ( *(int *)(PnprContext + 200) < 2 )
      *(_DWORD *)(PnprContext + 200) = 2;
    v1 = PnprMirrorMarkedPages();
    if ( v1 < 0 )
    {
      v2 = PnprContext;
      v3 = *(_DWORD *)(PnprContext + 33272);
      if ( !v3 )
        v3 = 2826;
      v4 = *(_DWORD *)(PnprContext + 33276);
      *(_DWORD *)(PnprContext + 33272) = v3;
      if ( !v4 )
        v4 = 1;
LABEL_10:
      *(_DWORD *)(v2 + 33276) = v4;
      goto LABEL_34;
    }
    v5 = PnprContext;
    *(_DWORD *)(PnprContext + 204) = 1;
    *(_DWORD *)(v5 + 200) = 3;
    v0 = PnprContext;
    if ( *(_DWORD *)(v5 + 204) < *(_DWORD *)(PnprContext + 176) )
    {
      do
      {
        _mm_pause();
        v0 = PnprContext;
      }
      while ( *(_DWORD *)(PnprContext + 204) < *(_DWORD *)(PnprContext + 176) );
    }
  }
  v6 = *(__int64 (__fastcall **)(_QWORD))(v0 + 33248);
  if ( v6 )
  {
    v1 = v6(*(_QWORD *)(v0 + 33168));
    if ( v1 < 0 )
    {
      v2 = PnprContext;
      v7 = *(_DWORD *)(PnprContext + 33272);
      if ( !v7 )
        v7 = 2846;
      *(_DWORD *)(PnprContext + 33272) = v7;
      v4 = *(_DWORD *)(v2 + 33276);
      if ( !v4 )
        v4 = 8;
      goto LABEL_10;
    }
  }
  v8 = PnprContext;
  *(_DWORD *)(PnprContext + 204) = 1;
  *(_DWORD *)(v8 + 200) = 4;
  while ( *(_DWORD *)(v8 + 204) < *(_DWORD *)(PnprContext + 176) )
  {
    _mm_pause();
    v8 = PnprContext;
  }
  v9 = PnprSwapFinalize();
  v2 = PnprContext;
  v1 = v9;
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(PnprContext + 176); i = (unsigned int)(i + 1) )
    {
      v11 = *(_QWORD *)(v2 + 136) + 24 * i;
      if ( v11 )
      {
        v12 = *(_QWORD *)v11;
        if ( *(_QWORD *)v11 )
        {
          if ( (*(_BYTE *)(v12 + 10) & 1) != 0 )
            MmUnmapReservedMapping(*(PVOID *)(v11 + 8), 0x51706E50u, (PMDL)v12);
        }
      }
      v13 = *(_QWORD *)(PnprContext + 144) + 24 * i;
      if ( v13 )
      {
        v14 = *(_QWORD *)v13;
        if ( *(_QWORD *)v13 )
        {
          if ( (*(_BYTE *)(v14 + 10) & 1) != 0 )
            MmUnmapReservedMapping(*(PVOID *)(v13 + 8), 0x51706E50u, (PMDL)v14);
        }
      }
      v2 = PnprContext;
    }
  }
LABEL_34:
  result = (unsigned int)v1;
  *(_DWORD *)(v2 + 200) = 5;
  return result;
}
