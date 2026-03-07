char __fastcall AcpiPortarbFindSuitableRange(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v6; // rcx
  UCHAR AttributeAvailableMask; // bp
  ULONG Flags; // esi
  ULONGLONG v9; // r10

  v4 = a2[5];
  if ( *(_QWORD *)(v4 + 16) )
  {
    v6 = a2[4];
    AttributeAvailableMask = 0;
    if ( (*(_DWORD *)(v6 + 40) & 0xFFFFFFFD) == 0 || (*(_DWORD *)(v6 + 44) & 1) != 0 )
      AttributeAvailableMask = 1;
    Flags = *(_DWORD *)(v4 + 36) & 1;
    while ( 1 )
    {
      v9 = a2[2];
      if ( v9 > a2[3]
        || RtlFindRange(
             *(PRTL_RANGE_LIST *)(a1 + 48),
             v9,
             a2[3],
             *(_QWORD *)(v4 + 16),
             *(_QWORD *)(v4 + 24),
             Flags,
             AttributeAvailableMask,
             *(PVOID *)(a1 + 328),
             *(PRTL_CONFLICT_RANGE_CALLBACK *)(a1 + 336),
             a2) < 0
        && !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64 *))(a1 + 272))(a1, a2) )
      {
        break;
      }
      a2[1] = *a2 - 1 + *(_QWORD *)(a2[5] + 16);
      if ( AcpiArblibIsAliasedRangeAvailable(a1, (__int128 *)a2) )
        return 1;
      v4 = a2[5];
      *a2 += *(_QWORD *)(v4 + 16);
    }
    return 0;
  }
  else
  {
    a2[1] = *a2;
    return 1;
  }
}
