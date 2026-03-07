_BOOL8 __fastcall MiVadPureReserve(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x200000) != 0 )
    return (v1 & 0x70) == 0 && *(int *)(a1 + 52) >= 0;
  if ( (*(_DWORD *)(a1 + 48) & 0xF80) != 0xC00 )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 72);
  if ( *(_QWORD *)(*(_QWORD *)v3 + 64LL) )
    return 0LL;
  return (*(_DWORD *)(*(_QWORD *)v3 + 56LL) >> 12) & 1;
}
