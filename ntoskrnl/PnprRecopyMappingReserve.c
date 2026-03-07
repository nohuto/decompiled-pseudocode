__int64 __fastcall PnprRecopyMappingReserve(__int64 *a1)
{
  unsigned __int64 v1; // rsi
  int v3; // ebx
  unsigned __int64 ContainingPageTable; // rax
  __int64 v5; // r8
  int v6; // edx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax

  v1 = 0LL;
  v3 = 0;
  while ( 1 )
  {
    ContainingPageTable = MiGetContainingPageTable(
                            (((a1[1] + (unsigned __int64)(unsigned int)(v3 << 12)) >> 9) & 0x7FFFFFFFF8LL)
                          - 0x98000000000LL);
    if ( ContainingPageTable != v1 )
    {
      v1 = ContainingPageTable;
      LOBYTE(v5) = 1;
      v6 = PnprMarkOrMirrorPages(ContainingPageTable << 12, 4096LL, v5);
      if ( v6 < 0 )
        break;
    }
    if ( (unsigned int)++v3 >= 0x10 )
    {
      PnprRecopyAddress(*a1, 0x30u);
      return 0LL;
    }
  }
  v8 = PnprContext;
  v9 = *(_DWORD *)(PnprContext + 33272);
  if ( !v9 )
    v9 = 5727;
  *(_DWORD *)(PnprContext + 33272) = v9;
  v10 = *(_DWORD *)(v8 + 33276);
  if ( !v10 )
    v10 = 1;
  *(_DWORD *)(v8 + 33276) = v10;
  return (unsigned int)v6;
}
