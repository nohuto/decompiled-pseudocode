__int64 __fastcall PnprMapPhysicalPages(PMDL *a1, unsigned __int64 a2, unsigned __int64 *a3, _QWORD *a4)
{
  __int64 v6; // rdx
  int v9; // eax
  int v10; // eax
  __int64 result; // rax
  unsigned __int64 v12; // rdi
  PMDL v13; // r8
  PMDL v14; // rcx
  struct _MDL *v15; // rsi
  struct _MDL *v16; // rax
  unsigned __int64 i; // r8
  PVOID v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax

  v6 = PnprContext;
  if ( (*(_DWORD *)(PnprContext + 64) & 4) != 0 )
  {
    if ( (a2 & 0xFFF) != 0 || (v12 = *a3) == 0 || (v12 & 0xFFF) != 0 )
    {
      v22 = *(_DWORD *)(PnprContext + 33272);
      if ( !v22 )
        v22 = 4085;
      *(_DWORD *)(PnprContext + 33272) = v22;
      v23 = *(_DWORD *)(v6 + 33276);
      if ( !v23 )
        v23 = 8;
      *(_DWORD *)(v6 + 33276) = v23;
      return 3221225485LL;
    }
    else
    {
      v13 = *a1;
      if ( v12 > 0x10000 )
        v12 = 0x10000LL;
      if ( (v13->MdlFlags & 1) != 0 )
        MmUnmapReservedMapping(a1[1], 0x51706E50u, v13);
      v14 = *a1;
      v15 = (struct _MDL *)(a2 >> 12);
      v14->Size = 8 * (((v12 + 4095) >> 12) + 6);
      v14->Next = 0LL;
      v14->MdlFlags = 0;
      v14->StartVa = 0LL;
      v14->ByteOffset = 0;
      v14->ByteCount = v12;
      v16 = *a1 + 1;
      for ( i = v12 >> 12; i; --i )
      {
        v16->Next = v15;
        v16 = (struct _MDL *)((char *)v16 + 8);
        v15 = (struct _MDL *)((char *)v15 + 1);
      }
      (*a1)->MdlFlags |= *((_WORD *)a1 + 8);
      v18 = MmMapLockedPagesWithReservedMapping(a1[1], 0x51706E50u, *a1, MmCached);
      if ( v18 )
      {
        *a4 = v18;
        result = 0LL;
        *a3 = v12;
      }
      else
      {
        v19 = PnprContext;
        v20 = *(_DWORD *)(PnprContext + 33272);
        if ( !v20 )
          v20 = 4140;
        *(_DWORD *)(PnprContext + 33272) = v20;
        v21 = *(_DWORD *)(v19 + 33276);
        if ( !v21 )
          v21 = 10;
        *(_DWORD *)(v19 + 33276) = v21;
        return 3221225626LL;
      }
    }
  }
  else
  {
    v9 = *(_DWORD *)(PnprContext + 33272);
    if ( !v9 )
      v9 = 4077;
    *(_DWORD *)(PnprContext + 33272) = v9;
    v10 = *(_DWORD *)(v6 + 33276);
    if ( !v10 )
      v10 = 8;
    *(_DWORD *)(v6 + 33276) = v10;
    return 3221225498LL;
  }
  return result;
}
