PVOID __fastcall SmMapPage(__int64 a1, _DWORD *a2)
{
  PVOID result; // rax

  if ( (*(_BYTE *)(a1 + 10) & 5) != 0 )
    result = *(PVOID *)(a1 + 24);
  else
    result = MmMapLockedPagesSpecifyCache((PMDL)a1, 0, MmCached, 0LL, 0, 0x40000010u);
  if ( result )
    *a2 = *(_DWORD *)(a1 + 40);
  return result;
}
