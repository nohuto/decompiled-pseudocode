PVOID __fastcall VIDMM_PROCESS_HEAP::MapLocked(VIDMM_PROCESS_HEAP *this, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a2[12] + 8LL);
  if ( (*(_BYTE *)(v2 + 10) & 5) != 0 )
    return *(PVOID *)(v2 + 24);
  else
    return MmMapLockedPagesSpecifyCache((PMDL)v2, 0, MmCached, 0LL, 0, 0x40000010u);
}
